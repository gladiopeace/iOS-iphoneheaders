/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol XPCServiceConnectionDelegate, OS_xpc_object, NSObject, OS_dispatch_queue;
@class NSString, NSObject, XPCServiceListener;

@interface XPCServiceConnection : NSObject {

	NSString* _serviceName;
	<XPCServiceConnectionDelegate>* _delegate;
	NSObject<OS_xpc_object>* _client;
	<NSObject>* _context;
	XPCServiceListener* _serviceListener;
	NSObject<OS_dispatch_queue>* _workQueue;

}

@property (nonatomic,readonly) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic,__weak) <XPCServiceConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) <NSObject> * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSObject<OS_xpc_object> * client;                            //@synthesize client=_client - In the implementation block
@property (assign,nonatomic,__weak) XPCServiceListener * serviceListener;                   //@synthesize serviceListener=_serviceListener - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
-(id)serviceName;
-(id)serviceListener;
-(void)setDelegate:(id)arg1 ;
-(id)debugDescription;
-(id)delegate;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)resume;
-(void).cxx_destruct;
-(id)workQueue;
-(void)shutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setWorkQueue:(id)arg1 ;
-(id)client;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)workQueueHandleIncomingMessage:(id)arg1 ;
-(void)workQueueShutDown;
-(id)initWithServiceName:(id)arg1 client:(id)arg2 queue:(id)arg3 ;
-(void)setServiceListener:(id)arg1 ;
@end

