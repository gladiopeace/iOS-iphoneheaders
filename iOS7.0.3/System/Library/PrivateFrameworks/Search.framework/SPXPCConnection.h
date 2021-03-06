/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString;

@interface SPXPCConnection : NSObject {

	NSObject<OS_xpc_object>* _conn;
	NSObject<OS_dispatch_queue>* _eventQueue;
	BOOL _ownsQueue;
	/*^block*/ id _messageHandler;
	/*^block*/ id _disconnectHandler;
	NSMutableSet* _outstandingMessages;
	BOOL _timeoutDisabled;
	id _context;

}

@property (readonly) NSString * serviceName; 
@property (nonatomic,copy) id messageHandler;                   //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id disconnectHandler;                //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (nonatomic,retain) id context;                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL timeoutDisabled;              //@synthesize timeoutDisabled=_timeoutDisabled - In the implementation block
-(id)serviceName;
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setDisconnectHandler:(/*^block*/ id)arg1 ;
-(void)_setEventHandlerOnConnection:(id)arg1 ;
-(void)_sendMessage:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_handleXPCMessage:(id)arg1 ;
-(void)_registerMessage:(id)arg1 ;
-(void)_removeMessage:(id)arg1 ;
-(int)_outstandingMessages;
-(/*^block*/ id)disconnectHandler;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(id)eventQueue;
-(void)sendMessage:(id)arg1 ;
-(void)shutdown;
-(void)setMessageHandler:(/*^block*/ id)arg1 ;
-(void)_handleXPCError:(id)arg1 ;
-(/*^block*/ id)messageHandler;
-(BOOL)timeoutDisabled;
-(void)setTimeoutDisabled:(BOOL)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/ id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 ;
@end

