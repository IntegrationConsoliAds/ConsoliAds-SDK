//
//  ConsoliAdIOSPlugin.h
//  ConsoliAds
//
//  Created by FazalElahi on 06/02/2017.
//  Copyright © 2017 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CAIconAdView.h"
#import <ConsoliAdsSDK/ConsoliSDKAdsDelegate.h>
#import <ConsoliAdsSDK/ConsoliAdsIconAdSizes.h>
#import "CASDKIconAdDelegate.h"
#import <ConsoliAdsSDK/ConsoliAdsBannerTypes.h>
#import <ConsoliAdsSDK/CASDKBannerAdDelegate.h>
#import <ConsoliAdsSDK/ConsoliAdsImmersiveAdSizes.h>
#import "CASDKBannerAdController.h"
//#import <ConsoliAdsSDK/BannerAdView.h>

@interface ConsoliAdIOSPlugin : NSObject

+ (instancetype)sharedPlugIn;

- (BOOL)initWithKey:(NSString*)userSignature andDelegate:(id<ConsoliSDKAdsDelegate>)adelegate userConsent:(BOOL)consent devMode:(BOOL)isDevMode viewController:(UIViewController*)viewController;

- (BOOL)showInterstitial:(NSString*)scene withRootViewController:(UIViewController *)viewController;

- (void)showIconAd:(NSString*)scene iconAdView:(CAIconAdView*)iconAdView withAdSize:(CAIconAdSize)adSize delegate:(id<CASDKIconAdDelegate>)delegate;

- (void)loadInterstitialForScene:(NSString*)scene;

- (void)loadStaticInterstitialForScene:(NSString*)scene;

- (void)loadRewardedVideoForScene:(NSString*)scene;

- (void)requestRewardedVideoAdForScene:(NSString*)scene;

- (BOOL)isRewardedVideoAvailable:(NSString*)scene;

- (BOOL)isRewardedVideoAvailableOrMove:(NSString*)scene;

- (BOOL)isInterstitialLoaded:(NSString*)scene;

- (BOOL)isInterstitialLoadedorMove:(NSString*)scene;

- (BOOL)showRewardedVideoAdForScene:(NSString*)scene withRootViewController:(UIViewController*)viewController;

- (void)showNative:(NSString*)scene delegate:(id<CASDKNativeAdDelegate>)delegate;

- (BOOL)showBanner:(NSString*)scene adSize:(ConsoliadsSdkBannerSize)adSize controller:(CASDKBannerAdController*)bannerAdController delegate:(id<CASDKBannerAdDelegate>)bannerDelegate viewController:(UIViewController *)viewController;

- (void)hideBannerFromView:(UIView *)view;

- (BOOL)showStaticInterstitial:(NSString*)scene withRootViewController:(UIViewController *)viewController;

- (BOOL)isStaticInterstitialAvailable:(NSString*)scene;
- (BOOL)isStaticInterstitialAvailableorMove:(NSString*)scene;

+ (NSDictionary*)getInAppVersion;

- (void)loadIconAd:(NSString*)scene delegate:(id<CASDKIconAdDelegate>)adelegate;

- (void)loadImmersiveForUnityPlatform:(NSString *)scene size:(CAImmersiveAdSize)size delegate:(id)delegate;
+(BOOL)getMediationEnabled;
+(void)setMediationEnabled;

-(NSString*)getConsoliAdsUnityVersionId;
-(void)setConsoliAdsUnityVersionId:(NSString*)consoliadsUnityVersionId;
-(void)setUnityVersionData:packagename appVersionname:(NSString*)appVersionname appVersioncode:(NSString*)appVersioncode;
@end
