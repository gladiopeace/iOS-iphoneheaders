/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIPercentDrivenInteractiveTransition;

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	double _duration;
	<UIViewControllerContextTransitioning>* _transitionContext;
	UIPercentDrivenInteractiveTransition* _interactiveTransition;
	bool _interactive;
	double _interactiveProgress;

}

@property (nonatomic,readonly) double duration;                                                       //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isInteractive,nonatomic) bool interactive;                                   //@synthesize interactive=_interactive - In the implementation block
@property (assign,setter=_setInteractiveProgress:,nonatomic) double interactiveProgress;              //@synthesize interactiveProgress=_interactiveProgress - In the implementation block
+(id)interactionControllerForAnimationController:(id)arg1 ;
-(id)containerView;
-(double)transitionDuration:(id)arg1 ;
-(bool)isInteractive;
-(void)completeTransition:(bool)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(bool)arg1 ;
-(id)transitionContext;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(double)duration;
-(id)fromViewController;
-(id)toViewController;
-(void).cxx_destruct;
-(CGRect)finalToViewFrame;
-(id)interactiveTransition;
-(void)setInteractive:(bool)arg1 ;
-(void)updateInteractiveTransitionProgress:(double)arg1 ;
-(void)_setInteractiveProgress:(double)arg1 ;
-(id)_newInteractiveTransition;
-(id)initWithDuration:(double)arg1 ;
-(CGRect)initialFromViewFrame;
-(CGRect)initialToViewFrame;
-(CGRect)finalFromViewFrame;
-(double)interactiveProgress;
@end

