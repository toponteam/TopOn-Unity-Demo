//
//  ATNativeSelfRenderView.h
//  AnyThinkSDKDemo
//
//  Created by GUO PENG on 2022/5/7.
//  Copyright © 2022 AnyThink. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AnyThinkNative/AnyThinkNative.h>


NS_ASSUME_NONNULL_BEGIN

@interface ATNativeSelfRenderView : UIView

@property(nonatomic, strong) UILabel *advertiserLabel;
@property(nonatomic, strong) UILabel *textLabel;
@property(nonatomic, strong) UILabel *titleLabel;
@property(nonatomic, strong) UILabel *ctaLabel;
@property(nonatomic, strong) UILabel *ratingLabel;
@property(nonatomic, strong) UIImageView *iconImageView;
@property(nonatomic, strong) UIImageView *mainImageView;
@property(nonatomic, strong) UIImageView *logoImageView;
@property(nonatomic, strong) UIImageView *sponsorImageView;
@property(nonatomic, strong) UIButton *dislikeButton;

@property(nonatomic, strong) UIView *mediaView;

-(void) configureMetrics:(NSDictionary *)metrics;
- (instancetype) initWithOffer:(ATNativeAdOffer *)offer;

@end

NS_ASSUME_NONNULL_END
