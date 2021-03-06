/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface IAPXPCConnection : NSObject {

	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	/*^block*/ id _disconnectBlock;
	NSObject<OS_dispatch_queue>* _replyQueue;
	/*^block*/ id _messageBlock;

}

@property (copy) id disconnectBlock; 
@property (copy) id messageBlock; 
-(id)initWithServiceName:(id)arg1 queueName:(id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 queueName:(id)arg2 ;
-(id)_initIAPXPCConnection:(id)arg1 ;
-(void)dealloc;
-(void)sendMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/ id)arg2 ;
-(void)setDisconnectBlock:(/*^block*/ id)arg1 ;
-(void)setMessageBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)messageBlock;
-(/*^block*/ id)disconnectBlock;
-(void)sendSynchronousMessage:(id)arg1 withReply:(/*^block*/ id)arg2 ;
-(void)_reloadEventHandler;
-(id)copyReplyQueue;
-(void)setReplyQueue:(id)arg1 ;
@end

