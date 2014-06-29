/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:17:13 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSMediaStreamDaemon.h>
#import <mstreamd/MSPowerBudgetDelegate.h>
#import <IDSFoundation/APSConnectionDelegate.h>
#import <mstreamd/MSPauseManagerDelegate.h>
#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <MediaStream/MSDaemonProtocols.h>

@class NSXPCListener, APSConnection, MSPowerAssertionManager, NSMutableDictionary;

@interface MSIOSMediaStreamDaemon : MSMediaStreamDaemon <MSPowerBudgetDelegate, APSConnectionDelegate, MSPauseManagerDelegate, NSXPCListenerDelegate, MSDaemonProtocols> {

	NSXPCListener* _center;
	NSXPCListener* _noWakeCenter;
	APSConnection* _apsConnection;
	MSPowerAssertionManager* _powerAssertionManager;
	NSMutableDictionary* _personIDToPowerBudgetPersistedValuesMap;
	NSMutableDictionary* _personIDToPowerBudgetMap;

}

@property (nonatomic,retain) NSMutableDictionary * personIDToPowerBudgetPersistedValuesMap;              //@synthesize personIDToPowerBudgetPersistedValuesMap=_personIDToPowerBudgetPersistedValuesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personIDToPowerBudgetMap;                             //@synthesize personIDToPowerBudgetMap=_personIDToPowerBudgetMap - In the implementation block
-(id)personIDToPowerBudgetMap;
-(void)_updatePushNotificationTopicsOutListenToProduction:(BOOL*)arg1 outListenToDevelopment:(BOOL*)arg2 ;
-(id)personIDToPowerBudgetPersistedValuesMap;
-(id)_powerBudgetForPersonID:(id)arg1 ;
-(void)_readPowerBudgetParametersForPersonID:(id)arg1 ;
-(void)didBeginForegroundFocusForPersonID:(id)arg1 ;
-(void)didEndForegroundFocusForPersonID:(id)arg1 ;
-(void)setPersonIDToPowerBudgetPersistedValuesMap:(id)arg1 ;
-(void)setPersonIDToPowerBudgetMap:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void).cxx_destruct;
-(void)stop;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)didReceivePushNotificationForPersonID:(id)arg1 ;
-(void)didIdle;
-(void)didUnidle;
-(void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1 ;
-(void)didReceiveAuthenticationFailureForPersonID:(id)arg1 ;
-(void)didReceiveAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2 ;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg1 ;
-(BOOL)mayDownloadPersonID:(id)arg1 ;
-(void)_serverSideConfigurationDidChange:(id)arg1 ;
-(BOOL)isWaitingForAuth;
-(void)enqueueAssetCollections:(id)arg1 personID:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)serverSideConfigurationForPersonID:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)pauseForUUID:(id)arg1 ;
-(void)unpauseForUUID:(id)arg1 ;
-(void)forgetEverythingForPersonID:(id)arg1 ;
-(void)pauseManagerDidPause:(id)arg1 ;
-(void)pauseManagerDidUnpause:(id)arg1 ;
-(id)MSPowerBudgetDidRequestPersistedValues:(id)arg1 ;
-(void)MSPowerBudget:(id)arg1 didRequestStorageOfPersistedValues:(id)arg2 ;
-(void)MSPowerBudgetGotSignificantEvent:(id)arg1 ;
-(void)resetServerStateForPersonID:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg1 personID:(id)arg2 ;
-(void)isBusyCompletionBlock:(/*^block*/ id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
@end

