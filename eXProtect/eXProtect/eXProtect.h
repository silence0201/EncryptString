//
//  eXProtect.h
//  eXProtect
//
//  Created by Silence on 2020/9/12.
//  Copyright © 2020年 Silence. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface eXProtect : NSObject
+ (NSString *)AESEncrypt:(NSString *)text;
+ (NSString *)AESDecrypt:(NSString *)text;
@end

NS_ASSUME_NONNULL_END
