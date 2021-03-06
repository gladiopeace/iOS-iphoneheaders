/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AITTargetObserverRecord : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	/*^block*/ id _handler;
	id _observer;

}

@property (readonly) id observer;                                      //@synthesize observer=_observer - In the implementation block
@property (readonly) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) id handler;                                       //@synthesize handler=_handler - In the implementation block
+(id)recordForObserver:(id)arg1 queue:(id)arg2 block:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(/*^block*/ id)handler;
-(id)observer;
-(id)queue;
@end

