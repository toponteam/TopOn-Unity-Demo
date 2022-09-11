//
//  ATNativeAdWrapper.h
//  UnityContainer
//
//  Created by Martin Lau on 27/07/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATBaseUnityWrapper.h"
#import <AnyThinkNative/ATNativeADDelegate.h>

extern NSString *const kParsedPropertiesFrameKey;
extern NSString *const kParsedPropertiesBackgroundColorKey;
extern NSString *const kParsedPropertiesTextColorKey;
extern NSString *const kParsedPropertiesTextSizeKey;

extern NSString *const kNativeAssetAdvertiser;
extern NSString *const kNativeAssetText;
extern NSString *const kNativeAssetTitle;
extern NSString *const kNativeAssetCta;
extern NSString *const kNativeAssetRating;
extern NSString *const kNativeAssetIcon;
extern NSString *const kNativeAssetMainImage;
extern NSString *const kNativeAssetSponsorImage;
extern NSString *const kNativeAssetDislike;
extern NSString *const kNativeAssetMedia;

extern NSString *kATAdLoadingExtraNativeAdSizeKey;
extern NSString *kATNativeAdSizeUsesPixelFlagKey;

@interface ATNativeAdWrapper : ATBaseUnityWrapper<ATNativeADDelegate>

@end
