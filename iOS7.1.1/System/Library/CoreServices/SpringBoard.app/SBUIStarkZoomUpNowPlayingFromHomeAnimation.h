/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkZoomUpAppFromHomeAnimation.h>

@class NSNumber;

@interface SBUIStarkZoomUpNowPlayingFromHomeAnimation : SBUIStarkZoomUpAppFromHomeAnimation {

	NSNumber* _activated;

}
-(id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_cleanupAnimation;
-(BOOL)_animationShouldStart;
-(id)_viewToAnimate;
-(void)dealloc;
-(void)_startAnimation;
@end

