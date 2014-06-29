/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_dispatch_semaphore, OS_xpc_object;
@class NSObject, NSMutableDictionary, NSRecursiveLock;

@interface CBXpcConnection : NSObject {

	<CBXpcConnectionDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _options;
	int _type;
	NSRecursiveLock* _delegateLock;
	NSObject<OS_dispatch_semaphore>* _xpcSendBarrier;
	NSObject<OS_xpc_object>* _xpcConnection;

}

@property (assign,nonatomic,__weak) <CBXpcConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4 ;
-(bool)isSetupOnUIThread;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)handleConnectionEvent:(id)arg1 ;
-(void)checkOut;
-(void)sendAsyncMsg:(int)arg1 args:(id)arg2 ;
-(id)allocXpcDictionaryWithNSDictionary:(id)arg1 ;
-(id)allocXpcMsg:(int)arg1 args:(id)arg2 ;
-(id)nsDictionaryFromXpcDictionary:(id)arg1 ;
-(void)handleReset;
-(void)handleInvalid;
-(id)allocXpcArrayWithNSArray:(id)arg1 ;
-(id)allocXpcObjectWithNSObject:(id)arg1 ;
-(id)nsArrayWithXpcArray:(id)arg1 ;
-(id)nsObjectWithXpcObject:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)disconnect;
-(void)checkIn;
@end

