//
//  SDKConversionUtilities.h
//  ConsoliAdsSDK
//
//  Created by wazma on 15/02/2022.
//  Copyright © 2022 FazalElahi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDKConstants.h"
NS_ASSUME_NONNULL_BEGIN

@interface SDKConversionUtilities : NSObject

+ (instancetype)sharedPlugIn;

- (int)convertTextToInteger:(NSString*)text;
- (NSString *)convertEnumToString:(SdkPlaceholderName)placeholder;
@end

NS_ASSUME_NONNULL_END
