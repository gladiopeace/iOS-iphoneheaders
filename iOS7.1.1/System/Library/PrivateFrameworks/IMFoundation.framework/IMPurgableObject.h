/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMPurgableObject : NSObject {

	id _instanceObject;
	/*^block*/ id _setupBlock;
	/*^block*/ id _cleanupBlock;
	NSObject<OS_dispatch_queue>* _queue;

}
-(void)_receivedMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(void)_cleanupInstance;
-(void)_setupInstance;
-(id)initWithSetupBlock:(/*^block*/ id)arg1 cleanupBlock:(/*^block*/ id)arg2 queue:(id)arg3 ;
-(id)instance;
@end

