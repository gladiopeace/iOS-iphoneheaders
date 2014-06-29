/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backboardd/BKConnectionListenerHandler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface BKProcessAssertionServer : NSObject <BKConnectionListenerHandler> {

	NSObject<OS_dispatch_queue>* _queue;
	NSMapTable* _clients;
	NSMapTable* _viewServicesMap;

}
+(id)sharedInstance;
-(id)_wrapperForConnection:(id)arg1 ;
-(void)handleIncomingConnection:(id)arg1 forService:(id)arg2 ;
-(void)_applicationExited:(id)arg1 ;
-(id)_assertionForClient:(id)arg1 ;
-(void)_removeAssertionFromViewServicesList:(id)arg1 ;
-(id)_assertionsForProcess:(id)arg1 ;
-(void)_resumeViewServiceAssertionsForApp:(id)arg1 ;
-(void)_suspendViewServiceAssertionsForApp:(id)arg1 ;
-(id)_assertionForWrapper:(id)arg1 ;
-(void)_receiveAcquire:(id)arg1 ;
-(void)_receiveUpdate:(id)arg1 ;
-(BOOL)_assertionAllowedForApplication:(id)arg1 withConnection:(id)arg2 fromPID:(int)arg3 reason:(unsigned)arg4 outServiceHost:(id*)arg5 ;
-(void)_addAssertionWrapper:(id)arg1 toHostedListForApp:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)_addClient:(id)arg1 ;
-(void)_removeClient:(id)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
@end

