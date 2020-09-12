//
//  eXProtect.m
//  eXProtect
//
//  Created by Silence on 2020/9/12.
//  Copyright © 2020年 Silence. All rights reserved.
//

#import "eXProtect.h"
#import <CommonCrypto/CommonCrypto.h>

#define AESKey @"eXProtectCommonCrypto"

@interface NSString (_eXProtect)
@end
@implementation NSString (_eXProtect)
    
- (NSString *)encryptWithAESwithKey:(NSString *)key ivParameter:(NSString *)ivParameter {
    NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding];
    
    NSData *AESData = [self AES128operation:kCCEncrypt data:data key:key iv:ivParameter];
    NSString *baseStr = [AESData base64EncodedStringWithOptions:NSDataBase64Encoding64CharacterLineLength];
    return baseStr;
}
    
- (NSString *)decryptWithAESwithKey:(NSString *)key ivParameter:(NSString *)ivParameter {
    NSData *baseData = [[NSData alloc]initWithBase64EncodedString:self options:0];
    NSData *AESData = [self AES128operation:kCCDecrypt data:baseData key:key iv:ivParameter];
    NSString *decStr = [[NSString alloc]initWithData:AESData encoding:NSUTF8StringEncoding];
    
    return decStr;
}
    
    // 数据加密
- (NSData *)AES128operation:(CCOperation)operation data:(NSData *)data key:(NSString *)key iv:(NSString *)iv {
    char keyPtr[kCCKeySizeAES128 + 1];
    bzero(keyPtr, sizeof(keyPtr));
    [key getCString:keyPtr maxLength:sizeof(keyPtr) encoding:NSUTF8StringEncoding];
    
    
    char ivPtr[kCCBlockSizeAES128 + 1];
    bzero(ivPtr, sizeof(ivPtr));
    [iv getCString:ivPtr maxLength:sizeof(ivPtr) encoding:NSUTF8StringEncoding];
    
    size_t bufferSize = [data length] + kCCBlockSizeAES128;
    void *buffer = malloc(bufferSize);
    size_t numBytesEncrypted = 0;
    
    CCCryptorStatus cryptorStatus = CCCrypt(operation, kCCAlgorithmAES128, kCCOptionPKCS7Padding,
                                            keyPtr, kCCKeySizeAES128,
                                            ivPtr,
                                            [data bytes], [data length],
                                            buffer, bufferSize,
                                            &numBytesEncrypted);
    
    if(cryptorStatus == kCCSuccess) {
        NSLog(@"AES Success");
        return [NSData dataWithBytesNoCopy:buffer length:numBytesEncrypted];
    } else {
        NSLog(@"AES Error");
    }
    
    free(buffer);
    return nil;
}
    
@end

@implementation eXProtect
    
+ (NSString *)AESDecrypt:(NSString *)text {
    return [text decryptWithAESwithKey:AESKey ivParameter:nil];
}
    
+ (NSString *)AESEncrypt:(NSString *)text {
    return [text encryptWithAESwithKey:AESKey ivParameter:nil];
}

@end
