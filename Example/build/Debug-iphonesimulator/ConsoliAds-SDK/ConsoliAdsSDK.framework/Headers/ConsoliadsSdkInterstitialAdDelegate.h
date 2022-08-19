//
//  ConsoliadsSdkInterstitialAdDelegate.h
//  ConsoliAd
//
//  Created by wazma on 21/01/2022.
//  Copyright © 2022 FazalElahi. All rights reserved.
//
#import "SDKConstants.h"

@protocol ConsoliadsSdkInterstitialAdDelegate <NSObject>

- (void) onInterstitialAdLoaded:(SdkPlaceholderName)placeholderName;
- (void) onInterstitialAdFailedToLoad:(SdkPlaceholderName)placeholderName reason:(NSString *)reason;
- (void) onInterstitialAdClosed:(SdkPlaceholderName)placeholderName;
- (void) onInterstitialAdClicked:(SdkPlaceholderName)placeholderName productId:(NSString *)productId;
- (void) onInterstitialAdShown:(SdkPlaceholderName)placeholderName;
- (void) onInterstitialAdFailedToShow:(SdkPlaceholderName)placeholderName;


@end
