//
//  ImmersiveAdRequestDelegate.h
//  ConsoliAd
//
//  Created by OsamaNadeem on 11/4/21.
//  Copyright © 2021 FazalElahi. All rights reserved.
//

#import "ImmersiveAdBase.h"

@protocol ImmersiveAdRequestDelegate <NSObject>

- (void) onCampaignDownloadSuccess: (ImmersiveAdBase*)immersiveAd;

- (void) onCampaignDownloadFailure;

@optional

- (void) onCampaignDownloadSuccess;

@end


