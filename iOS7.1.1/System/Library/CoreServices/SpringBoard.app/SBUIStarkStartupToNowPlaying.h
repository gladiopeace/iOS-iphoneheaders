/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkStartupToAppAnimation.h>

@class NSNumber;

@interface SBUIStarkStartupToNowPlaying : SBUIStarkStartupToAppAnimation {

	NSNumber* _activated;

}
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(id)_createViewToAnimate;
-(BOOL)_animationShouldStart;
-(void)dealloc;
-(void)_startAnimation;
@end

