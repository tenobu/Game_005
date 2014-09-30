//
//  MessageView.h
//  Game_005
//
//  Created by 寺内 信夫 on 2014/09/30.
//  Copyright (c) 2014年 寺内 信夫. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Transcript;

// TAG used in our custom table view cell to retreive this view
#define MESSAGE_VIEW_TAG (99)

@interface MessageView : UIView

@property (nonatomic, assign) Transcript *transcript;

// Class method for computing a view height based on a given message transcript
+ (CGFloat)viewHeightForTranscript:(Transcript *)transcript;

@end
