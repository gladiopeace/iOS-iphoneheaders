/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <XPCKit/XPCServiceConnectionDelegate.h>

@protocol XPCNSServiceConnectionDelegate, NSObject;
@class XPCServiceConnection, NSString;

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate> {

	XPCServiceConnection* _serviceConnection;
	<XPCNSServiceConnectionDelegate>* _delegate;
	<NSObject>* _context;

}

@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) <XPCNSServiceConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) <NSObject> * context;                                            //@synthesize context=_context - In the implementation block
-(id)serviceName;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void).cxx_destruct;
-(void)shutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
-(void)XPCServiceConnectionDidDisconnect:(id)arg1 ;
-(id)initWithXPCServiceConnection:(id)arg1 ;
@end

