/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSXPCListenerDelegate;
@class NSObject, NSString;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject<OS_dispatch_queue>* _userQueue;
	void* reserved0;
	<NSXPCListenerDelegate>* _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (assign) <NSXPCListenerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceListener;
+(id)anonymousListener;
+(void)enableTransactions;
+(id)_UUID;
-(id)serviceName;
-(id)_initShared;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)invalidate;
-(void)suspend;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(void)stop;
-(id)_queue;
-(id)endpoint;
-(id)initWithServiceName:(id)arg1 ;
-(void)finalize;
@end

