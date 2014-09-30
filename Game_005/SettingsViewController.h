//
//  SettingsViewController.h
//  Game_005
//
//  Created by 寺内 信夫 on 2014/09/30.
//  Copyright (c) 2014年 寺内 信夫. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SettingsViewControllerDelegate;

@interface SettingsViewController : UIViewController

@property (assign, nonatomic) id < SettingsViewControllerDelegate > delegate;

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *serviceType;

@end

@protocol SettingsViewControllerDelegate <NSObject>

- (void)              controller: (SettingsViewController *)controller
didCreateChatRoomWithDisplayName: (NSString *)displayName
					 serviceType: (NSString *)serviceType;

@end
