/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch, NSTimer;

@interface MPTapGestureRecognizer : UIGestureRecognizer {

	unsigned long long _lastTapCount;
	CGPoint _tapLocation;
	UITouch* _trackingTouch;
	NSTimer* _tapHandleTimer;

}

@property (assign) unsigned long long tapCount;              //@synthesize lastTapCount=_lastTapCount - In the implementation block
-(void)_delayedHandleTaps:(id)arg1 ;
-(void)_resetTapTimer;
-(void)_setTapTimerWithDuration:(double)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)tapCount;
-(void)reset;
-(void).cxx_destruct;
@end

