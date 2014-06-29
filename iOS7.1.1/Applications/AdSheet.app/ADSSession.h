/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/ADSSession_RPC.h>
#import <AdSheet/ADClientStateDelegate.h>

@class NSString, NSData, NSURL, NSXPCConnection, ADClientState, NSMutableDictionary, NSMutableArray, NSTimer;

@interface ADSSession : NSObject <ADSSession_RPC, ADClientStateDelegate> {

	BOOL _clientIsPrivileged;
	BOOL _clientIsInBackground;
	BOOL _mediaPlaybackEnabled;
	BOOL _isOpen;
	BOOL _isTimedCloseInProgress;
	BOOL _canReceiveAdsInBackground;
	BOOL _hasMobileInstallationData;
	BOOL _policyEngineEnabled;
	NSString* _bundleID;
	NSData* _clientAuditToken;
	int _clientStatusBarOrientation;
	NSURL* _serverURL;
	NSXPCConnection* _connection;
	unsigned _adSpaceCount;
	unsigned _state;
	int _PID;
	NSString* _authenticationUserName;
	ADClientState* _clientState;
	NSMutableDictionary* _adSpacesByCreativeType;
	NSMutableArray* _adSpaceControllers;
	NSTimer* _closeTimer;
	NSString* _clientLinkedOnVersion;
	int _clientApplicationRunState;
	NSString* _clientApplicationVersion;
	NSMutableArray* _outstandingStationEntryRecords;
	NSMutableArray* _outstandingSongBeganRecords;
	double _connectTime;

}

@property (nonatomic,readonly) NSString * bundleID;                                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSData * clientAuditToken;                                    //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
@property (assign,nonatomic) int clientStatusBarOrientation;                                 //@synthesize clientStatusBarOrientation=_clientStatusBarOrientation - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) double connectTime;                                           //@synthesize connectTime=_connectTime - In the implementation block
@property (assign,nonatomic) unsigned adSpaceCount;                                          //@synthesize adSpaceCount=_adSpaceCount - In the implementation block
@property (assign,nonatomic) unsigned state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int PID;                                                      //@synthesize PID=_PID - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,readonly) BOOL clientIsPrivileged;                                      //@synthesize clientIsPrivileged=_clientIsPrivileged - In the implementation block
@property (nonatomic,readonly) BOOL applicationStateAllowsAds; 
@property (nonatomic,readonly) BOOL productionClient; 
@property (assign,nonatomic) BOOL clientIsInBackground;                                      //@synthesize clientIsInBackground=_clientIsInBackground - In the implementation block
@property (assign,nonatomic) BOOL mediaPlaybackEnabled;                                      //@synthesize mediaPlaybackEnabled=_mediaPlaybackEnabled - In the implementation block
@property (nonatomic,retain) ADClientState * clientState;                                    //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adSpacesByCreativeType;                   //@synthesize adSpacesByCreativeType=_adSpacesByCreativeType - In the implementation block
@property (nonatomic,retain) NSMutableArray * adSpaceControllers;                            //@synthesize adSpaceControllers=_adSpaceControllers - In the implementation block
@property (nonatomic,retain) NSTimer * closeTimer;                                           //@synthesize closeTimer=_closeTimer - In the implementation block
@property (nonatomic,readonly) BOOL isOpen;                                                  //@synthesize isOpen=_isOpen - In the implementation block
@property (nonatomic,readonly) BOOL isTimedCloseInProgress;                                  //@synthesize isTimedCloseInProgress=_isTimedCloseInProgress - In the implementation block
@property (assign,nonatomic) BOOL canReceiveAdsInBackground;                                 //@synthesize canReceiveAdsInBackground=_canReceiveAdsInBackground - In the implementation block
@property (nonatomic,copy) NSString * clientLinkedOnVersion;                                 //@synthesize clientLinkedOnVersion=_clientLinkedOnVersion - In the implementation block
@property (assign,nonatomic) int clientApplicationRunState;                                  //@synthesize clientApplicationRunState=_clientApplicationRunState - In the implementation block
@property (nonatomic,copy) NSString * clientApplicationVersion;                              //@synthesize clientApplicationVersion=_clientApplicationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasMobileInstallationData;                                 //@synthesize hasMobileInstallationData=_hasMobileInstallationData - In the implementation block
@property (nonatomic,readonly) BOOL actionInProgress; 
@property (assign,nonatomic) BOOL policyEngineEnabled;                                       //@synthesize policyEngineEnabled=_policyEngineEnabled - In the implementation block
@property (nonatomic,readonly) NSMutableArray * outstandingStationEntryRecords;              //@synthesize outstandingStationEntryRecords=_outstandingStationEntryRecords - In the implementation block
@property (nonatomic,readonly) NSMutableArray * outstandingSongBeganRecords;                 //@synthesize outstandingSongBeganRecords=_outstandingSongBeganRecords - In the implementation block
-(void)willLoadAdForType:(int)arg1 section:(id)arg2 serverURL:(id)arg3 ;
-(id)adSpaceControllerIdsMatchingServerURL:(id)arg1 section:(id)arg2 adType:(int)arg3 ;
-(void)clientStateDidChange:(id)arg1 ;
-(void)adSpaceControllerDidClose:(id)arg1 ;
-(BOOL)applicationStateAllowsAds;
-(BOOL)productionClient;
-(BOOL)clientIsInBackground;
-(BOOL)actionInProgress;
-(int)clientStatusBarOrientation;
-(id)initWithConnection:(id)arg1 bundleID:(id)arg2 ;
-(void)_test_clearCurrentAdSpaceControllerAds;
-(void)_test_closeUnassignedBannerControllers;
-(unsigned)adSpaceCount;
-(void)setAdSpaceCount:(unsigned)arg1 ;
-(void)policyEngineShouldPlaySongBreakAd:(id)arg1 songSkipAd:(id)arg2 forSongBegan:(id)arg3 stationID:(unsigned long long)arg4 ;
-(void)policyEngineShouldPlayAd:(id)arg1 forStationEntry:(unsigned long long)arg2 ;
-(void)_handleRequestPropertiesAcquisitionTimeout;
-(void)_statusBarOrientationChanged;
-(void)_lookupMobileInstallationData;
-(void)_handleTestStationDescriptionsComputedNotification:(id)arg1 ;
-(void)_gatewayEnabledStationIDsDidChange;
-(BOOL)hasMobileInstallationData;
-(void)_abortForStalledMobileInstallationLookup;
-(void)_abortForStallediTunesStorefrontLookup;
-(void)_abortForStalledDetermineRoamingStatus;
-(void)setHasMobileInstallationData:(BOOL)arg1 ;
-(void)setClientApplicationRunState:(int)arg1 ;
-(void)setClientApplicationVersion:(id)arg1 ;
-(void)_handleMobileInstallationDataVersion:(id)arg1 runState:(int)arg2 ;
-(id)adSpaceControllers;
-(id)adSpacesByCreativeType;
-(id)_sortedAdSpacesForCreativeType:(int)arg1 ;
-(id)_unassignedAdSpaceControllerForCreativeType:(int)arg1 ;
-(int)_countOfControllersForCreativeType:(int)arg1 ;
-(void)reassignAdSpaceControllersForCreativeType:(int)arg1 ;
-(BOOL)_adSpaceController:(id)arg1 matchesServerURL:(id)arg2 section:(id)arg3 adType:(int)arg4 ;
-(void)considerClosing;
-(BOOL)policyEngineEnabled;
-(BOOL)clientIsPrivileged;
-(void)setClientLinkedOnVersion:(id)arg1 ;
-(id)clientApplicationVersion;
-(int)clientApplicationRunState;
-(id)clientLinkedOnVersion;
-(void)setCloseTimer:(id)arg1 ;
-(id)closeTimer;
-(int)PID;
-(void)_handleHeartbeatTokenChangedNotification:(id)arg1 ;
-(id)outstandingSongBeganRecords;
-(id)outstandingStationEntryRecords;
-(id)_adSpaceControllerForCreativeType:(int)arg1 candidates:(id)arg2 ;
-(id)_findAvailableAdSpaceForAd:(id)arg1 candidates:(id)arg2 ;
-(BOOL)_hasActiveStoryboard;
-(void)closeAdSpace:(id)arg1 ;
-(void)setMediaPlaybackEnabled:(BOOL)arg1 ;
-(void)setClientStatusBarOrientation:(int)arg1 ;
-(void)setClientIsInBackground:(BOOL)arg1 ;
-(BOOL)mediaPlaybackEnabled;
-(void)setAdSpacesByCreativeType:(id)arg1 ;
-(void)setAdSpaceControllers:(id)arg1 ;
-(BOOL)isTimedCloseInProgress;
-(BOOL)canReceiveAdsInBackground;
-(void)setCanReceiveAdsInBackground:(BOOL)arg1 ;
-(void)setPolicyEngineEnabled:(BOOL)arg1 ;
-(BOOL)isOpen;
-(id)bundleID;
-(id)clientAuditToken;
-(void)dealloc;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)close;
-(id)connection;
-(void)setServerURL:(id)arg1 ;
-(void)setAuthenticationUserName:(id)arg1 ;
-(id)authenticationUserName;
-(void)_priv_setServerURL:(id)arg1 ;
-(void)_remote_setClientLinkedOnVersion:(id)arg1 ;
-(void)_remote_enablePolicyEngine;
-(void)_remote_forwardDeviceOrientation:(int)arg1 statusBarOrientation:(int)arg2 ;
-(void)_remote_determineAppInstallAttributionWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_remote_willResignActive;
-(void)_remote_didBecomeActive;
-(void)_remote_createProxyForAdSpace:(id)arg1 configuration:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)_remote_disablePolicyEngine;
-(void)_remote_setVisuallyEngaged:(BOOL)arg1 ;
-(void)_remote_songBegan:(id)arg1 bannerIdentifiers:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)_remote_songStopped;
-(void)_remote_songSkipped;
-(void)_remote_setStationData:(id)arg1 bannerIdentifiers:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)_remote_setSponsoredStationIDs:(id)arg1 ;
-(void)_remote_optimalTransmissionWindowDidOpen;
-(void)_remote_reportListeningPresenceEvent:(int)arg1 ;
-(void)_remote_reportStationTileImpression:(id)arg1 ;
-(void)_remote_reportClientEvent:(id)arg1 ;
-(void)_remote_acquireMatchSlotWithBodyParameters:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_priv_removeRecordForAccountWithIdentifier:(id)arg1 ;
-(id)serverURL;
-(double)connectTime;
-(id)clientState;
-(void)setClientState:(id)arg1 ;
-(void)_didReceiveMemoryWarning;
-(id)requestProperties;
@end

