/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBControlCenterViewControllerDelegate.h>
#import <SpringBoard/SBCoordinatedPresenting.h>

@class SBControlCenterWindow, SBControlCenterRootView, SBControlCenterViewController, UIImageView, UIView, _UIBackdropView, SBChevronView, NSMutableSet, NSHashTable, _UIDynamicValueAnimation, UIDynamicAnimator, SBApplication, NSSet;

@interface SBControlCenterController : UIViewController <SBControlCenterViewControllerDelegate, SBCoordinatedPresenting> {

	SBControlCenterWindow* _window;
	SBControlCenterRootView* _rootView;
	SBControlCenterViewController* _viewController;
	UIImageView* _coveredContentSnapshot;
	UIView* _fullScreenGrabberContainer;
	_UIBackdropView* _fullScreenGrabberBackdrop;
	SBChevronView* _fullScreenChevron;
	NSMutableSet* _preventDismissalOnLockReasons;
	BOOL _uiLocked;
	NSHashTable* _observers;
	int _orientation;
	BOOL _animatingInitialPresentation;
	BOOL _gotFirstBackdropUpdate;
	BOOL _completingTransitionOpen;
	_UIDynamicValueAnimation* _bounceAnimation;
	UIDynamicAnimator* _animator;
	unsigned _animatorStopCount;
	CGRect _animatorStopFrame;
	BOOL _inGrabberOnlyMode;
	BOOL _presented;
	BOOL _transitioning;
	BOOL _fullyRevealed;
	SBApplication* _coveredApplication;
	float _backgroundBrightness;

}

@property (assign,nonatomic) BOOL inGrabberOnlyMode;                                       //@synthesize inGrabberOnlyMode=_inGrabberOnlyMode - In the implementation block
@property (nonatomic,retain) SBApplication * coveredApplication;                           //@synthesize coveredApplication=_coveredApplication - In the implementation block
@property (assign,getter=isUILocked,nonatomic) BOOL UILocked;                              //@synthesize uiLocked=_uiLocked - In the implementation block
@property (assign,getter=isPresented,nonatomic) BOOL presented;                            //@synthesize presented=_presented - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                    //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isFullyRevealed,nonatomic) BOOL fullyRevealed;                    //@synthesize fullyRevealed=_fullyRevealed - In the implementation block
@property (assign,nonatomic) float backgroundBrightness;                                   //@synthesize backgroundBrightness=_backgroundBrightness - In the implementation block
@property (nonatomic,readonly) int coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) float hintDisplacement; 
@property (nonatomic,readonly) unsigned hintEdge; 
@property (assign,nonatomic) <SBPresentingDelegate> * presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
+(void)notifyControlCenterControl:(id)arg1 didActivate:(BOOL)arg2 ;
+(id)_sharedInstanceCreatingIfNeeded:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)isGrabberVisible;
-(BOOL)allowShowTransitionSystemGesture;
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 ;
-(void)cancelTransition;
-(void)hideGrabberAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)showGrabberAnimated:(BOOL)arg1 ;
-(BOOL)isAvailableWhileLocked;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_dismissOnLock;
-(BOOL)isPresentingControllerTransitioning;
-(void)abortAnimatedTransition;
-(int)coordinatedPresentingControllerIdentifier;
-(float)hintDisplacement;
-(unsigned)hintEdge;
-(void)_lockStateChangedNotification:(id)arg1 ;
-(void)_uiRelockedNotification:(id)arg1 ;
-(void)setUILocked:(BOOL)arg1 ;
-(void)setCoveredApplication:(id)arg1 ;
-(void)_enumerateObservers:(/*^block*/ id)arg1 ;
-(void)_updateCoveredContentSnapshot;
-(void)_clearCoveredContentSnapshot;
-(BOOL)inGrabberOnlyMode;
-(float)_yValueForOpen;
-(float)_yValueForClosed;
-(void)_updateRevealPercentage:(float)arg1 ;
-(void)_updateGrabberVisibility;
-(void)hideGrabberAnimated:(BOOL)arg1 ;
-(BOOL)allowShowTransition;
-(BOOL)_allowShowTransitionSystemGesture;
-(id)coveredApplication;
-(void)setPresented:(BOOL)arg1 ;
-(void)_revealSlidingViewToHeight:(float)arg1 ;
-(void)_cleanupAnimator;
-(void)setInGrabberOnlyMode:(BOOL)arg1 ;
-(void)_beginPresentation;
-(float)_controlCenterHeightForTouchLocation:(CGPoint)arg1 ;
-(void)_setLockHUDHidden:(BOOL)arg1 ;
-(void)_finishPresenting:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(float)_verticalPercentageMovedOnScreenForY:(float)arg1 stopY:(float)arg2 ;
-(id)_newDynamicAnimationForShow:(BOOL)arg1 currentValue:(double)arg2 velocity:(double)arg3 unitSize:(double)arg4 ;
-(void)_endPresentation;
-(void)_presentWithDuration:(double)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)isFullyRevealed;
-(void)dismissAnimated:(BOOL)arg1 withAdditionalAnimations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_dismissWithDuration:(double)arg1 additionalAnimations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setFullyRevealed:(BOOL)arg1 ;
-(void)resetControlAlpha;
-(void)setBackgroundBrightness:(float)arg1 ;
-(void)updateControlAlphaForBrightness:(float)arg1 ;
-(void)controlCenterViewControllerWantsDismissal:(id)arg1 ;
-(BOOL)controlCenterViewController:(id)arg1 canHandleGestureRecognizer:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 handleTap:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 handlePan:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 backdropViewDidUpdate:(id)arg2 ;
-(void)preventDismissalOnLock:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)allowHideTransition;
-(float)backgroundBrightness;
-(void)beginTransitionWithTouchLocation:(CGPoint)arg1 ;
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 completion:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)_window;
-(void)removeObserver:(id)arg1 ;
-(BOOL)wantsFullScreenLayout;
-(BOOL)isTransitioning;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)isVisible;
-(BOOL)isPresented;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)isUILocked;
-(BOOL)handleMenuButtonTap;
@end

