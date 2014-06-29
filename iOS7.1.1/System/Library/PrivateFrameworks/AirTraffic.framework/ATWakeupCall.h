/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/NSNetServiceBrowserDelegate.h>
#import <AirTraffic/NSNetServiceDelegate.h>

@class NSMutableArray, NSNetServiceBrowser, NSThread;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSMutableArray* _hostLibraryIdentifiers;
	NSMutableArray* _resolvingHosts;
	NSMutableArray* _resolvedLibraryIdentifiers;
	NSMutableArray* _resolvedLibraryServices;
	/*^block*/ id _completion;
	NSNetServiceBrowser* _browser;
	NSThread* _wakeThread;
	bool _searching;
	int _resolving;
	unsigned long long _hostsToResolve;

}
+(void)sendWakeupCall:(id)arg1 ;
+(void)sendWakeupCallToAllSyncHosts;
+(id)wakeableHostsWithCompletion:(/*^block*/ id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)wake;
@end

