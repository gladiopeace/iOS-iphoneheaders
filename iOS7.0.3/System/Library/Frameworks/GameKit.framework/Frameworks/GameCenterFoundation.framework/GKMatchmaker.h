/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, GKMatch, NSSet, NSMutableDictionary, GKDiscovery, NSDate;

@interface GKMatchmaker : NSObject {

	NSObject<OS_dispatch_queue>* _lookForInviteQueue;
	BOOL _nearbyBrowsing;
	BOOL _nearbyAdvertising;
	BOOL _wasNearbyBrowsing;
	/*^block*/ id _inviteHandler;
	GKMatch* _match;
	/*^block*/ id _inviteeResponseHandler;
	NSSet* _invitees;
	/*^block*/ id _nearbyPlayerHandler;
	NSMutableDictionary* _nearbyPlayers;
	NSMutableDictionary* _nearbyInvites;
	GKDiscovery* _nearbyDiscovery;
	NSDate* _nearbyQueryLastCheckDate;
	NSSet* _nearbyCompatibileHashes;
	int _matching;
	double _nearbyQueryAllowance;

}

@property (nonatomic,copy) id inviteHandler;                                   //@synthesize inviteHandler=_inviteHandler - In the implementation block
@property (nonatomic,retain) GKMatch * match;                                  //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSSet * invitees;                                 //@synthesize invitees=_invitees - In the implementation block
@property (nonatomic,copy) id inviteeResponseHandler;                          //@synthesize inviteeResponseHandler=_inviteeResponseHandler - In the implementation block
@property (nonatomic,copy) id nearbyPlayerHandler;                             //@synthesize nearbyPlayerHandler=_nearbyPlayerHandler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nearbyPlayers;              //@synthesize nearbyPlayers=_nearbyPlayers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nearbyInvites;              //@synthesize nearbyInvites=_nearbyInvites - In the implementation block
@property (nonatomic,retain) GKDiscovery * nearbyDiscovery;                    //@synthesize nearbyDiscovery=_nearbyDiscovery - In the implementation block
@property (nonatomic,retain) NSDate * nearbyQueryLastCheckDate;                //@synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate - In the implementation block
@property (nonatomic,retain) NSSet * nearbyCompatibileHashes;                  //@synthesize nearbyCompatibileHashes=_nearbyCompatibileHashes - In the implementation block
@property (assign,nonatomic) double nearbyQueryAllowance;                      //@synthesize nearbyQueryAllowance=_nearbyQueryAllowance - In the implementation block
@property (assign,nonatomic) BOOL nearbyBrowsing;                              //@synthesize nearbyBrowsing=_nearbyBrowsing - In the implementation block
@property (assign,nonatomic) BOOL nearbyAdvertising;                           //@synthesize nearbyAdvertising=_nearbyAdvertising - In the implementation block
@property (assign,nonatomic) BOOL wasNearbyBrowsing;                           //@synthesize wasNearbyBrowsing=_wasNearbyBrowsing - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteListener; 
@property (assign) int matching;                                               //@synthesize matching=_matching - In the implementation block
+(id)syncQueue;
+(id)sharedMatchmaker;
-(void)lookForInvite;
-(void)findRematchForMatch:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(/*^block*/ id)inviteeResponseHandler;
-(void)loadConnectivitySettingsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)inviteeAcceptedNotification:(id)arg1 ;
-(void)inviteeDeclinedNotification:(id)arg1 ;
-(void)setConnectivitySettings:(id)arg1 ;
-(void)updateNearbyAdvertising;
-(id)invitees;
-(void)setInvitees:(id)arg1 ;
-(BOOL)hasInviteListener;
-(void)respondToHostedInvite:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2 ;
-(void)matchForNearbyInvite:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)matchForRemoteInvite:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(BOOL)removeInvitee:(id)arg1 ;
-(void)reportResponse:(int)arg1 forInvitees:(id)arg2 ;
-(void)doneMatchmaking;
-(void)inviteAnyNearbyPlayersWithRequest:(id)arg1 ;
-(void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 onlineConnectionData:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)setMatching:(int)arg1 ;
-(void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 currentPlayerIDs:(id)arg3 serverHosted:(BOOL)arg4 rematchID:(id)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(void)cancelNearbyInvitesToPlayers:(id)arg1 ;
-(void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1 ;
-(void)setNearbyPlayerHandler:(/*^block*/ id)arg1 ;
-(void)startNearbyBrowsing;
-(void)stopNearbyBrowsing;
-(int)responseForDeclineReason:(int)arg1 ;
-(void)registeredListentersChanged;
-(void)setInviteHandler:(/*^block*/ id)arg1 ;
-(void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)finishMatchmakingForMatch:(id)arg1 ;
-(void)queryPlayerGroupActivity:(unsigned)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)queryActivityWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2 ;
-(void)setNearbyPlayerDeclined:(id)arg1 reason:(int)arg2 ;
-(void)setNearbyPlayerFailed:(id)arg1 ;
-(/*^block*/ id)inviteHandler;
-(/*^block*/ id)nearbyPlayerHandler;
-(id)nearbyInvites;
-(void)setNearbyInvites:(id)arg1 ;
-(id)nearbyDiscovery;
-(void)setNearbyDiscovery:(id)arg1 ;
-(id)nearbyQueryLastCheckDate;
-(void)setNearbyQueryLastCheckDate:(id)arg1 ;
-(id)nearbyCompatibileHashes;
-(void)setNearbyCompatibileHashes:(id)arg1 ;
-(double)nearbyQueryAllowance;
-(void)setNearbyQueryAllowance:(double)arg1 ;
-(BOOL)nearbyBrowsing;
-(void)setNearbyBrowsing:(BOOL)arg1 ;
-(BOOL)nearbyAdvertising;
-(void)setNearbyAdvertising:(BOOL)arg1 ;
-(BOOL)wasNearbyBrowsing;
-(void)setWasNearbyBrowsing:(BOOL)arg1 ;
-(int)matching;
-(void)localPlayerRespondedToNearbyInvite:(id)arg1 ;
-(void)stopNearbyAdvertising;
-(void)cancelSentNearbyInvites;
-(void)declineReceivedNearbyInvites;
-(void)setNearbyPlayer:(id)arg1 deviceID:(id)arg2 reachable:(BOOL)arg3 ;
-(void)foundNearbyParticipant:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3 ;
-(void)lostNearbyParticipant:(id)arg1 deviceID:(id)arg2 ;
-(void)receivedData:(id)arg1 fromNearbyParticipant:(id)arg2 deviceID:(id)arg3 ;
-(id)descriptionForNearbyDictionary:(id)arg1 ;
-(void)handleNearbyProfileQuery:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4 ;
-(void)handleNearbyProfileResponse:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4 ;
-(void)handleNearbyInvite:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4 ;
-(void)handleNearbyInviteResponse:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4 ;
-(void)nearbyInviteWasCancelled:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4 ;
-(BOOL)shouldRespondToNearbyQuery;
-(id)hashForBundleID:(id)arg1 version:(id)arg2 ;
-(void)loadCompatabilityMatrixAsDictionaryWithHandler:(/*^block*/ id)arg1 ;
-(void)performSync:(/*^block*/ id)arg1 ;
-(void)setupNearbyDiscovery;
-(int)currentEnvironment;
-(id)hashForCurrentGame;
-(void)startNearbyAdvertising;
-(void)generateHashedCompatibiltySet;
-(void)sendDictionary:(id)arg1 toNearbyParticipant:(id)arg2 deviceID:(id)arg3 ;
-(id)nearbyDeviceWithDeviceID:(id)arg1 ;
-(int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(int)arg2 ;
-(id)nearbyDevicesForPlayer:(id)arg1 withState:(int)arg2 ;
-(id)profileDictionaryForLocalPlayer;
-(void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2 ;
-(void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3 ;
-(void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(int)arg3 ;
-(BOOL)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3 ;
-(void)sendProfileResponseToParticipant:(id)arg1 deviceID:(id)arg2 ;
-(void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)loadPhotoDataDictionaryWithHandler:(/*^block*/ id)arg1 ;
-(void)presentNearbyInvite:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4 ;
-(void)saveNearbyInvite:(id)arg1 fromPlayerID:(id)arg2 ;
-(void)declineNearbyInviteFromPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 reason:(int)arg4 ;
-(void)removeNearbyInviteFromPlayerID:(id)arg1 ;
-(void)localPlayerAcceptedNearbyInvite:(id)arg1 ;
-(id)nearbyInviteFromPlayerID:(id)arg1 ;
-(id)match;
-(void)setMatch:(id)arg1 ;
-(void)localPlayerAcceptedGameInvite:(id)arg1 ;
-(void)startBrowsingForNearbyPlayersWithReachableHandler:(/*^block*/ id)arg1 ;
-(void)stopBrowsingForNearbyPlayers;
-(id)nearbyPlayers;
-(void)setNearbyPlayers:(id)arg1 ;
-(void)setInviteeResponseHandler:(/*^block*/ id)arg1 ;
-(void)matchForInvite:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerIDs:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)findMatchForRequest:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)cancelInviteToPlayer:(id)arg1 ;
-(void)finishedAuthenticating;
-(void)applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)applicationWillTerminateNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
@end

