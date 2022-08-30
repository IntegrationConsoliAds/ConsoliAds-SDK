//
//  ConsoliAdsBannerTypes.h
//  ConsoliAd
//
//  Created by rehmanaslam on 28/11/2018.
//  Copyright © 2018 FazalElahi. All rights reserved.
//

#ifndef ConsoliAdsBannerTypes_h
#define ConsoliAdsBannerTypes_h

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

typedef NS_ENUM(NSUInteger , ConsoliadsSdkBannerSize){
    KCAAdSizeBanner = 1,    /// Banner size  Typically 320x50.
    KCAAdSizeLargeBanner = 6,   /// LargeBanner size  Typically 320x100.
    KCAAdSizeIABBanner = 3,    /// FullBanner size  Typically 468x60.
    KCAAdSizeLeaderboardBanner = 4, /// Leaderboard size  Typically 728x90.
    KCAAdSizeSmartBanner = 5    /// SmartBanner size  Typically 728x90.
};

typedef NS_ENUM(NSUInteger , CAAdPosition){
    KCAAdPositionTop = 0,
    KCAAdPositionBottom = 1,
    KCAAdPositionTopLeft = 2,
    KCAAdPositionTopRight = 3,
    KCAAdPositionBottomLeft = 4,
    KCAAdPositionBottomRight = 5,
    KCAAdPositionCenter = 6,
    KCAAdPositionCustom = 7
};


#endif /* ConsoliAdsBannerTypes_h */


