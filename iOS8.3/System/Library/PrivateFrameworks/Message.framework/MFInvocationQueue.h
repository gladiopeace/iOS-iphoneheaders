/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:30:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFDiagnosticsGenerator.h>

@class NSConditionLock, NSMutableArray, NSString;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator> {

	NSConditionLock* _lock;
	NSMutableArray* _items;
	unsigned _numThreads;
	unsigned _maxThreads;
	int _threadPriorityTrigger;
	double _threadRecycleTimeout;
	CFSetRef _lowPriorityThreads;
	char _isForeground;

}

@property (assign,nonatomic) unsigned maxThreadCount; 
@property (assign,nonatomic) int threadPriorityTrigger;                //@synthesize threadPriorityTrigger=_threadPriorityTrigger - In the implementation block
@property (assign,nonatomic) double threadRecycleTimeout;              //@synthesize threadRecycleTimeout=_threadRecycleTimeout - In the implementation block
@property (nonatomic,readonly) unsigned invocationCount; 
@property (nonatomic,readonly) unsigned threadCount;                   //@synthesize numThreads=_numThreads - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInvocationQueue;
+(unsigned)totalInvocationCount;
+(void)flushAllInvocationQueues;
-(void)removeAllItems;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)setMaxThreadCount:(unsigned)arg1 ;
-(void)addInvocation:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(void)setThreadRecycleTimeout:(double)arg1 ;
-(void)applicationWillResume;
-(void)didCancel:(id)arg1 ;
-(id)initWithMaxThreadCount:(unsigned long)arg1 ;
-(void)_drainQueue:(id)arg1 ;
-(void)_processInvocation:(id)arg1 ;
-(void)_adjustThreadPrioritiesIsForeground:(char)arg1 ;
-(unsigned)maxThreadCount;
-(unsigned)invocationCount;
-(unsigned)threadCount;
-(int)threadPriorityTrigger;
-(void)setThreadPriorityTrigger:(int)arg1 ;
-(double)threadRecycleTimeout;
@end

