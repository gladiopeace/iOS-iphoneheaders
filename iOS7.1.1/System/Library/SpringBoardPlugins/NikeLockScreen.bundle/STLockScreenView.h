/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SpringBoardPlugins/NikeLockScreen.bundle/NikeLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, STRunView, SWRunWorkoutProxy;

@interface STLockScreenView : UIView {

	UIImageView* _bgImageView;
	STRunView* _runView;
	SWRunWorkoutProxy* _workoutProxy;

}

@property (assign,nonatomic) STRunView * runView;                           //@synthesize runView=_runView - In the implementation block
@property (nonatomic,retain) SWRunWorkoutProxy * workoutProxy;              //@synthesize workoutProxy=_workoutProxy - In the implementation block
-(void)setWorkoutProxy:(id)arg1 ;
-(id)runView;
-(void)setRunView:(id)arg1 ;
-(id)workoutProxy;
-(void)dealloc;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
@end

