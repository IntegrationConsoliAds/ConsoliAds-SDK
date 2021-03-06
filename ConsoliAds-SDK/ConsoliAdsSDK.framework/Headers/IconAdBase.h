//
//  IconAdBase.h
//  ConsoliAd
//
//  Created by rehmanaslam on 18/12/2018.
//  Copyright © 2018 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CASDKIconAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface IconAdBase : NSObject

@property (nonatomic, weak) id<CASDKIconAdDelegate> iconAdDelegate;

- (void)loadIconAd;

- (UIImage*)getMainImage;

- (UIImage*)getMainImageForRefresh;

- (void)trackAdImpression;

- (void)trackRefreshAdImpression;

- (void)trackAdClicked;

- (void)openPrivacyPolicy;

- (void)destroyIconAd;

- (UIImage*)getAdChoiceImage;

@end

NS_ASSUME_NONNULL_END
