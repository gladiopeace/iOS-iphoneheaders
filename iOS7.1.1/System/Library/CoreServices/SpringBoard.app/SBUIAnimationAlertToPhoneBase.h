/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@protocol SBWindowContextAppearance;
@class SBWindow, SBAlert, UIView;

@interface SBUIAnimationAlertToPhoneBase : SBUIMainScreenAnimationController {

	SBWindow* _transitionWindow;
	SBAlert* _deactivatingAlert;
	UIView<SBWindowContextAppearance>* _viewToAnimate;
	BOOL _reallyFinishedAnimating;

}

@property (setter=_setViewToAnimate:,getter=_viewToAnimate,nonatomic,retain) UIView * viewToAnimate;              //@synthesize viewToAnimate=_viewToAnimate - In the implementation block
-(void)_prepareAnimation;
-(void)_noteAnimationDidFinish;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(void)_applicationDependencyStateChanged;
-(id)_viewToAnimate;
-(void)_maybeReportAnimationFinished;
-(BOOL)_isApplicationLaunchFinished;
-(BOOL)_shouldAnimateWallpaper;
-(id)initWithAlert:(id)arg1 activatingApp:(id)arg2 ;
-(id)_deactivatingAlert;
-(void)_reallyFinishedAnimating;
-(void)_setViewToAnimate:(id)arg1 ;
-(void)dealloc;
-(void)_setHidden:(BOOL)arg1 ;
@end

