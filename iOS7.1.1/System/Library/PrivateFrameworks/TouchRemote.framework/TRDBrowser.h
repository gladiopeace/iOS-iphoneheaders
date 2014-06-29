/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/NSNetServiceBrowserDelegate.h>
#import <AirTraffic/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNetServiceBrowser, NSMapTable, NSArray;

@interface TRDBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSNetServiceBrowser* _browser;
	unsigned long long _browsingCount;
	NSMapTable* _netServiceToService;
	NSMapTable* _netServiceToResolvingCompletionHandlers;
	NSMapTable* _XPCConnectionToBrowsingCount;

}

@property (getter=isBrowsing,nonatomic,readonly) bool browsing; 
@property (nonatomic,readonly) NSArray * services; 
+(id)sharedBrowser;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3 ;
-(bool)isBrowsing;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
-(void)stopBrowsing;
-(id)services;
-(void)startBrowsing;
-(void)TRXPCD_stopBrowsing;
-(void)TRXPCD_getServicesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)TRXPCD_startBrowsing;
-(bool)_isXPCConnectionBrowsing:(id)arg1 ;
-(void)_callResolvingCompletionHandlersForNetService:(id)arg1 withError:(id)arg2 ;
-(id)_netServiceForService:(id)arg1 ;
-(void)_resolveNetService:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)_serviceForNetService:(id)arg1 ;
@end

