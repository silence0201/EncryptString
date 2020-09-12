//
//  ViewController.m
//  EncryptStringiOS
//
//  Created by Silence on 2020/9/12.
//  Copyright © 2020年 Silence. All rights reserved.
//

#import "ViewController.h"
#import "NormalAccount.h"
#import "SpecialAccount.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *normalStr = @"Hello,World";
    NSString *protoctedStr = Es_Silence0201;
    
    NSLog(@"未加密的字符串: %@", normalStr);
    NSLog(@"加密的字符串: %@", protoctedStr);
    
    NormalAccount *normalAccount = [[NormalAccount alloc] init];
    SpecialAccount *specialAccount = [[SpecialAccount alloc] init];
    
    [normalAccount print];
    [specialAccount print];
}


@end
