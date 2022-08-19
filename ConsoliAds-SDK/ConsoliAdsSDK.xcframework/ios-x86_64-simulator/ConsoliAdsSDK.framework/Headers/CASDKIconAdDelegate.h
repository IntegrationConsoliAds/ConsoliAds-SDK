//
//  CASDKIconAdDelegate.h
//  ConsoliAd
//
//  Created by saira on 17/12/2019.
//  Copyright © 2019 FazalElahi. All rights reserved.
//

#ifndef CASDKIconAdDelegate_h
#define CASDKIconAdDelegate_h

#import <UIKit/UIKit.h>
#import "SDKConstants.h"

@class IconAdBase;

@protocol CASDKIconAdDelegate <NSObject>

-(void)didLoadedIconAd:(SdkPlaceholderName)scene;
-(void)didFailedToLoadIconAd:(SdkPlaceholderName)scene error:(NSString *)error;
-(void)didCloseIconAd:(SdkPlaceholderName)scene;
-(void)didClickIconAd:(SdkPlaceholderName)scene productId:(NSString *)redirectionProductId;
-(void)didRefreshIconAd:(SdkPlaceholderName)scene;
-(void)didDisplayIconAd:(SdkPlaceholderName)scene;
-(void)didFailedToDisplayIconAd:(SdkPlaceholderName)scene error:(NSString *)error;

@optional
//For Unity
-(void)didLoadedIconAd:(SdkPlaceholderName)scene iconAd:(IconAdBase*)iconAd;

@end

#endif /* CASDKIconAdDelegate_h */
