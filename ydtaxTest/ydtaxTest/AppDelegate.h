//
//  AppDelegate.h
//  ydtaxTest
//
//  Created by 一五齐创 on 2018/3/6.
//  Copyright © 2018年 yiqiao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

