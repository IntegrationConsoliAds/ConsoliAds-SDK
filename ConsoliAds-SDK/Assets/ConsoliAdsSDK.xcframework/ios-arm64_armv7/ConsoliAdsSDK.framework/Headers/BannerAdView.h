//
//  BannerAdView.h
//  ConsoliAd
//
//  Created by rehmanaslam on 08/11/2018.
//  Copyright © 2018 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ConsoliAdsBannerTypes.h"
#import "CASDKBannerAdDelegate.h"
#import "SDKConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface BannerAdView : UIView

@property (nonatomic) SdkPlaceholderName scene;
@property (nonatomic, weak) id<CASDKBannerAdDelegate> bannerDelegate;
@property (nonatomic, strong) IBOutlet UIActivityIndicatorView *activityView;
@property (strong, nonatomic) IBOutlet UIImageView *clickDisplayImage;
@property (weak, nonatomic) UIViewController *viewController;

- (void)showBannerWithView:(nullable UIView*)parentView;
- (void)removeFromSuperview;

@end


NS_ASSUME_NONNULL_END
