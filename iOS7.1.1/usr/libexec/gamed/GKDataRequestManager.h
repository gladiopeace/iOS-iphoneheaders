/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <aosnotifyd/APSConnectionDelegate.h>
#import <AVConference/GKNATObserverDelegate.h>
#import <gamed/GKPreferencesDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSXPCListener, GKNATObserver, NSObject, NSData, GKDistributedNotificationCenter, NSMutableDictionary, GKDiscovery, GKClientProxy, NSDate, APSConnection, GKAuthenticationController, BKSApplicationStateMonitor, GKLocalPlayerInternal, GKReachability, NSString;

@interface GKDataRequestManager : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, GKNATObserverDelegate, GKPreferencesDelegate> {

	NSXPCListener* _publicListener;
	int _currentEnvironment;
	GKNATObserver* _natObserver;
	int _natType;
	NSObject<OS_dispatch_semaphore>* _natSemaphore;
	NSObject<OS_dispatch_queue>* _natQueue;
	NSData* _pushToken;
	GKDistributedNotificationCenter* _notificationCenter;
	unsigned _bulletinRecordID;
	NSMutableDictionary* _currentEmailSearches;
	GKDiscovery* _discovery;
	GKClientProxy* _browsingClient;
	GKClientProxy* _advertisingClient;
	BOOL _receivesMemoryWarnings;
	int _activePushEnvironment;
	NSDate* _nearbyQueryLastCheckDate;
	APSConnection* _pushConnectionProd;
	APSConnection* _pushConnectionDev;
	GKAuthenticationController* _authController;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	GKLocalPlayerInternal* _authenticatedPlayer;
	GKReachability* _reachability;
	double _nearbyQueryAllowance;

}

@property (nonatomic,retain) GKDistributedNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) GKAuthenticationController * authController;                       //@synthesize authController=_authController - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (assign) int natType;                                                                 //@synthesize natType=_natType - In the implementation block
@property (readonly) NSString * authenticatedPlayerID; 
@property (retain) GKLocalPlayerInternal * authenticatedPlayer;                                 //@synthesize authenticatedPlayer=_authenticatedPlayer - In the implementation block
@property (assign) int currentEnvironment;                                                      //@synthesize currentEnvironment=_currentEnvironment - In the implementation block
@property (assign) int activePushEnvironment;                                                   //@synthesize activePushEnvironment=_activePushEnvironment - In the implementation block
@property (retain) NSData * pushToken;                                                          //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) int preferredEnvironment; 
@property (getter=isSandboxed,nonatomic,readonly) BOOL sandboxed; 
@property (retain) GKDiscovery * discovery;                                                     //@synthesize discovery=_discovery - In the implementation block
@property (retain) GKClientProxy * browsingClient;                                              //@synthesize browsingClient=_browsingClient - In the implementation block
@property (retain) GKClientProxy * advertisingClient;                                           //@synthesize advertisingClient=_advertisingClient - In the implementation block
@property (retain) NSDate * nearbyQueryLastCheckDate;                                           //@synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate - In the implementation block
@property (assign) double nearbyQueryAllowance;                                                 //@synthesize nearbyQueryAllowance=_nearbyQueryAllowance - In the implementation block
@property (assign,nonatomic) BOOL receivesMemoryWarnings;                                       //@synthesize receivesMemoryWarnings=_receivesMemoryWarnings - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnectionProd;                                //@synthesize pushConnectionProd=_pushConnectionProd - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnectionDev;                                 //@synthesize pushConnectionDev=_pushConnectionDev - In the implementation block
@property (nonatomic,@dynamic,readonly) APSConnection * activePushConnection; 
@property (nonatomic,retain) GKReachability * reachability;                                     //@synthesize reachability=_reachability - In the implementation block
+(id)pushQueue;
+(id)statsQueue;
+(id)ratingsQueue;
+(id)clientQueue;
+(BOOL)allowSelfSignedCertForEnvironment:(int)arg1 ;
+(id)syncQueue;
+(id)sharedManager;
-(void)endTransaction:(id)arg1 ;
-(void)beginTransaction:(id)arg1 ;
-(void)finishStartup;
-(void)updateActivePushEnvironment;
-(void)loadConnectivitySettingsAndStartNATObserver;
-(void)setReachability:(id)arg1 ;
-(void)performDelayedRequests;
-(int)preferredEnvironment;
-(id)secureObjectForKey:(id)arg1 ;
-(void)setActivePushEnvironment:(int)arg1 ;
-(void)setAuthController:(id)arg1 ;
-(void)authenticationStateDidChange:(id)arg1 ;
-(void)getStoreFront:(/*^block*/ id)arg1 ;
-(id)applicationStateMonitor;
-(void)storeBagChanged:(id)arg1 ;
-(void)storeFrontChanged:(id)arg1 ;
-(id)storeBag;
-(void)performAsync:(/*^block*/ id)arg1 ;
-(int)activePushEnvironment;
-(id)pushConnectionForEnvironment:(int)arg1 ;
-(id)authController;
-(void)_setPushToken:(id)arg1 ;
-(void)sendPushTokenForClient:(id)arg1 ;
-(void)_clearPushConnections;
-(void)_updateNotificationTopics;
-(void)removeSecureObjectForKey:(id)arg1 ;
-(void)_setActivePushEnvironment:(int)arg1 ;
-(void)_setCurrentEnvironment:(int)arg1 ;
-(void)presentPendingInvites;
-(void)_waitForValidNATType;
-(void)_updatePushEnvironmentWithStoreBag:(id)arg1 ;
-(void)_setConnectivitySettings:(id)arg1 ;
-(void)_resetNATObserverWithSettings:(id)arg1 ;
-(void)clearAllNearbyInvites;
-(void)resetEnvironmentAndClearCaches:(BOOL)arg1 ;
-(void)declineTurnBasedInvite:(id)arg1 withReason:(int)arg2 ;
-(void)presentTurnBasedInvite:(id)arg1 ;
-(void)saveInvite:(id)arg1 type:(int)arg2 ;
-(void)presentTurnBasedTurn:(id)arg1 ;
-(id)gameInviteMessageForDisplayName:(id)arg1 localizedAppName:(id)arg2 customMessage:(id)arg3 ;
-(id)URLPathForStoreItem:(id)arg1 context:(id)arg2 ;
-(id)gameCenterURLStringWithPath:(id)arg1 ;
-(id)nextBulletinRecordID;
-(id)customInviteSoundPathForBundleID:(id)arg1 ;
-(void)didReceiveRelayPush:(id)arg1 ;
-(void)didReceiveInvitePush:(id)arg1 ;
-(void)didReceiveMatchmakingPush:(id)arg1 ;
-(void)didReceiveFriendRequestPush:(id)arg1 ;
-(void)didReceiveTurnBasedPush:(id)arg1 ;
-(void)didReceiveSystemPush:(id)arg1 ;
-(void)didReceiveVetEmailPush:(id)arg1 ;
-(void)didReceiveProfileUpdatePush:(id)arg1 ;
-(void)didReceiveChallengesPush:(id)arg1 ;
-(void)didReceiveGenericPush:(id)arg1 ;
-(void)badgeAppsFromPushNotification:(id)arg1 ;
-(void)clearTurnBasedNotification:(id)arg1 ;
-(void)expireCachesForTurnEvent:(id)arg1 ;
-(void)presentPendingTurnBasedEvents;
-(void)_expireCachesForKey:(id)arg1 context:(id)arg2 ;
-(void)expireCachesForPushCommand:(unsigned char)arg1 userInfo:(id)arg2 ;
-(void)presentFriendRequest:(id)arg1 ;
-(void)presentFriendAcceptance:(id)arg1 ;
-(BOOL)isPlayerInAddressBook:(id)arg1 ;
-(id)URLPathForFriendRequestFromPlayer:(id)arg1 ;
-(id)URLPathForFriend:(id)arg1 ;
-(void)clearPushEnvironment;
-(void)declineInvite:(id)arg1 withReason:(int)arg2 ;
-(id)removeInviteWithInviteID:(id)arg1 type:(int)arg2 ;
-(void)presentInviteCancelled:(id)arg1 ;
-(void)presentInvite:(id)arg1 ;
-(void)loadLocalizedGameNameForBundleID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)updateDeclineInviteTrackingForReason:(int)arg1 ;
-(id)customChallengeSoundPathForBundleID:(id)arg1 ;
-(void)didReceiveChallengesReceivedPush:(id)arg1 ;
-(void)didReceiveChallengesCompletedPush:(id)arg1 ;
-(void)presentChallengeCompleted:(id)arg1 ;
-(void)presentChallengeReceived:(id)arg1 ;
-(void)handleNearbyInviteResponse:(id)arg1 ;
-(void)acceptFriendRequest:(id)arg1 ;
-(void)acceptInvite:(id)arg1 ;
-(void)acceptTurnBasedInvite:(id)arg1 ;
-(void)handleChallenge:(id)arg1 ofType:(unsigned)arg2 forBundleID:(id)arg3 ;
-(void)collectDelayedRequest:(id)arg1 inDictionary:(id)arg2 ;
-(id)activePushConnection;
-(void)setCurrentEnvironment:(int)arg1 ;
-(void)getValidNATTypeWithHandler:(/*^block*/ id)arg1 ;
-(id)compatibleGameForMatrix:(id)arg1 ;
-(void)getTurnCounts;
-(void)presentInviteeAccepted:(id)arg1 client:(id)arg2 ;
-(void)presentInviteeDeclined:(id)arg1 client:(id)arg2 ;
-(void)submitScoresAndAchievements;
-(void)submitRatings;
-(void)setSecureObject:(id)arg1 forKey:(id)arg2 ;
-(id)discovery;
-(void)setDiscovery:(id)arg1 ;
-(id)browsingClient;
-(void)setBrowsingClient:(id)arg1 ;
-(id)advertisingClient;
-(void)setAdvertisingClient:(id)arg1 ;
-(id)pushConnectionProd;
-(void)setPushConnectionProd:(id)arg1 ;
-(id)pushConnectionDev;
-(void)setPushConnectionDev:(id)arg1 ;
-(void)setApplicationStateMonitor:(id)arg1 ;
-(id)authenticatedPlayer;
-(void)setAuthenticatedPlayer:(id)arg1 ;
-(id)reachability;
-(void)terminate;
-(id)nearbyQueryLastCheckDate;
-(void)setNearbyQueryLastCheckDate:(id)arg1 ;
-(double)nearbyQueryAllowance;
-(void)setNearbyQueryAllowance:(double)arg1 ;
-(id)updateCacheWithNearbyProfileDictionary:(id)arg1 ;
-(void)presentNearbyInvite:(id)arg1 ;
-(void)nearbyInviteWasCancelled:(id)arg1 ;
-(void)handleBulletinResponse:(id)arg1 ;
-(void)performSync:(/*^block*/ id)arg1 ;
-(int)currentEnvironment;
-(void)setNotificationCenter:(id)arg1 ;
-(void)gameCenterDidBecomeRestricted;
-(void)setPushToken:(id)arg1 ;
-(id)pushToken;
-(BOOL)isSandboxed;
-(void)updateNotificationTopics;
-(id)authenticatedPlayerID;
-(void)dealloc;
-(id)init;
-(void)setReceivesMemoryWarnings:(BOOL)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)notificationCenter;
-(int)natType;
-(void)NATTypeDidChange:(int)arg1 ;
-(void)setNatType:(int)arg1 ;
-(id)authenticationToken;
-(BOOL)receivesMemoryWarnings;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)appStateChanged:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
@end

