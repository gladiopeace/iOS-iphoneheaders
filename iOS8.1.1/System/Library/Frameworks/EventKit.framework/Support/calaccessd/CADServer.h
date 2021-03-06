/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <calaccessd/NSXPCListenerDelegate.h>
#import <calaccessd/ClientConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, BirthdayCalendarManager, LocalAttachmentCleanUpSupport, NSMutableSet, NSLock, NSArray, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	BirthdayCalendarManager* _birthdayManager;
	LocalAttachmentCleanUpSupport* _localAttachmentCleanupManager;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	unsigned long long _birthdayManagerGeneration;
	NSArray* _signalSensors;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_serverIdentifier;
+(id)server;
-(void)clientConnectionDied:(id)arg1 ;
-(void)_setUpSignalHandlers;
-(void)_startBirthdayManager;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerForIdentityOrphanCleanup;
-(void)_registerForIdleChangeTrackingClientCleanup;
-(void)_tearDownSignalHandlers;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_dumpState;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)runForTesting;
-(id)clientConnectionForIdentifier:(int)arg1 ;
-(void)_stopBirthdayManager;
-(void)_protectedDataDidBecomeAvailable;
-(void)_registerForNotifications;
-(void)dealloc;
-(id)init;
-(void)run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)shutDown;
@end

