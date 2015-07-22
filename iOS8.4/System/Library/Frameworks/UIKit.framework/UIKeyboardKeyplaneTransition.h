/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIKeyboardKeyplaneTransitionDelegate;
@class CADisplayLink, UIKBTree, UIView;

@interface UIKeyboardKeyplaneTransition : NSObject {

	double _currentProgress;
	double _liftOffProgress;
	double _finishProgress;
	double _finishDuration;
	double _finalTransitionStartTime;
	CADisplayLink* _displayLink;
	UIKBTree* _start;
	UIKBTree* _end;
	UIView* _startView;
	UIView* _endView;
	/*^block*/id _completionBlock;
	id<UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
	BOOL _initiallyAtEnd;

}

@property (copy) id completionBlock;                                                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) id<UIKeyboardKeyplaneTransitionDelegate> transitionDelegate;              //@synthesize transitionDelegate=_transitionDelegate - In the implementation block
@property (assign,nonatomic) BOOL initiallyAtEnd;                                                      //@synthesize initiallyAtEnd=_initiallyAtEnd - In the implementation block
@property (nonatomic,readonly) double startHeight; 
@property (nonatomic,readonly) double endHeight; 
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)removeAllAnimations;
-(id<UIKeyboardKeyplaneTransitionDelegate>)transitionDelegate;
-(double)startHeight;
-(double)endHeight;
-(void)finalizeTransition;
-(void)updateWithProgress:(double)arg1 ;
-(void)transitionToFinalState:(id)arg1 ;
-(void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4 ;
-(void)commitTransitionRebuild;
-(void)finishWithProgress:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2 ;
-(void)setTransitionDelegate:(id<UIKeyboardKeyplaneTransitionDelegate>)arg1 ;
-(BOOL)initiallyAtEnd;
-(void)setInitiallyAtEnd:(BOOL)arg1 ;
@end
