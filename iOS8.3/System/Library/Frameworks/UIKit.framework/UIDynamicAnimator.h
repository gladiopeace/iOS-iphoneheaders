/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIDynamicReferenceSystem, UIDynamicAnimatorDelegate;
#import <UIKit/UIKit-Structs.h>
@class PKExtendedPhysicsWorld, CADisplayLink, CALayer, NSMutableDictionary, NSMutableArray, NSMutableSet, UIDynamicAnimatorTicker, UIView, NSArray;

@interface UIDynamicAnimator : NSObject {

	PKExtendedPhysicsWorld* _world;
	CADisplayLink* _displaylink;
	double _elapsedTime;
	double _realElapsedTime;
	double _lastUpdateTime;
	double _lastInterval;
	long long _ticks;
	CALayer* _debugLayer;
	NSMutableDictionary* _bodies;
	NSMutableArray* _topLevelBehaviors;
	NSMutableSet* _registeredBehaviors;
	NSMutableSet* _behaviorsToRemove;
	NSMutableSet* _behaviorsToAdd;
	NSMutableArray* _postSolverActions;
	NSMutableArray* _beginContacts;
	NSMutableArray* _endContacts;
	char _isInWorldStepMethod;
	char _needsLocalBehaviorReevaluation;
	char _stopping;
	unsigned _referenceSystemType;
	unsigned _integralization;
	struct {
		unsigned delegateImplementsDynamicAnimatorDidPause : 1;
		unsigned delegateImplementsDynamicAnimatorWillResume : 1;
	}  _stateFlags;
	float _accuracy;
	int _registeredCollisionGroups;
	int _registeredImplicitBounds;
	CGRect _referenceSystemBounds;
	id<_UIDynamicReferenceSystem> _referenceSystem;
	int _debugInterval;
	/*^block*/id _action;
	id<UIDynamicAnimatorDelegate> _delegate;
	char _disableDisplayLink;
	float _speed;
	UIDynamicAnimatorTicker* _ticker;

}

@property (nonatomic,readonly) UIView * referenceView; 
@property (nonatomic,copy,readonly) NSArray * behaviors; 
@property (getter=isRunning,nonatomic,readonly) char running; 
@property (assign,nonatomic) id<UIDynamicAnimatorDelegate> delegate; 
@property (nonatomic,retain) UIDynamicAnimatorTicker * ticker;                    //@synthesize ticker=_ticker - In the implementation block
+(void)initialize;
+(void)_referenceViewSizeChanged:(id)arg1 ;
+(void)_clearReferenceViewFromAnimators:(id)arg1 ;
+(void)_registerAnimator:(id)arg1 ;
+(void)_unregisterAnimator:(id)arg1 ;
+(id)_allDynamicAnimators;
-(void)dealloc;
-(void)setDelegate:(id<UIDynamicAnimatorDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<UIDynamicAnimatorDelegate>)delegate;
-(id)_delegate;
-(void)_start;
-(id)recursiveDescription;
-(void)_setDelegate:(id)arg1 ;
-(id)_bodyForItem:(id)arg1 ;
-(void)_tickle;
-(id)_world;
-(id)_registerBodyForItem:(id)arg1 ;
-(void)_unregisterBodyForItem:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)removeAllBehaviors;
-(id)initWithReferenceView:(id)arg1 ;
-(void)addBehavior:(id)arg1 ;
-(char)_animatorStep:(double)arg1 ;
-(id)_registerBodyForItem:(id)arg1 shape:(unsigned)arg2 ;
-(void)_shouldReevaluateLocalBehaviors;
-(char)isRunning;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)_setRunning:(char)arg1 ;
-(NSArray *)behaviors;
-(void)_displayLinkTick:(id)arg1 ;
-(id)initWithReferenceSystem:(id)arg1 ;
-(UIView *)referenceView;
-(void)_clearReferenceView;
-(double)elapsedTime;
-(id)_referenceSystem;
-(void)_traverseBehaviorHierarchy:(/*^block*/id)arg1 ;
-(void)_checkBehavior:(id)arg1 ;
-(void)_registerBehavior:(id)arg1 ;
-(void)_unregisterBehavior:(id)arg1 ;
-(void)_setupWorld;
-(id)_keyForItem:(id)arg1 ;
-(void)_runBlockPostSolverIfNeeded:(/*^block*/id)arg1 ;
-(void)updateItemUsingCurrentState:(id)arg1 ;
-(void)_defaultMapper:(id)arg1 position:(CGPoint)arg2 angle:(float)arg3 itemType:(unsigned)arg4 ;
-(char)_isWorldActive;
-(void)_stop;
-(void)setTicker:(UIDynamicAnimatorTicker *)arg1 ;
-(UIDynamicAnimatorTicker *)ticker;
-(void)_evaluateLocalBehaviors;
-(void)_reevaluateImplicitBounds;
-(void)_reportBeginContacts;
-(void)_reportEndContacts;
-(void)_preSolverStep;
-(void)_postSolverStep;
-(void)_setReferenceSystem:(id)arg1 ;
-(float)_ptmRatio;
-(void)removeBehavior:(id)arg1 ;
-(void)didBeginContact:(id)arg1 ;
-(void)didEndContact:(id)arg1 ;
-(void)_registerImplicitBounds;
-(void)_unregisterImplicitBounds;
-(int)_registerCollisionGroup;
-(void)_unregisterCollisionGroup;
-(void)_setAnimatorIntegralization:(unsigned)arg1 ;
-(unsigned)_animatorIntegralization;
-(id)itemsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForCellAtIndexPath:(id)arg1 ;
-(void)updateItemFromCurrentState:(id)arg1 ;
-(void)_setSpeed:(float)arg1 ;
-(float)_speed;
-(void)_setAction:(/*^block*/id)arg1 ;
-(void)_setDebugInterval:(int)arg1 ;
-(int)_debugInterval;
-(void)_setAlwaysDisableDisplayLink:(char)arg1 ;
-(char)_alwaysDisableDisplayLink;
-(double)_animatorInterval;
-(long long)_ticks;
-(double)_realElapsedTime;
-(void)setReferenceView:(UIView *)arg1 ;
-(CGRect)_referenceSystemBounds;
-(unsigned)_referenceSystemType;
@end
