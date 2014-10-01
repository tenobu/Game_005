//
//  AppDelegate.h
//  Game_005
//
//  Created by 寺内 信夫 on 2014/09/30.
//  Copyright (c) 2014年 寺内 信夫. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

// Display name for local MCPeerID
@property (copy, nonatomic) NSString *displayName;
// Service type for discovery
@property (copy, nonatomic) NSString *serviceType;
// MC Session for managing peer state and send/receive data between peers
//@property (retain, nonatomic) SessionContainer *sessionContainer;
// TableView Data source for managing sent/received messagesz
@property (retain, nonatomic) NSMutableArray *transcripts;
// Map of resource names to transcripts array index
@property (retain, nonatomic) NSMutableDictionary *imageNameIndex;

@end

