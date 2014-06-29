/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SMBaseState, NSMutableArray, NSMutableDictionary;

@interface StateMachine : NSObject {

	bool _isPerformingAction;
	SMBaseState* _currentState;
	NSMutableArray* _pendingActionQueue;
	NSMutableDictionary* _groupChangesCache;

}

@property (nonatomic,retain) SMBaseState * currentState;                           //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) bool isPerformingAction;                              //@synthesize isPerformingAction=_isPerformingAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingActionQueue;                  //@synthesize pendingActionQueue=_pendingActionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groupChangesCache;              //@synthesize groupChangesCache=_groupChangesCache - In the implementation block
-(void)setPendingActionQueue:(id)arg1 ;
-(void)_moveToState:(id)arg1 viaTransition:(id)arg2 ;
-(void)setGroupChangesCache:(id)arg1 ;
-(void)_performActionNow:(id)arg1 ;
-(bool)isPerformingAction;
-(id)pendingActionQueue;
-(void)setIsPerformingAction:(bool)arg1 ;
-(void)_takeTransition:(id)arg1 ;
-(void)_calculateGroupChangesFromState:(id)arg1 toState:(id)arg2 ;
-(id)groupChangesCache;
-(id)_groupChangesKeyFromState:(id)arg1 toState:(id)arg2 ;
-(void)_invokeSpecialAction:(id)arg1 onState:(id)arg2 ;
-(id)initWithStartState:(id)arg1 ;
-(void)performAction:(id)arg1 ;
-(id)currentState;
-(void)setCurrentState:(id)arg1 ;
-(void).cxx_destruct;
@end

