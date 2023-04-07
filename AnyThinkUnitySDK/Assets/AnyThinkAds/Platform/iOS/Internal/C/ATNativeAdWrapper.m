//
//  ATNativeAdWrapper.m
//  UnityContainer
//
//  Created by Martin Lau on 27/07/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#import "ATNativeAdWrapper.h"
#import "ATUnityUtilities.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AnyThinkNative/ATAdManager+Native.h>
#import <AnyThinkNative/ATNativeAdConfiguration.h>
#import <AnyThinkNative/ATNativeADView.h>
#import "ATAutolayoutCategories.h"
#import "ATUnityManager.h"
#import "ATNativeSelfRenderView.h"
#define kNavigationBarHeight ([[UIApplication sharedApplication] statusBarOrientation] == UIInterfaceOrientationPortrait || [[UIApplication sharedApplication] statusBarOrientation] == UIInterfaceOrientationPortraitUpsideDown ? ([[UIApplication sharedApplication]statusBarFrame].size.height + 44) : ([[UIApplication sharedApplication]statusBarFrame].size.height - 4))

#define kScreenW ([[UIApplication sharedApplication] statusBarOrientation] == UIInterfaceOrientationPortrait || [[UIApplication sharedApplication] statusBarOrientation] == UIInterfaceOrientationPortraitUpsideDown ? UIScreen.mainScreen.bounds.size.width : UIScreen.mainScreen.bounds.size.height)

 NSString *const kParsedPropertiesFrameKey = @"frame";
 NSString *const kParsedPropertiesBackgroundColorKey = @"background_color";
 NSString *const kParsedPropertiesTextColorKey = @"text_color";
 NSString *const kParsedPropertiesTextSizeKey = @"text_size";

 NSString *const kNativeAssetAdvertiser = @"advertiser_label";
 NSString *const kNativeAssetText = @"text";
 NSString *const kNativeAssetTitle = @"title";
 NSString *const kNativeAssetCta = @"cta";
 NSString *const kNativeAssetRating = @"rating";
 NSString *const kNativeAssetIcon = @"icon";
 NSString *const kNativeAssetMainImage = @"main_image";
 NSString *const kNativeAssetSponsorImage = @"sponsor_image";
 NSString *const kNativeAssetDislike = @"dislike_button";
 NSString *const kNativeAssetMedia = @"media";

 NSString *kATAdLoadingExtraNativeAdSizeKey = @"native_ad_size";
 NSString *kATNativeAdSizeUsesPixelFlagKey = @"uses_pixel";

NSDictionary* at_parseUnityProperties(NSDictionary *properties) {
    NSMutableDictionary *result = NSMutableDictionary.dictionary;
    CGFloat scale = [properties[@"usesPixel"] boolValue] ? [UIScreen mainScreen].nativeScale : 1.0f;
    result[kParsedPropertiesFrameKey] = [NSString stringWithFormat:@"{{%@, %@}, {%@, %@}}", @([properties[@"x"] doubleValue] / scale), @([properties[@"y"] doubleValue] / scale), @([properties[@"width"] doubleValue] / scale), @([properties[@"height"] doubleValue] / scale)];
    result[kParsedPropertiesBackgroundColorKey] = properties[@"backgroundColor"];
    result[kParsedPropertiesTextColorKey] = properties[@"textColor"];
    result[kParsedPropertiesTextSizeKey] = properties[@"textSize"];
    
    return result;
}

NSDictionary* at_parseUnityMetrics(NSDictionary* metrics) {
    NSMutableDictionary *result = NSMutableDictionary.dictionary;
    NSDictionary *keysMap = @{@"appIcon":kNativeAssetIcon, @"mainImage":kNativeAssetMainImage, @"title":kNativeAssetTitle, @"desc":kNativeAssetText, @"adLogo":kNativeAssetSponsorImage, @"cta":kNativeAssetCta, @"dislike":kNativeAssetDislike};
    [keysMap enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) { result[keysMap[key]] = at_parseUnityProperties(metrics[key]); }];
    return result;
}

#define CS_ATNativeAdWrapper "ATNativeAdWrapper"

NSString *const kATNativeAdAdaptiveHeightKey = @"AdaptiveHeight";

@interface ATNativeAdWrapper()
@property(nonatomic, strong) ATNativeSelfRenderView *nativeSelfRenderView;
@property(nonatomic, strong) ATNativeADView *adView;
@property(nonatomic, readonly) NSMutableDictionary<NSString*, UIView*> *viewsStorage;
@end
@implementation ATNativeAdWrapper
+(instancetype)sharedInstance {
    static ATNativeAdWrapper *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[ATNativeAdWrapper alloc] init];
    });
    return sharedInstance;
}

-(instancetype) init {
    self = [super init];
    if (self != nil) {
        _viewsStorage = [NSMutableDictionary<NSString*, UIView*> dictionary];
    }
    return self;
}

UIEdgeInsets SafeAreaInsets_ATUnityNative() {
    return ([[UIApplication sharedApplication].keyWindow respondsToSelector:@selector(safeAreaInsets)] ? [UIApplication sharedApplication].keyWindow.safeAreaInsets : UIEdgeInsetsZero);
}

- (id)selWrapperClassWithDict:(NSDictionary *)dict callback:(void(*)(const char*, const char*))callback {
    NSString *selector = dict[@"selector"];
    NSArray<NSString*>* arguments = dict[@"arguments"];
    NSString *firstObject = @"";
    NSString *secondObject = @"";
    NSString *lastObject = @"";
    if (![ATUnityUtilities isEmpty:arguments]) {
        for (int i = 0; i < arguments.count; i++) {
            if (i == 0) { firstObject = arguments[i]; }
            else if (i == 1) { secondObject = arguments[i]; }
            else { lastObject = arguments[i]; }
        }
    }
    
    if ([selector isEqualToString:@"loadNativeAdWithPlacementID:customDataJSONString:callback:"]) {
        [self loadNativeAdWithPlacementID:firstObject customDataJSONString:secondObject callback:callback];
    } else if ([selector isEqualToString:@"isNativeAdReadyForPlacementID:"]) {
        return [NSNumber numberWithBool:[self isNativeAdReadyForPlacementID:firstObject]];
    } else if ([selector isEqualToString:@"showNativeAdWithPlacementID:metricsJSONString:extraJsonString:"]) {
        [self showNativeAdWithPlacementID:firstObject metricsJSONString:secondObject extraJsonString:lastObject];
    } else if ([selector isEqualToString:@"removeNativeAdViewWithPlacementID:"]) {
        [self removeNativeAdViewWithPlacementID:firstObject];
    } else if ([selector isEqualToString:@"checkAdStatus:"]) {
        return [self checkAdStatus:firstObject];
    } else if ([selector isEqualToString:@"clearCache"]) {
        [self clearCache];
    } else if ([selector isEqualToString:@"getValidAdCaches:"]) {
        return [self getValidAdCaches:firstObject];
    }else if ([selector isEqualToString:@"entryScenarioWithPlacementID:scenarioID:"]) {
        [self entryScenarioWithPlacementID:firstObject scenarioID:secondObject];

    }
    return nil;
}

-(void) loadNativeAdWithPlacementID:(NSString*)placementID customDataJSONString:(NSString*)customDataJSONString callback:(void(*)(const char*, const char *))callback {
    [self setCallBack:callback forKey:placementID];
    NSMutableDictionary *extra = [NSMutableDictionary dictionaryWithDictionary:@{kATExtraInfoNativeAdTypeKey:@(ATGDTNativeAdTypeSelfRendering), kATExtraNativeImageSizeKey:kATExtraNativeImageSize690_388}];
    if ([customDataJSONString isKindOfClass:[NSString class]] && [customDataJSONString length] > 0) {
        NSDictionary *extraDict = [NSJSONSerialization JSONObjectWithData:[customDataJSONString dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingAllowFragments error:nil];
        NSLog(@"extraDict = %@", extraDict);
        CGFloat scale = [extraDict[kATNativeAdSizeUsesPixelFlagKey] boolValue] ? [UIScreen mainScreen].nativeScale : 1.0f;
        if ([extraDict[kATAdLoadingExtraNativeAdSizeKey] isKindOfClass:[NSString class]] && [[extraDict[kATAdLoadingExtraNativeAdSizeKey] componentsSeparatedByString:@"x"] count] == 2) {
            NSArray<NSString*>* com = [extraDict[kATAdLoadingExtraNativeAdSizeKey] componentsSeparatedByString:@"x"];
            extra[kATExtraInfoNativeAdSizeKey] = [NSValue valueWithCGSize:CGSizeMake([com[0] doubleValue] / scale, [com[1] doubleValue] / scale)];
        }
    }
    NSLog(@"extra = %@", extra);
    [[ATAdManager sharedManager] loadADWithPlacementID:placementID extra:extra delegate:self];
}

-(BOOL) isNativeAdReadyForPlacementID:(NSString*)placementID {
    return [[ATAdManager sharedManager] nativeAdReadyForPlacementID:placementID];
}

-(NSString*) checkAdStatus:(NSString *)placementID {
    ATCheckLoadModel *checkLoadModel = [[ATAdManager sharedManager] checkNativeLoadStatusForPlacementID:placementID];
    NSMutableDictionary *statusDict = [NSMutableDictionary dictionary];
    statusDict[@"isLoading"] = @(checkLoadModel.isLoading);
    statusDict[@"isReady"] = @(checkLoadModel.isReady);
    statusDict[@"adInfo"] = checkLoadModel.adOfferInfo;
    NSLog(@"ATNativeAdWrapper::statusDict = %@", statusDict);
    return statusDict.jsonString;
}
- (void)entryScenarioWithPlacementID:(NSString *)placementID scenarioID:(NSString *)scenarioID{
    
    [[ATAdManager sharedManager] entryNativeScenarioWithPlacementID:placementID scene:scenarioID];
}

-(NSString*) getValidAdCaches:(NSString *)placementID {
    NSArray *array = [[ATAdManager sharedManager] getNativeValidAdsForPlacementID:placementID];
    NSLog(@"ATNativeAdWrapper::array = %@", array);
    return array.jsonString;
}

-(void) showNativeAdWithPlacementID:(NSString*)placementID metricsJSONString:(NSString*)metricsJSONString extraJsonString:(NSString*)extraJsonString {
    
    if (self.adView) {
        [self.adView removeFromSuperview];
         self.adView = nil;
    }

    
    
    if ([self isNativeAdReadyForPlacementID:placementID]) {
        NSDictionary *metrics = [NSJSONSerialization JSONObjectWithData:[metricsJSONString dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingAllowFragments error:nil];
        NSDictionary *extraDict = ([extraJsonString isKindOfClass:[NSString class]] && [extraJsonString dataUsingEncoding:NSUTF8StringEncoding] != nil) ? [NSJSONSerialization JSONObjectWithData:[extraJsonString dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingAllowFragments error:nil] : nil;
        
        NSDictionary *parsedMetrics = at_parseUnityMetrics(metrics);
        NSLog(@"metrics = %@, parsedMetrics = %@", metrics, parsedMetrics);
        NSLog(@"ATNativeAdWrapper::extraDict:%@",extraDict);

        UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
        [button addTarget:self action:@selector(noop) forControlEvents:UIControlEventTouchUpInside];
        button.frame = CGRectFromString(at_parseUnityProperties(metrics[@"parent"])[kParsedPropertiesFrameKey]);
        
        CGRect adViewFrame = CGRectFromString(at_parseUnityProperties(metrics[@"parent"])[kParsedPropertiesFrameKey]);
        CGRect mediaViewFrame = CGRectFromString(parsedMetrics[kNativeAssetMainImage][kParsedPropertiesFrameKey]);
        ATNativeADConfiguration *configuration = [ATNativeADConfiguration new];
        configuration.ADFrame = CGRectMake(0, 0, CGRectGetWidth(adViewFrame), CGRectGetHeight(adViewFrame));
        configuration.mediaViewFrame = mediaViewFrame;
        configuration.delegate = self;
        if (extraDict[kATNativeAdAdaptiveHeightKey] != nil) {
            configuration.sizeToFit = [extraDict[kATNativeAdAdaptiveHeightKey] boolValue];
        }
        configuration.rootViewController = [UIApplication sharedApplication].delegate.window.rootViewController;
        configuration.context = @{
            kATNativeAdConfigurationContextAdOptionsViewFrameKey:[NSValue valueWithCGRect:CGRectMake(CGRectGetWidth([UIScreen mainScreen].bounds) - 43.0f, .0f, 43.0f, 18.0f)],
            kATNativeAdConfigurationContextAdLogoViewFrameKey:[NSValue valueWithCGRect:CGRectMake(.0f, .0f, 54.0f, 18.0f)],
            kATNativeAdConfigurationContextNetworkLogoViewFrameKey:[NSValue valueWithCGRect:CGRectMake(CGRectGetWidth(configuration.ADFrame) - 54.0f, CGRectGetHeight(configuration.ADFrame) - 18.0f, 54.0f, 18.0f)]
        };
        
 
        ATNativeAdOffer *offer = [[ATAdManager sharedManager] getNativeAdOfferWithPlacementID:placementID];
        
        ATNativeSelfRenderView *selfRenderView = [self getSelfRenderViewOffer:offer withMetrics:parsedMetrics];
        
        selfRenderView.backgroundColor = [UIColor colorWithHexString:parsedMetrics[kNativeAssetMainImage][@"background_color"]];
        
        NSBundle *bundle = [NSBundle bundleWithPath:[[NSBundle bundleForClass:[self class]] pathForResource:@"AnyThinkSDK" ofType:@"bundle"]];
        
        UIImage * img = [UIImage imageNamed:@"icon_webview_close" inBundle:bundle compatibleWithTraitCollection:nil];
        [selfRenderView.dislikeButton setImage:img forState:0];
        
        ATNativeADView *adview = [self getNativeADView:configuration offer:offer selfRenderView:selfRenderView withPlacementId:placementID];
        [self prepareWithNativePrepareInfo:selfRenderView nativeADView:adview];
        adview.ctaLabel.hidden = [adview.nativeAd.ctaText length] == 0;
        if (adview != nil) {
            [self removeNativeAdViewWithPlacementID:placementID];
            
            _viewsStorage[placementID] = button;
            
            [button addSubview:adview];
            
            [[UIApplication sharedApplication].keyWindow.rootViewController.view addSubview:button];
            
            NSString *position = extraDict[@"Position"];
            CGSize totalSize = [UIApplication sharedApplication].keyWindow.rootViewController.view.bounds.size;
            UIEdgeInsets safeAreaInsets = SafeAreaInsets_ATUnityNative();
            
            if ([@"Top" isEqualToString:position]) {
                button.frame = CGRectMake((totalSize.width - CGRectGetWidth(adview.bounds)) / 2.0f, safeAreaInsets.top , CGRectGetWidth(adview.bounds), CGRectGetHeight(adview.bounds));
            } else if ([@"Bottom" isEqualToString:position]) {
                button.frame = CGRectMake((totalSize.width - CGRectGetWidth(adview.bounds)) / 2.0f, totalSize.height - safeAreaInsets.bottom - CGRectGetHeight(adview.bounds) , CGRectGetWidth(adview.bounds), CGRectGetHeight(adview.bounds));
            } else {
                button.frame = CGRectFromString(at_parseUnityProperties(metrics[@"parent"])[kParsedPropertiesFrameKey]);
            }
            
            NSMutableDictionary *contextStorage = [NSMutableDictionary dictionary];
            [contextStorage setValue:button forKey:@"button"];
            [contextStorage setValue:position forKey:@"position"];
            [adview addObserver:self forKeyPath:@"frame" options:NSKeyValueObservingOptionNew context:(void*)CFBridgingRetain(contextStorage)];
        }
    }
}
- (void)prepareWithNativePrepareInfo:(ATNativeSelfRenderView *)selfRenderView nativeADView:(ATNativeADView *)nativeADView{
    
    ATNativePrepareInfo *info = [ATNativePrepareInfo loadPrepareInfo:^(ATNativePrepareInfo * _Nonnull prepareInfo) {
        prepareInfo.textLabel = selfRenderView.textLabel;
        prepareInfo.advertiserLabel = selfRenderView.advertiserLabel;
        prepareInfo.titleLabel = selfRenderView.titleLabel;
        prepareInfo.ratingLabel = selfRenderView.ratingLabel;
        prepareInfo.iconImageView = selfRenderView.iconImageView;
        prepareInfo.mainImageView = selfRenderView.mainImageView;
        prepareInfo.logoImageView = selfRenderView.logoImageView;
        prepareInfo.dislikeButton = selfRenderView.dislikeButton;
        prepareInfo.ctaLabel = selfRenderView.ctaLabel;
        prepareInfo.mediaView = selfRenderView.mediaView;
    }];
    [nativeADView prepareWithNativePrepareInfo:info];
    [nativeADView addSubview:selfRenderView];
    selfRenderView.frame = CGRectMake(0, 0, CGRectGetWidth(nativeADView.frame), CGRectGetHeight(nativeADView.frame));
}


- (ATNativeSelfRenderView *)getSelfRenderViewOffer:(ATNativeAdOffer *)offer withMetrics:(NSDictionary*)metrics{
    
    ATNativeSelfRenderView *selfRenderView = [[ATNativeSelfRenderView alloc]initWithOffer:offer];
    
    self.nativeSelfRenderView = selfRenderView;
    
    [selfRenderView configureMetrics:metrics];
    
    
    return selfRenderView;
}


- (ATNativeADView *)getNativeADView:(ATNativeADConfiguration *)config offer:(ATNativeAdOffer *)offer selfRenderView:(ATNativeSelfRenderView *)selfRenderView withPlacementId:(NSString*)placementID{
    
    ATNativeADView *nativeADView = [[ATNativeADView alloc]initWithConfiguration:config currentOffer:offer placementID:placementID];
    
    
    
    UIView *mediaView = [nativeADView getMediaView];

    NSMutableArray *array = [@[selfRenderView.iconImageView,selfRenderView.titleLabel,selfRenderView.textLabel,selfRenderView.ctaLabel,selfRenderView.mainImageView] mutableCopy];
    
    if (mediaView) {
        [array addObject:mediaView];
    }
    
    [nativeADView registerClickableViewArray:array];
    
    selfRenderView.mediaView = mediaView;
    
    [selfRenderView addSubview:mediaView];


   self.adView = nativeADView;
    
    return nativeADView;
}



-(void) noop {
    
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey,id> *)change context:(void *)context {
    if ([keyPath isEqualToString:@"frame"]) {
        CGRect frame = [change[@"new"] CGRectValue];
        NSDictionary *contextDict = (__bridge NSDictionary*)context;
        
        CGSize totalSize = [UIApplication sharedApplication].keyWindow.rootViewController.view.bounds.size;
        UIEdgeInsets safeAreaInsets = SafeAreaInsets_ATUnityNative();
        NSString *position = contextDict[@"position"];
        UIButton *button = contextDict[@"button"];
        CGRect buttonFrame = button.frame;
        buttonFrame.size.height = frame.size.height;

        if ([position isEqualToString:@"Bottom"]) {
            buttonFrame.origin.y = totalSize.height - safeAreaInsets.bottom - frame.size.height;
        }
        button.frame = buttonFrame;
        [object removeObserver:self forKeyPath:@"frame"];
        CFBridgingRelease(context);
    }
}


-(void) removeNativeAdViewWithPlacementID:(NSString*)placementID {
    if ([_viewsStorage.allKeys containsObject:placementID]) {
        [_viewsStorage[placementID] removeFromSuperview];
    }
}

-(void) clearCache {
   
}

-(NSString*) scriptWrapperClass {
    return @"ATNativeAdWrapper";
}
#pragma mark - delegate
-(void) didFinishLoadingADWithPlacementID:(NSString *)placementID {
    [self invokeCallback:@"OnNativeAdLoaded" placementID:placementID error:nil extra:nil];
}

-(void) didFailToLoadADWithPlacementID:(NSString*)placementID error:(NSError*)error {
    [self invokeCallback:@"OnNativeAdLoadingFailure" placementID:placementID error:error extra:nil];
}
// ad
- (void)didStartLoadingADSourceWithPlacementID:(NSString *)placementID extra:(NSDictionary*)extra{
    [self invokeCallback:@"startLoadingADSource" placementID:placementID error:nil extra:extra];
}

- (void)didFinishLoadingADSourceWithPlacementID:(NSString *)placementID extra:(NSDictionary*)extra{
    [self invokeCallback:@"finishLoadingADSource" placementID:placementID error:nil extra:extra];
}

- (void)didFailToLoadADSourceWithPlacementID:(NSString*)placementID extra:(NSDictionary*)extra error:(NSError*)error{
    [self invokeCallback:@"failToLoadADSource" placementID:placementID error:error extra:extra];
}

// bidding
- (void)didStartBiddingADSourceWithPlacementID:(NSString *)placementID extra:(NSDictionary*)extra{
    [self invokeCallback:@"startBiddingADSource" placementID:placementID error:nil extra:extra];
}

- (void)didFinishBiddingADSourceWithPlacementID:(NSString *)placementID extra:(NSDictionary*)extra{
    [self invokeCallback:@"finishBiddingADSource" placementID:placementID error:nil extra:extra];
}

- (void)didFailBiddingADSourceWithPlacementID:(NSString*)placementID extra:(NSDictionary*)extra error:(NSError*)error{
    [self invokeCallback:@"failBiddingADSource" placementID:placementID error:error extra:extra];
}


-(void) didShowNativeAdInAdView:(ATNativeADView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra {
    [self invokeCallback:@"OnNaitveAdShow" placementID:placementID error:nil extra:extra];
}
    
-(void) didClickNativeAdInAdView:(ATNativeADView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra {
    //Drop ad view
    [self invokeCallback:@"OnNativeAdClick" placementID:placementID error:nil extra:extra];
}

-(void) didTapCloseButtonInAdView:(ATNativeADView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra {
    [self invokeCallback:@"OnNativeAdCloseButtonClick" placementID:placementID error:nil extra:extra];
    [self.adView removeFromSuperview];
}
    
-(void) didStartPlayingVideoInAdView:(ATNativeADView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra {
    //Drop ad view
    [self invokeCallback:@"OnNativeAdVideoStart" placementID:placementID error:nil extra:extra];
}
    
-(void) didEndPlayingVideoInAdView:(ATNativeADView*)adView placementID:(NSString*)placementID extra:(NSDictionary *)extra {
    //Drop ad view
    [self invokeCallback:@"OnNativeAdVideoEnd" placementID:placementID error:nil extra:extra];
}
@end
