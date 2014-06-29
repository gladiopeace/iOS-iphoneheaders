/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DynamicBarAnimatorDelegate;
@class CADisplayLink;

@interface DynamicBarAnimator : NSObject {

	float _topBarHeightForState[2];
	float _bottomBarOffsetForState[2];
	BOOL _dragging;
	CADisplayLink* _displayLink;
	float _targetTopBarHeight;
	float _unroundedTopBarHeight;
	float _lastUnroundedTopBarHeight;
	BOOL _didHideBarsByMoving;
	BOOL _didHideOrShowBarsExplicitly;
	float _lastOffset;
	int _state;
	float _topBarHeight;
	float _bottomBarOffset;
	id _target;
	SEL _action;
	float _minimumTopBarHeight;
	float _maximumBottomBarOffset;
	<DynamicBarAnimatorDelegate>* _delegate;

}

@property (nonatomic,readonly) int state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int targetState; 
@property (nonatomic,readonly) float topBarHeight;                                 //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,readonly) float bottomBarOffset;                              //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (assign,nonatomic) id target;                                            //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                           //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) float minimumTopBarHeight;                            //@synthesize minimumTopBarHeight=_minimumTopBarHeight - In the implementation block
@property (assign,nonatomic) float maximumBottomBarOffset;                         //@synthesize maximumBottomBarOffset=_maximumBottomBarOffset - In the implementation block
@property (assign,nonatomic) <DynamicBarAnimatorDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)attemptTransitionToState:(int)arg1 animated:(BOOL)arg2 ;
-(float)topBarHeight;
-(float)bottomBarOffset;
-(BOOL)canTransitionToState:(int)arg1 ;
-(void)setTopBarHeight:(float)arg1 forState:(int)arg2 ;
-(void)setBottomBarOffset:(float)arg1 forState:(int)arg2 ;
-(void)setMinimumTopBarHeight:(float)arg1 ;
-(void)setMaximumBottomBarOffset:(float)arg1 ;
-(void)beginDraggingWithOffset:(float)arg1 ;
-(void)endDraggingWithTargetOffset:(float)arg1 velocity:(float)arg2 ;
-(void)updateDraggingWithOffset:(float)arg1 ;
-(float)_constrainTopBarHeight:(float)arg1 ;
-(void)_updateDisplayLink;
-(float)_bottomBarOffsetForTopBarHeight:(float)arg1 ;
-(void)_transitionToSteadyState;
-(float)_topBarHeightForBottomBarOffset:(float)arg1 ;
-(void)_moveBarsWithDelta:(float)arg1 ;
-(float)minimumTopBarHeight;
-(float)maximumBottomBarOffset;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(int)state;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(int)targetState;
-(void)_updateOutputs;
-(void)_displayLinkFired:(id)arg1 ;
@end

