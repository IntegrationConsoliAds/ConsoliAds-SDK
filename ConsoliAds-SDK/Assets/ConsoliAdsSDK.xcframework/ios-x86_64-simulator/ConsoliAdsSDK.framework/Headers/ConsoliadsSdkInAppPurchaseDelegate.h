//
//  ConsoliadsSdkInAppPurchaseDelegate.h
//  ConsoliAd
//
//  Created by wazma on 21/01/2022.
//  Copyright © 2022 FazalElahi. All rights reserved.
//
#import "CAInAppDetails.h"
#import "CAInAppError.h"

@protocol ConsoliadsSdkInAppPurchaseDelegate <NSObject>

- (void) onInAppPurchaseRestored:(CAInAppDetails *)caInAppDetails;
- (void) onInAppPurchaseSuccessed:(CAInAppDetails *)caInAppDetails;
- (void) onInAppPurchaseFailed:(CAInAppError *)caInAppError;

@end
