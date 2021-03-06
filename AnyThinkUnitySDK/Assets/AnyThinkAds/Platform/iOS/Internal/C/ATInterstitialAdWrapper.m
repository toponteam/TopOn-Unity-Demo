//
//  ATInterstitialAdWrapper.m
//  UnityContainer
//
//  Created by Martin Lau on 2019/1/8.
//  Copyright © 2019 Martin Lau. All rights reserved.
//

#import "ATInterstitialAdWrapper.h"
#import "ATUnityUtilities.h"
#import <AnyThinkInterstitial/AnyThinkInterstitial.h>

NSString *const kLoadUseRVAsInterstitialKey = @"UseRewardedVideoAsInterstitial";
@interface ATInterstitialAdWrapper()<ATInterstitialDelegate>
@end
@implementation ATInterstitialAdWrapper
+(instancetype)sharedInstance {
    static ATInterstitialAdWrapper *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[ATInterstitialAdWrapper alloc] init];
    });
    return sharedInstance;
}

-(NSString*) scriptWrapperClass {
    return @"ATInterstitialAdWrapper";
}

- (id)selWrapperClassWithDict:(NSDictionary *)dict callback:(void(*)(const char*, const char*))callback {
    NSString *selector = dict[@"selector"];
    NSArray<NSString*>* arguments = dict[@"arguments"];
    NSString *firstObject = @"";
    NSString *lastObject = @"";
    if (![ATUnityUtilities isEmpty:arguments]) {
        for (int i = 0; i < arguments.count; i++) {
            if (i == 0) { firstObject = arguments[i]; }
            else { lastObject = arguments[i]; }
        }
    }
    
    if ([selector isEqualToString:@"loadInterstitialAdWithPlacementID:customDataJSONString:callback:"]) {
        [self loadInterstitialAdWithPlacementID:firstObject customDataJSONString:lastObject callback:callback];
    } else if ([selector isEqualToString:@"interstitialAdReadyForPlacementID:"]) {
        return [NSNumber numberWithBool:[self interstitialAdReadyForPlacementID:firstObject]];
    } else if ([selector isEqualToString:@"showInterstitialAdWithPlacementID:extraJsonString:"]) {
        [self showInterstitialAdWithPlacementID:firstObject extraJsonString:lastObject];
    } else if ([selector isEqualToString:@"checkAdStatus:"]) {
        return [self checkAdStatus:firstObject];
    } else if ([selector isEqualToString:@"clearCache"]) {
        [self clearCache];
    }
    return nil;
}

-(void) loadInterstitialAdWithPlacementID:(NSString*)placementID customDataJSONString:(NSString*)customDataJSONString callback:(void(*)(const char*, const char*))callback {
    
    [self setCallBack:callback forKey:placementID];
    NSDictionary *extra = nil;
    if ([customDataJSONString isKindOfClass:[NSString class]] && [customDataJSONString length] > 0) {
        NSDictionary *extraDict = [NSJSONSerialization JSONObjectWithData:[customDataJSONString dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingAllowFragments error:nil];
        NSLog(@"extraDict = %@", extra);
        if (extraDict[kLoadUseRVAsInterstitialKey] != nil) { extra = @{kATInterstitialExtraUsesRewardedVideo:@([extraDict[kLoadUseRVAsInterstitialKey] boolValue])};
        }
    }
    
    [[ATAdManager sharedManager] loadADWithPlacementID:placementID extra:extra != nil ? extra : nil delegate:self];
}

-(BOOL) interstitialAdReadyForPlacementID:(NSString*)placementID {
    return [[ATAdManager sharedManager] interstitialReadyForPlacementID:placementID];
}

-(void) showInterstitialAdWithPlacementID:(NSString*)placementID extraJsonString:(NSString*)extraJsonString {
    NSDictionary *extraDict = ([extraJsonString isKindOfClass:[NSString class]] && [extraJsonString dataUsingEncoding:NSUTF8StringEncoding] != nil) ? [NSJSONSerialization JSONObjectWithData:[extraJsonString dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingAllowFragments error:nil] : nil;
    [[ATAdManager sharedManager] showInterstitialWithPlacementID:placementID scene:extraDict[kATUnityUtilitiesAdShowingExtraScenarioKey] inViewController:[UIApplication sharedApplication].delegate.window.rootViewController delegate:self];
}

-(NSString*) checkAdStatus:(NSString *)placementID {
    ATCheckLoadModel *checkLoadModel = [[ATAdManager sharedManager] checkInterstitialLoadStatusForPlacementID:placementID];
    NSMutableDictionary *statusDict = [NSMutableDictionary dictionary];
    statusDict[@"isLoading"] = @(checkLoadModel.isLoading);
    statusDict[@"isReady"] = @(checkLoadModel.isReady);
    statusDict[@"adInfo"] = checkLoadModel.adOfferInfo;
    NSLog(@"ATInterstitialAdWrapper::statusDict = %@", statusDict);
    return statusDict.jsonString;
}

-(void) clearCache {
    [[ATAdManager sharedManager] clearCache];
}

#pragma mark - delegate method(s)
-(void) didFinishLoadingADWithPlacementID:(NSString *)placementID {
    [self invokeCallback:@"OnInterstitialAdLoaded" placementID:placementID error:nil extra:nil];
}

-(void) didFailToLoadADWithPlacementID:(NSString*)placementID error:(NSError*)error {
    error = error != nil ? error : [NSError errorWithDomain:@"com.anythink.Unity3DPackage" code:100001 userInfo:@{NSLocalizedDescriptionKey:@"AT has failed to load ad", NSLocalizedFailureReasonErrorKey:@"AT has failed to load ad"}];
    [self invokeCallback:@"OnInterstitialAdLoadFailure" placementID:placementID error:error extra:nil];
}

-(void) interstitialDidShowForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra {
    [self invokeCallback:@"OnInterstitialAdShow" placementID:placementID error:nil extra:extra];
    [[NSNotificationCenter defaultCenter] postNotificationName:kATUnityUtilitiesInterstitialImpressionNotification object:nil];
}

-(void) interstitialFailedToShowForPlacementID:(NSString*)placementID error:(NSError*)error extra:(NSDictionary *)extra {
    error = error != nil ? error : [NSError errorWithDomain:@"com.anythink.Unity3DPackage" code:100001 userInfo:@{NSLocalizedDescriptionKey:@"AT has failed to show ad", NSLocalizedFailureReasonErrorKey:@"AT has failed to show ad"}];
    [self invokeCallback:@"OnInterstitialAdFailedToShow" placementID:placementID error:error extra:nil];
}

-(void) interstitialDidStartPlayingVideoForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra {
    [self invokeCallback:@"OnInterstitialAdVideoPlayStart" placementID:placementID error:nil extra:extra];
}

-(void) interstitialDidEndPlayingVideoForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra {
    [self invokeCallback:@"OnInterstitialAdVideoPlayEnd" placementID:placementID error:nil extra:extra];
}

-(void) interstitialDidFailToPlayVideoForPlacementID:(NSString*)placementID error:(NSError*)error extra:(NSDictionary *)extra {
    [self invokeCallback:@"OnInterstitialAdVideoPlayFailure" placementID:placementID error:error extra:extra];
}

-(void) interstitialDidCloseForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra {
    [self invokeCallback:@"OnInterstitialAdClose" placementID:placementID error:nil extra:extra];
    [[NSNotificationCenter defaultCenter] postNotificationName:kATUnityUtilitiesInterstitialCloseNotification object:nil];
}

-(void) interstitialDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra {
    [self invokeCallback:@"OnInterstitialAdClick" placementID:placementID error:nil extra:extra];
}
@end
