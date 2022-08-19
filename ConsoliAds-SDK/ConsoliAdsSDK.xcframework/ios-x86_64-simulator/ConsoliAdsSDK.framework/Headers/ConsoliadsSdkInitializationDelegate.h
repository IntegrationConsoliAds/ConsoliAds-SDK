//
//  ConsoliadsSdkInitializationDelegate.h
//  ConsoliAd
//
//  Created by wazma on 21/01/2022.
//  Copyright © 2022 FazalElahi. All rights reserved.
//

@protocol ConsoliadsSdkInitializationDelegate <NSObject>

- (void) onInitializationSuccess;
- (void) onInitializationError:(NSString *)error;

@end
