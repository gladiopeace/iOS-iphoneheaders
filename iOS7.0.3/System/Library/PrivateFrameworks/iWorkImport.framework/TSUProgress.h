/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface TSUProgress : NSObject {

	NSMutableSet* mProgressObservers;
	NSObject<OS_dispatch_queue>* mProgressObserversQueue;
	NSString* mMessage;

}

@property (readonly) double value; 
@property (readonly) double maxValue; 
@property (getter=isIndeterminate,readonly) BOOL indeterminate; 
@property (copy) NSString * message; 
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)protected_progressDidChange;
-(BOOL)protected_hasProgressObservers;
-(double)protected_minProgressObserverValueInterval;
-(void)dealloc;
-(id)init;
-(double)value;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(void)removeProgressObserver:(id)arg1 ;
@end

