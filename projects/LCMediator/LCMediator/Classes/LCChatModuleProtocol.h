//
//  LCChatModule.h
//  LCMediator
//
//  Created by MengLingChao on 2018/7/6.
//  Copyright © 2018年 MengLingChao. All rights reserved.
//

#import <Foundation/Foundation.h>

/**私信模块协议*/
@protocol LCChatModule <NSObject>

/**读取未读数*/
+ (NSUInteger)ureandCount;
/**跳转到聊天详情*/
+ (void)pushChatViewControllerFromViewController:(UIViewController *)viewController;

@end