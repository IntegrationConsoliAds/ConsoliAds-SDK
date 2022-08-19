//
//  ConsoliadsSdkStaticInterstitialAdListener.h
//  ConsoliAd
//
//  Created by wazma on 21/01/2022.
//  Copyright © 2022 FazalElahi. All rights reserved.
//

#import "SDKConstants.h"

@protocol ConsoliadsSdkStaticInterstitialAdDelegate <NSObject>

- (void) onStaticInterstitialAdLoaded:(SdkPlaceholderName)placeholderName;
- (void) onStaticInterstitialAdFailedToLoad:(SdkPlaceholderName)placeholderName reason:(NSString *)reason;
- (void) onStaticInterstitialAdClosed:(SdkPlaceholderName)placeholderName;
- (void) onStaticInterstitialAdClicked:(SdkPlaceholderName)placeholderName productId:(NSString *)productId;
- (void) onStaticInterstitialAdShown:(SdkPlaceholderName)placeholderName;
- (void) onStaticInterstitialAdFailedToShow:(SdkPlaceholderName)placeholderName;


@end
