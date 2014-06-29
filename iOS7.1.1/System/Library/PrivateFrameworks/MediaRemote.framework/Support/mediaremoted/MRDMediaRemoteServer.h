/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:17:00 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDMediaRemoteClientDelegate.h>
#import <mediaremoted/MRDXPCMessageHandling.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, MRDNowPlayingInfoServer, MRDRemoteControlServer, MRDBrowsableContentServer, NSMutableDictionary, TRConnection, NSTimer, MRDMediaRemoteClient, NSMutableSet, BKSApplicationStateMonitor, NSString, NSArray;

@interface MRDMediaRemoteServer : NSObject <MRDMediaRemoteClientDelegate, MRDXPCMessageHandling> {

	NSObject<OS_xpc_object>* _listenerConnection;
	NSObject<OS_dispatch_queue>* _connectionQueue;
	MRDNowPlayingInfoServer* _nowPlayingInfoServer;
	MRDRemoteControlServer* _remoteControlServer;
	MRDBrowsableContentServer* _browsableContentServer;
	NSMutableDictionary* _activeClients;
	NSObject<OS_dispatch_queue>* _serialQueue;
	TRConnection* _activeConnection;
	TRConnection* _activeConnectionBeforeInterruption;
	MROriginRef _activeOrigin;
	MROriginRef _activeOriginBeforeInterruption;
	BOOL _activeOriginBeforeInterruptionShouldResume;
	NSTimer* _activeBeforeInterruptionInvalidationTimer;
	BOOL _ignoreNextAuthenticationFailurePortStatus;
	int _nowPlayingApplicationDidChangeToken;
	int _nowPlayingApplicationIsPlayingDidChangeToken;
	unsigned _originDiscoveryCount;
	MRDMediaRemoteClient* _overrideClient;
	unsigned _routeDiscoveryCount;
	NSMutableSet* _runAssertions;
	BOOL _overrideRouteDiscoveryMode;
	int _overrideRouteDiscoveryModeChangedNotifyToken;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSString* _cachedFrontmostAppBundleID;

}

@property (nonatomic,readonly) MROriginRef activeOrigin; 
@property (nonatomic,readonly) NSArray * availableOrigins; 
@property (nonatomic,readonly) MRDNowPlayingInfoServer * nowPlayingInfoServer;              //@synthesize nowPlayingInfoServer=_nowPlayingInfoServer - In the implementation block
@property (nonatomic,readonly) int localNowPlayingPID; 
@property (nonatomic,readonly) int localNowPlayingPIDForNowPlayingInfo; 
@property (nonatomic,readonly) BOOL localNowPlayingApplicationIsPlaying; 
@property (nonatomic,readonly) BOOL nowPlayingClientIsPlaying; 
@property (nonatomic,retain) MRDMediaRemoteClient * overrideClient;                         //@synthesize overrideClient=_overrideClient - In the implementation block
@property (nonatomic,readonly) MRDMediaRemoteClient * localNowPlayingClient; 
@property (nonatomic,readonly) MRDMediaRemoteClient * iPodClient; 
+(id)server;
-(void)_nowPlayingAppDidChangeNotification:(id)arg1 ;
-(id)addRunAssertionWithName:(id)arg1 ;
-(void)removeRunAssertion:(id)arg1 ;
-(void)_clientDidOpenConnection:(id)arg1 ;
-(id)localNowPlayingClient;
-(id)iPodClient;
-(id)nowPlayingInfoServer;
-(MROriginRef)activeOrigin;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(id)clientForBundleIdentifier:(id)arg1 ;
-(int)localNowPlayingPIDForNowPlayingInfo;
-(void)_registerAVSystemControllerNotifications;
-(void)_registerOtherNotifications;
-(void)_postActiveOriginDidChange;
-(void)_postAvailableOriginsDidChange;
-(void)_updateSystemRouteDiscoveryMode;
-(void)_unregisterAVSystemControllerNotifications;
-(void)_unregisterOtherNotifications;
-(void)_invalidateClient:(id)arg1 ;
-(void)_ignorePortStatusTimeout;
-(void)setActiveOrigin:(MROriginRef)arg1 ;
-(void)_setActiveConnection:(id)arg1 ;
-(void)_clearActiveBeforeInterruptionInformation;
-(void)_postNowPlayingAppIsPlayingDidChange;
-(void)_postNowPlayingApplicationDidChange;
-(id)localNowPlayingAppDisplayID;
-(BOOL)localNowPlayingApplicationIsPlaying;
-(int)localNowPlayingPID;
-(void)_currentRouteHasVolumeControlDidChangeNotification:(id)arg1 ;
-(void)_nowPlayingAppIsPlayingDidChangeNotification:(id)arg1 ;
-(void)_avSystemControllerServerDiedNotification:(id)arg1 ;
-(void)_audioSessionInterruptionNotification:(id)arg1 ;
-(void)_browserDidFindServiceNotification:(id)arg1 ;
-(void)_XPCServerDidAcceptClientConnectionNotification:(id)arg1 ;
-(void)_setActiveConnectionBeforeInterruption:(id)arg1 ;
-(void)_setActiveOriginBeforeInterruption:(MROriginRef)arg1 ;
-(void)_activeBeforeInterruptionInvalidationTimerAction:(id)arg1 ;
-(BOOL)nowPlayingClientIsPlaying;
-(void)_updateActiveConnectionBeforeInterruptionShouldResumeWithNewNowPlayingInfo:(id)arg1 ;
-(void)_setNowPlayingInfo:(id)arg1 forOrigin:(MROriginRef)arg2 pid:(int)arg3 withArtworkData:(id)arg4 mergePolicy:(unsigned char)arg5 ;
-(void)_setTouchRemoteNowPlayingInfo:(id)arg1 forOrigin:(MROriginRef)arg2 ;
-(void)_handleServerXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetCanBeNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppOverrideMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingInfoMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingInfoMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppDisplayIDMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppPIDMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppIsPlayingMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSelectSourceMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetOriginDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetAvailableOriginsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetActiveOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetActiveOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleKeepAliveMessage:(id)arg1 fromClient:(id)arg2 ;
-(id)overrideClient;
-(void)setOverrideClient:(id)arg1 ;
-(id)availableOrigins;
-(id)_descriptionForDiscoveryMode:(unsigned)arg1 ;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned)arg3 ;
-(void)removeClientForPID:(int)arg1 ;
-(void)_postNowPlayingInfoDidChangeNotification;
-(void)_postNowPlayingInfoDidChangeNotificationForOrigin:(MROriginRef)arg1 ;
-(void)_connection:(id)arg1 didReceiveNowPlayingInfoUpdatePacketEvent:(id)arg2 ;
-(void)_connection:(id)arg1 didReceiveNowPlayingArtworkUpdatePacketEvent:(id)arg2 ;
-(id)_celestialDiscoveryModeFromMediaRemoteDiscoveryMode:(unsigned)arg1 ;
-(void)mediaRemoteClientInvalidated:(id)arg1 ;
-(BOOL)routeIsActiveWithUID:(id)arg1 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_portStatusDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)start;
-(void)stop;
-(id)allClients;
-(id)pickableRoutesForCategory:(id)arg1 ;
-(void)pickRouteWithUID:(id)arg1 ;
-(void)addClient:(id)arg1 ;
-(id)clientForPID:(int)arg1 ;
-(void)beginOriginDiscovery;
-(void)endOriginDiscovery;
-(void)beginRouteDiscovery;
-(void)endRouteDiscovery;
-(void)_XPCServerDidInvalidateClientConnectionNotification:(id)arg1 ;
-(void)_connectionDidCloseNotification:(id)arg1 ;
-(void)_browserDidRemoveServiceNotification:(id)arg1 ;
@end

