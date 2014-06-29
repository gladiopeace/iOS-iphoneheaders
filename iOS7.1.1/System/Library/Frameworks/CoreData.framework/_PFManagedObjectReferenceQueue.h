/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {

	int _cd_rc;
	int _spinLock;
	int _flags;
	int _signalRunloop;
	NSManagedObjectContext* _context;
	CFArrayRef _queue;
	CFRunLoopObserverRef _rlObserver;

}
-(bool)_queueForDealloc:(id)arg1 ;
-(bool)_GC_queueForDealloc:(id)arg1 ;
-(void)_processReferenceQueue:(bool)arg1 ;
-(void)_unregisterRunloopObservers;
-(void)_contextDidDealloc;
-(id)initForContext:(id)arg1 ;
-(long long)_queueCount;
-(bool)_signal;
-(bool)_queueBatchForDealloc:(CFArrayRef)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)finalize;
@end

