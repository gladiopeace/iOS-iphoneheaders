/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <storebookkeeperd/NSXPCListenerDelegate.h>
#import <storebookkeeperd/SBDPushNotificationControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, SBDPushNotificationController, NSArray, NSString;

@interface SBDServer : NSObject <NSXPCListenerDelegate, SBDPushNotificationControllerDelegate> {

	id _SBKStoreAccountChangedNotificationObserver;
	id _SBKSBKSharedMusicLibraryImportFinishedObserver;
	BOOL _accountChangeUpdatePending;
	BOOL _accountChangeUpdateShouldReloadAccounts;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _xpcListener;
	SBDPushNotificationController* _pushNotificationController;
	NSArray* _serviceConnections;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (readonly) NSXPCListener * xpcListener;                                             //@synthesize xpcListener=_xpcListener - In the implementation block
@property (readonly) SBDPushNotificationController * pushNotificationController;              //@synthesize pushNotificationController=_pushNotificationController - In the implementation block
@property (readonly) NSArray * serviceConnections;                                            //@synthesize serviceConnections=_serviceConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(void)_updatePushNotificationRegistrations;
-(void)_updateForAccountChangeAfterReloadingAccounts:(BOOL)arg1 ;
-(void)_updateForSharedLibraryImportFinished;
-(void)synchronizeForUpdateJobWithDomain:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_pushNotificationController;
-(void)pushNotificationController:(id)arg1 didReceiveUpdateRequestForBookkeeperDomain:(id)arg2 toDomainRevision:(id)arg3 ;
-(SBDPushNotificationController *)pushNotificationController;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCListener *)xpcListener;
-(void)_accountsDidChangeNotification:(id)arg1 ;
-(NSArray *)serviceConnections;
@end

