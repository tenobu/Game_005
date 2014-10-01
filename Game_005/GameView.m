//
//  GameView.m
//  Game_005
//
//  Created by 寺内 信夫 on 2014/10/01.
//  Copyright (c) 2014年 寺内 信夫. All rights reserved.
//

#import "GameView.h"

@implementation GameView


+ (GameView *)loadInstanceOfViewFromNib
{
	
	return [[[NSBundle mainBundle] loadNibNamed: @"GameView"
										  owner: nil
										options: nil] lastObject];
	
}

- (id) awakeAfterUsingCoder: (NSCoder *)aDecoder
{
	
	BOOL loadedFromSimpleVuew = ( [[self subviews] count] == 0 );
	
	if ( loadedFromSimpleVuew ) {
		
		GameView *gameView = [GameView loadInstanceOfViewFromNib];
		
		gameView.frame                  = self.frame;
		gameView.autoresizingMask       = self.autoresizingMask;
		gameView.alpha                  = self.alpha;
		gameView.userInteractionEnabled = self.userInteractionEnabled;
		
		return gameView;
		
	}
	
	return self;
	
}

- (void)awakeFromNib
{
	
	[super awakeFromNib];
		
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
