//
//  BannerAdDelegate.h
//  ConsoliAd
//
//  Created by rehmanaslam on 12/11/2018.
//  Copyright © 2018 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDKConstants.h"
//#import <UIKit/UIKit.h>
//#import "BannerAdDelegate.h"
//#import "BannerAdView.h"

@protocol CASDKBannerAdDelegate <NSObject>

- (void)onBannerAdLoaded:(SdkPlaceholderName)scene;
- (void)onBannerAdRefreshed:(SdkPlaceholderName)scene;
- (void)onBannerAdFailedToLoad:(SdkPlaceholderName)scene error:(NSString *)error;
- (void)onBannerAdClicked:(SdkPlaceholderName)scene productId:(NSString *)redirectionProductId;
- (void)onBannerAdClosed:(SdkPlaceholderName)scene;

@end


