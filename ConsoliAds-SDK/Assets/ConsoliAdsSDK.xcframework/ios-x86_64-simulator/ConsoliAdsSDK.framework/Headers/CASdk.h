//
//  CASdk.h
//  ConsoliAd
//
//  Created by wazma on 21/01/2022.
//  Copyright © 2022 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConsoliadsSdkInitializationDelegate.h"
#import <UIKit/UIKit.h>
#import <ConsoliAdsSDK/ConsoliSDKAdsDelegate.h>
#import <ConsoliAdsSDK/CASDKIconAdDelegate.h>
#import <ConsoliAdsSDK/CAIconAdView.h>
#import "SDKConstants.h"
#import "ConsoliadsSdkInitializationDelegate.h"
#import "ConsoliadsSdkInterstitialAdDelegate.h"
#import "ConsoliadsSdkStaticInterstitialAdDelegate.h"
#import "ConsoliadsSdkRewardedAdDelegate.h"
#import "ConsoliadsSdkInAppPurchaseDelegate.h"
#import <ConsoliAdsSDK/ConsoliAdsBannerTypes.h>
#import "CASDKBannerAdDelegate.h"
#import "CASDKBannerAdController.h"
#import "BannerAdView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CASdk : NSObject

+ (instancetype)sharedPlugIn;
- (BOOL)initWithUserSignature:(NSString*)userSignature andDelegate:(id<ConsoliadsSdkInitializationDelegate>)adelegate userConsent:(BOOL)consent devMode:(BOOL)isDevMode viewController:(UIViewController* _Nullable)viewController;
- (BOOL)showInterstitial:(SdkPlaceholderName)scene withRootViewController:(UIViewController *)viewController;
- (BOOL)showInterstitialWithRootViewController:(UIViewController *)viewController;
- (BOOL)isInterstitialAvailable:(SdkPlaceholderName)scene;
- (BOOL)isInterstitialAvailable;
- (void)loadInterstitialForScene:(SdkPlaceholderName)scene;
- (void)loadInterstitialForScene;
- (BOOL)showBanner:(SdkPlaceholderName)scene adSize:(ConsoliadsSdkBannerSize)adSize controller:(CASDKBannerAdController*)bannerAdController delegate:(id<CASDKBannerAdDelegate>)bannerDelegate viewController:(UIViewController *)viewController;
- (BOOL)isRewardedVideoAvailable:(SdkPlaceholderName)scene;
- (BOOL)isRewardedVideoAvailable;
- (void)loadRewardedVideoAdForScene:(SdkPlaceholderName)scene;
- (void)loadRewardedVideoAdForScene;
- (BOOL)showRewardedVideoAdForScene:(SdkPlaceholderName)scene withRootViewController:(UIViewController*)viewController;
- (BOOL)showRewardedVideoAdWithRootViewController:(UIViewController*)viewController;
- (void)showNative:(SdkPlaceholderName)scene delegate:(id<CASDKNativeAdDelegate>)delegate;
- (void)showNativeWithDelegate:(id<CASDKNativeAdDelegate>)delegate;
- (void)showIconAd:(SdkPlaceholderName)scene iconAdView:(CAIconAdView*)iconAdView withAdSize:(CAIconAdSize)adSize delegate:(id<CASDKIconAdDelegate>)delegate;
- (void)showIconAdWithIconAdView:(CAIconAdView*)iconAdView withAdSize:(CAIconAdSize)adSize delegate:(id<CASDKIconAdDelegate>)delegate;
- (void)setSdkInitializationDelegate:(id<ConsoliadsSdkInitializationDelegate>)sdkInitializationListener;
- (void)setSdkInterstitialAdDelegate:(id<ConsoliadsSdkInterstitialAdDelegate>)sdkInterstitialAdListener;
- (void)setSdkRewardedAdDelegate:(id<ConsoliadsSdkRewardedAdDelegate>)sdkRewardedAdListener;
- (void)setSdkInAppDelegate:(id<ConsoliadsSdkInAppPurchaseDelegate>)sdkInAppDelegate;
- (BOOL)isInitSuccess;
+ (NSDictionary*)getInAppVersion;
+ (void)setMediationEnabled;
+ (BOOL)getMediationEnabled;

typedef NS_ENUM(NSUInteger , ConsoliadsSdkInitStatus){
    Idle = 0,
    Success = 1,
    NotSuccess = 2,
    Processing = 3
};

@end

NS_ASSUME_NONNULL_END
