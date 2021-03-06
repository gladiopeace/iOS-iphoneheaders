/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GKStateMachineDelegate;
@class NSString, NSDictionary;

@interface GKStateMachine : NSObject {

	int _lock;
	BOOL _shouldLogStateTransitions;
	NSString* _currentState;
	NSDictionary* _validTransitions;
	<GKStateMachineDelegate>* _delegate;

}

@property (retain) NSString * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (assign) <GKStateMachineDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(BOOL)_setCurrentState:(id)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(id)validTransitions;
-(BOOL)applyState:(id)arg1 ;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
-(void)setValidTransitions:(id)arg1 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)currentState;
-(void)setCurrentState:(id)arg1 ;
@end

