/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class QLPreviewController;

@interface QLPreviewTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	bool showing;
	<UIViewControllerContextTransitioning>* _transitionContext;

}

@property (assign) <UIViewControllerContextTransitioning> * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign) bool showing; 
@property (readonly) QLPreviewController * previewController; 
-(long long)_transitionStateForAnimationEnding:(bool)arg1 ;
-(void)willTransitionWithAnimationEnding:(bool)arg1 ;
-(void)didTransitionWithAnimationEnding:(bool)arg1 ;
-(void)updateStatusBarWithDuration:(double)arg1 ;
-(void)setTransitionContext:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)transitionContext;
-(void)startInteractiveTransition:(id)arg1 ;
-(bool)showing;
-(void)setShowing:(bool)arg1 ;
-(id)previewController;
@end

