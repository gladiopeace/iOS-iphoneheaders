/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MCJobQueueObserver, OS_dispatch_group;
@class NSObject;

@interface MCJobQueue : NSObject {

	NSObject<OS_dispatch_queue>* _executionQueue;
	NSObject<OS_dispatch_queue>* _eventQueue;
	<MCJobQueueObserver>* _observer;
	NSObject<OS_dispatch_queue>* _jobQueue;
	NSObject<OS_dispatch_group>* _jobGroup;
	/*^block*/ id _executionQueueAbortCompletionBlock;

}

@property (nonatomic,retain) NSObject<OS_dispatch_queue> * executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * eventQueue;                  //@synthesize eventQueue=_eventQueue - In the implementation block
@property (assign,nonatomic,__weak) <MCJobQueueObserver> * observer;                    //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * jobQueue;                    //@synthesize jobQueue=_jobQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_group> * jobGroup;                    //@synthesize jobGroup=_jobGroup - In the implementation block
@property (nonatomic,copy) id executionQueueAbortCompletionBlock;                       //@synthesize executionQueueAbortCompletionBlock=_executionQueueAbortCompletionBlock - In the implementation block
-(id)init;
-(id)executionQueue;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(id)eventQueue;
-(void)setEventQueue:(id)arg1 ;
-(id)jobGroup;
-(id)jobQueue;
-(/*^block*/ id)executionQueueAbortCompletionBlock;
-(void)setExecutionQueueAbortCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)hasJobsEnqueued;
-(void)jobDidFinish;
-(void)waitForEnqueuedJobsToCompleteCompletionBlock:(/*^block*/ id)arg1 ;
-(void)abortEnqueuedJobsCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setExecutionQueue:(id)arg1 ;
-(void)setJobQueue:(id)arg1 ;
-(void)setJobGroup:(id)arg1 ;
-(void)enqueueJob:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end

