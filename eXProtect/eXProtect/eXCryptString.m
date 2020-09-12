//
//  eXCryptString.m
//  eXProtect
//
//  Created by Silence on 2020/9/12.
//  Copyright © 2020年 Silence. All rights reserved.
//

#import "eXCryptString.h"


NSString *SIDefenseDecrypStrN(const unsigned char encStr[], size_t n) {
    char *buf = [[NSMutableData dataWithLength:n] mutableBytes];
    for (NSInteger i = 0; i != n; ++i) {
        buf[i] = encStr[i] ^ ("UIApplicationDidBecomeActiveNotification"[i%40]);
    }
    return [NSString stringWithCString:buf encoding:NSASCIIStringEncoding];
}
