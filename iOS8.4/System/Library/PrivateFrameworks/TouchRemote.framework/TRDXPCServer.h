/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/NSXPCConnectionDelegate.h>
#import <TouchRemote/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSXPCListener, NSArray, NSString;

@interface TRDXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _connections;
	NSXPCListener* _listener;
	unsigned long long _serverStartCount;

}

@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * remoteClientProxies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(NSArray *)connections;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)stop;
-(void)start;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSArray *)remoteClientProxies;
@end

