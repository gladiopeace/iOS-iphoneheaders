/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, MBConnectionHandler;
@class NSObject;

@interface MBConnection : NSObject {

	NSObject<OS_xpc_object>* _conn;
	NSObject<OS_dispatch_queue>* _eventQueue;
	NSObject<MBConnectionHandler>* _handler;

}

@property (assign,nonatomic) NSObject<MBConnectionHandler> * messageHandler;              //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(void)suspend;
-(void)cancel;
-(void)resume;
-(id)eventQueue;
-(void)sendMessage:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 eventQueue:(id)arg2 ;
-(void)setMessageHandler:(id)arg1 ;
-(id)sendMessageWithReplyAndSync:(id)arg1 error:(id*)arg2 ;
-(void)_setEventHandlerForXPCConnection;
-(void)_handleXPCEvent:(id)arg1 ;
-(void)_handleXPCError:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 eventQueue:(id)arg2 ;
-(id)messageHandler;
@end

