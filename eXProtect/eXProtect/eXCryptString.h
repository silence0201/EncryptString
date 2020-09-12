//
//  eXCryptString.h
//  eXProtect
//
//  Created by Silence on 2020/9/12.
//  Copyright © 2020年 Silence. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef SIDefenseCryptString_h
#define SIDefenseCryptString_h

// __str - C-string.
// __n - Number of characters in string (without trailing \0 character).
#define SIDefense_CRYPT_STR_N(__str, __n) SIDefenseDecrypStrN((const unsigned char []){ SIDefense_ENCRYPT_STR_TO_CHAR_##__n(__str) }, __n + 1)
// TODO: use more complex approach!
// XOR is easy to find
#define SIDefense_ENCRYPT_STR_CHAR_AT(__str, __i) ((unsigned char)(__str[__i]) ^ ("UIApplicationDidBecomeActiveNotification"[__i%40]))

// Obfuscate.U.I.A.p.p.l.i.c.a.t.i.o.n.D.idBecomeActiveNotification

// This must match SIDefense_ENCRYPT_STR_CHAR_AT.
// 使用FOUNDATION_EXTERN(extern "C")标志,做为C函数进行编译
// 如果不适用在.mm中会作为C++函数进行编译,会导致生成函数名符号规则不同,导致找不到符号问题
FOUNDATION_EXTERN NSString *SIDefenseDecrypStrN(const unsigned char encStr[], size_t n);

#define SIDefense_ENCRYPT_STR_TO_CHAR_0(__str)  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 0)
#define SIDefense_ENCRYPT_STR_TO_CHAR_1(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_0(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 1)
#define SIDefense_ENCRYPT_STR_TO_CHAR_2(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_1(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 2)
#define SIDefense_ENCRYPT_STR_TO_CHAR_3(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_2(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 3)
#define SIDefense_ENCRYPT_STR_TO_CHAR_4(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_3(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 4)
#define SIDefense_ENCRYPT_STR_TO_CHAR_5(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_4(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 5)
#define SIDefense_ENCRYPT_STR_TO_CHAR_6(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_5(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 6)
#define SIDefense_ENCRYPT_STR_TO_CHAR_7(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_6(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 7)
#define SIDefense_ENCRYPT_STR_TO_CHAR_8(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_7(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 8)
#define SIDefense_ENCRYPT_STR_TO_CHAR_9(__str)  SIDefense_ENCRYPT_STR_TO_CHAR_8(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 9)
#define SIDefense_ENCRYPT_STR_TO_CHAR_10(__str) SIDefense_ENCRYPT_STR_TO_CHAR_9(__str),  SIDefense_ENCRYPT_STR_CHAR_AT(__str, 10)
#define SIDefense_ENCRYPT_STR_TO_CHAR_11(__str) SIDefense_ENCRYPT_STR_TO_CHAR_10(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 11)
#define SIDefense_ENCRYPT_STR_TO_CHAR_12(__str) SIDefense_ENCRYPT_STR_TO_CHAR_11(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 12)
#define SIDefense_ENCRYPT_STR_TO_CHAR_13(__str) SIDefense_ENCRYPT_STR_TO_CHAR_12(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 13)
#define SIDefense_ENCRYPT_STR_TO_CHAR_14(__str) SIDefense_ENCRYPT_STR_TO_CHAR_13(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 14)
#define SIDefense_ENCRYPT_STR_TO_CHAR_15(__str) SIDefense_ENCRYPT_STR_TO_CHAR_14(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 15)
#define SIDefense_ENCRYPT_STR_TO_CHAR_16(__str) SIDefense_ENCRYPT_STR_TO_CHAR_15(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 16)
#define SIDefense_ENCRYPT_STR_TO_CHAR_17(__str) SIDefense_ENCRYPT_STR_TO_CHAR_16(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 17)
#define SIDefense_ENCRYPT_STR_TO_CHAR_18(__str) SIDefense_ENCRYPT_STR_TO_CHAR_17(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 18)
#define SIDefense_ENCRYPT_STR_TO_CHAR_19(__str) SIDefense_ENCRYPT_STR_TO_CHAR_18(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 19)
#define SIDefense_ENCRYPT_STR_TO_CHAR_20(__str) SIDefense_ENCRYPT_STR_TO_CHAR_19(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 20)
#define SIDefense_ENCRYPT_STR_TO_CHAR_21(__str) SIDefense_ENCRYPT_STR_TO_CHAR_20(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 21)
#define SIDefense_ENCRYPT_STR_TO_CHAR_22(__str) SIDefense_ENCRYPT_STR_TO_CHAR_21(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 22)
#define SIDefense_ENCRYPT_STR_TO_CHAR_23(__str) SIDefense_ENCRYPT_STR_TO_CHAR_22(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 23)
#define SIDefense_ENCRYPT_STR_TO_CHAR_24(__str) SIDefense_ENCRYPT_STR_TO_CHAR_23(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 24)
#define SIDefense_ENCRYPT_STR_TO_CHAR_25(__str) SIDefense_ENCRYPT_STR_TO_CHAR_24(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 25)
#define SIDefense_ENCRYPT_STR_TO_CHAR_26(__str) SIDefense_ENCRYPT_STR_TO_CHAR_25(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 26)
#define SIDefense_ENCRYPT_STR_TO_CHAR_27(__str) SIDefense_ENCRYPT_STR_TO_CHAR_26(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 27)
#define SIDefense_ENCRYPT_STR_TO_CHAR_28(__str) SIDefense_ENCRYPT_STR_TO_CHAR_27(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 28)
#define SIDefense_ENCRYPT_STR_TO_CHAR_29(__str) SIDefense_ENCRYPT_STR_TO_CHAR_28(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 29)
#define SIDefense_ENCRYPT_STR_TO_CHAR_30(__str) SIDefense_ENCRYPT_STR_TO_CHAR_29(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 30)
#define SIDefense_ENCRYPT_STR_TO_CHAR_31(__str) SIDefense_ENCRYPT_STR_TO_CHAR_30(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 31)
#define SIDefense_ENCRYPT_STR_TO_CHAR_32(__str) SIDefense_ENCRYPT_STR_TO_CHAR_31(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 32)
#define SIDefense_ENCRYPT_STR_TO_CHAR_33(__str) SIDefense_ENCRYPT_STR_TO_CHAR_32(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 33)
#define SIDefense_ENCRYPT_STR_TO_CHAR_34(__str) SIDefense_ENCRYPT_STR_TO_CHAR_33(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 34)
#define SIDefense_ENCRYPT_STR_TO_CHAR_35(__str) SIDefense_ENCRYPT_STR_TO_CHAR_34(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 35)
#define SIDefense_ENCRYPT_STR_TO_CHAR_36(__str) SIDefense_ENCRYPT_STR_TO_CHAR_35(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 36)
#define SIDefense_ENCRYPT_STR_TO_CHAR_37(__str) SIDefense_ENCRYPT_STR_TO_CHAR_36(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 37)
#define SIDefense_ENCRYPT_STR_TO_CHAR_38(__str) SIDefense_ENCRYPT_STR_TO_CHAR_37(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 38)
#define SIDefense_ENCRYPT_STR_TO_CHAR_39(__str) SIDefense_ENCRYPT_STR_TO_CHAR_38(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 39)
#define SIDefense_ENCRYPT_STR_TO_CHAR_40(__str) SIDefense_ENCRYPT_STR_TO_CHAR_39(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 40)
#define SIDefense_ENCRYPT_STR_TO_CHAR_41(__str) SIDefense_ENCRYPT_STR_TO_CHAR_40(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 41)
#define SIDefense_ENCRYPT_STR_TO_CHAR_42(__str) SIDefense_ENCRYPT_STR_TO_CHAR_41(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 42)
#define SIDefense_ENCRYPT_STR_TO_CHAR_43(__str) SIDefense_ENCRYPT_STR_TO_CHAR_42(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 43)
#define SIDefense_ENCRYPT_STR_TO_CHAR_44(__str) SIDefense_ENCRYPT_STR_TO_CHAR_43(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 44)
#define SIDefense_ENCRYPT_STR_TO_CHAR_45(__str) SIDefense_ENCRYPT_STR_TO_CHAR_44(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 45)
#define SIDefense_ENCRYPT_STR_TO_CHAR_46(__str) SIDefense_ENCRYPT_STR_TO_CHAR_45(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 46)
#define SIDefense_ENCRYPT_STR_TO_CHAR_47(__str) SIDefense_ENCRYPT_STR_TO_CHAR_46(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 47)
#define SIDefense_ENCRYPT_STR_TO_CHAR_48(__str) SIDefense_ENCRYPT_STR_TO_CHAR_47(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 48)
#define SIDefense_ENCRYPT_STR_TO_CHAR_49(__str) SIDefense_ENCRYPT_STR_TO_CHAR_48(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 49)
#define SIDefense_ENCRYPT_STR_TO_CHAR_50(__str) SIDefense_ENCRYPT_STR_TO_CHAR_49(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 50)
#define SIDefense_ENCRYPT_STR_TO_CHAR_51(__str) SIDefense_ENCRYPT_STR_TO_CHAR_50(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 51)
#define SIDefense_ENCRYPT_STR_TO_CHAR_52(__str) SIDefense_ENCRYPT_STR_TO_CHAR_51(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 52)
#define SIDefense_ENCRYPT_STR_TO_CHAR_53(__str) SIDefense_ENCRYPT_STR_TO_CHAR_52(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 53)
#define SIDefense_ENCRYPT_STR_TO_CHAR_54(__str) SIDefense_ENCRYPT_STR_TO_CHAR_53(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 54)
#define SIDefense_ENCRYPT_STR_TO_CHAR_55(__str) SIDefense_ENCRYPT_STR_TO_CHAR_54(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 55)
#define SIDefense_ENCRYPT_STR_TO_CHAR_56(__str) SIDefense_ENCRYPT_STR_TO_CHAR_55(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 56)
#define SIDefense_ENCRYPT_STR_TO_CHAR_57(__str) SIDefense_ENCRYPT_STR_TO_CHAR_56(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 57)
#define SIDefense_ENCRYPT_STR_TO_CHAR_58(__str) SIDefense_ENCRYPT_STR_TO_CHAR_57(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 58)
#define SIDefense_ENCRYPT_STR_TO_CHAR_59(__str) SIDefense_ENCRYPT_STR_TO_CHAR_58(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 59)
#define SIDefense_ENCRYPT_STR_TO_CHAR_60(__str) SIDefense_ENCRYPT_STR_TO_CHAR_59(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 60)
#define SIDefense_ENCRYPT_STR_TO_CHAR_61(__str) SIDefense_ENCRYPT_STR_TO_CHAR_60(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 61)
#define SIDefense_ENCRYPT_STR_TO_CHAR_62(__str) SIDefense_ENCRYPT_STR_TO_CHAR_61(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 62)
#define SIDefense_ENCRYPT_STR_TO_CHAR_63(__str) SIDefense_ENCRYPT_STR_TO_CHAR_62(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 63)
#define SIDefense_ENCRYPT_STR_TO_CHAR_64(__str) SIDefense_ENCRYPT_STR_TO_CHAR_63(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 64)
#define SIDefense_ENCRYPT_STR_TO_CHAR_65(__str) SIDefense_ENCRYPT_STR_TO_CHAR_64(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 65)
#define SIDefense_ENCRYPT_STR_TO_CHAR_66(__str) SIDefense_ENCRYPT_STR_TO_CHAR_65(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 66)
#define SIDefense_ENCRYPT_STR_TO_CHAR_67(__str) SIDefense_ENCRYPT_STR_TO_CHAR_66(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 67)
#define SIDefense_ENCRYPT_STR_TO_CHAR_68(__str) SIDefense_ENCRYPT_STR_TO_CHAR_67(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 68)
#define SIDefense_ENCRYPT_STR_TO_CHAR_69(__str) SIDefense_ENCRYPT_STR_TO_CHAR_68(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 69)
#define SIDefense_ENCRYPT_STR_TO_CHAR_70(__str) SIDefense_ENCRYPT_STR_TO_CHAR_69(__str), SIDefense_ENCRYPT_STR_CHAR_AT(__str, 70)

#endif
