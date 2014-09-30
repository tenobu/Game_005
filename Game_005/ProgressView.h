//
//  ProgressView.h
//  Game_005
//
//  Created by 寺内 信夫 on 2014/09/30.
//  Copyright (c) 2014年 寺内 信夫. All rights reserved.
//

#import <UIKit/UIKit.h>

// TAG used in our custom table view cell to retreive this view
#define PROGRESS_VIEW_TAG (101)

@class Transcript;

@interface ProgressView : UIView

@property (nonatomic, assign) Transcript *transcript;

// Class method for computing a view height based on a given message transcript
+ (CGFloat)viewHeightForTranscript:(Transcript *)transcript;

@end
