/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, XPCProxyTarget, BBXPCConnectionDelegate;
@class NSObject, Protocol;

@interface BBXPCConnection : NSObject {

	id _remoteProxy;
	NSObject<OS_dispatch_queue>* _queue;
	<XPCProxyTarget>* _target;
	<BBXPCConnectionDelegate>* _delegate;
	bool _established;
	bool _invalidated;
	Protocol* _protocol;

}

@property (assign,nonatomic) <BBXPCConnectionDelegate> * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id proxy;                                          //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,readonly) NSObject<OS_xpc_object> * connection; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)invalidate;
-(bool)isValid;
-(void)resume;
-(id)connection;
-(id)_queue;
-(void)_invalidateConnection;
-(void)_noteConnectionStateDidChange:(bool)arg1 ;
-(id)initWithQueue:(id)arg1 target:(id)arg2 remoteProtocol:(id)arg3 ;
-(bool)established;
-(id)proxy;
@end

