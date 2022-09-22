//
//  CASDKBannerAdController.h
//  ConsoliAdsSDK
//
//  Created by OsamaNadeem on 2/16/22.
//  Copyright © 2022 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BannerAdView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CASDKBannerAdController : NSObject

@property (nonatomic, weak) BannerAdView* bannerView;

-(void) destroyBanner;

@end

NS_ASSUME_NONNULL_END
