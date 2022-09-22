//
//  ConsoliadsSdkRewardedAdDelegate.h
//  ConsoliAd
//
//  Created by wazma on 21/01/2022.
//  Copyright © 2022 FazalElahi. All rights reserved.
//

#import "SDKConstants.h"
@protocol ConsoliadsSdkRewardedAdDelegate <NSObject>

- (void) onRewardedVideoAdLoaded:(SdkPlaceholderName)placeholderName;
- (void) onRewardedVideoAdFailedToLoad:(SdkPlaceholderName)placeholderName reason:(NSString *)reason;
- (void) onRewardedVideoAdShown:(SdkPlaceholderName)placeholderName;
- (void) onRewardedVideoAdFailedToShow:(SdkPlaceholderName)placeholderName reason:(NSString *)reason;
- (void) onRewardedVideoAdCompleted:(SdkPlaceholderName)placeholderName reward:(int)reward;
- (void) onRewardedVideoAdClosed:(SdkPlaceholderName)placeholderName;
- (void) onRewardedVideoAdClicked:(SdkPlaceholderName)placeholderName productId:(NSString *)productId;


@end

