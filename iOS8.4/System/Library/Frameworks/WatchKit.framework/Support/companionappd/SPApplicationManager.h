/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NPSDomainAccessor, NSMutableDictionary, NSObject, NSDictionary;

@interface SPApplicationManager : NSObject {

	BOOL _newGizmo;
	BOOL _domainVerified;
	BOOL _appsCacheValid;
	BOOL _glancesCacheValid;
	BOOL _appsWithNotificationsCacheValid;
	long long _installationMode;
	NSString* _currentXcodeControlledPlugin;
	NPSDomainAccessor* _watchKitAppsDomain;
	NSMutableDictionary* _continuouslyDiscoveredPlugins;
	/*^block*/id _pluginsFoundBlock;
	NSObject*<OS_dispatch_queue> _pkPluginManagementQueue;
	NSObject*<OS_dispatch_queue> _pkPluginCompletionQueue;
	NSObject*<OS_dispatch_queue> _appInstallationQueue;
	NSObject*<OS_dispatch_queue> _pkPluginBeginUsingTimerQueue;
	NSMutableDictionary* _pkPluginBeginUsingTimers;
	id _wkContinuousDiscoveryToken;
	id _domainUpdateLock;
	unsigned long long _userVolumeBlockSize;
	NSDictionary* _appsCache;
	NSDictionary* _glancesCache;
	NSDictionary* _appsWithNotificationsCache;
	NSDictionary* _gizmoDomainCache;

}

@property (assign) long long installationMode;                                                       //@synthesize installationMode=_installationMode - In the implementation block
@property (copy) NSString * currentXcodeControlledPlugin;                                            //@synthesize currentXcodeControlledPlugin=_currentXcodeControlledPlugin - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * watchKitAppsDomain;                                 //@synthesize watchKitAppsDomain=_watchKitAppsDomain - In the implementation block
@property (assign) BOOL newGizmo;                                                                    //@synthesize newGizmo=_newGizmo - In the implementation block
@property (assign) BOOL domainVerified;                                                              //@synthesize domainVerified=_domainVerified - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * continuouslyDiscoveredPlugins;                    //@synthesize continuouslyDiscoveredPlugins=_continuouslyDiscoveredPlugins - In the implementation block
@property (nonatomic,copy) id pluginsFoundBlock;                                                     //@synthesize pluginsFoundBlock=_pluginsFoundBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pkPluginManagementQueue;                   //@synthesize pkPluginManagementQueue=_pkPluginManagementQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pkPluginCompletionQueue;                   //@synthesize pkPluginCompletionQueue=_pkPluginCompletionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> appInstallationQueue;                      //@synthesize appInstallationQueue=_appInstallationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pkPluginBeginUsingTimerQueue;              //@synthesize pkPluginBeginUsingTimerQueue=_pkPluginBeginUsingTimerQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pkPluginBeginUsingTimers;                         //@synthesize pkPluginBeginUsingTimers=_pkPluginBeginUsingTimers - In the implementation block
@property (nonatomic,retain) id wkContinuousDiscoveryToken;                                          //@synthesize wkContinuousDiscoveryToken=_wkContinuousDiscoveryToken - In the implementation block
@property (nonatomic,retain) id domainUpdateLock;                                                    //@synthesize domainUpdateLock=_domainUpdateLock - In the implementation block
@property (assign,nonatomic) unsigned long long userVolumeBlockSize;                                 //@synthesize userVolumeBlockSize=_userVolumeBlockSize - In the implementation block
@property (assign) BOOL appsCacheValid;                                                              //@synthesize appsCacheValid=_appsCacheValid - In the implementation block
@property (assign) BOOL glancesCacheValid;                                                           //@synthesize glancesCacheValid=_glancesCacheValid - In the implementation block
@property (assign) BOOL appsWithNotificationsCacheValid;                                             //@synthesize appsWithNotificationsCacheValid=_appsWithNotificationsCacheValid - In the implementation block
@property (nonatomic,retain) NSDictionary * appsCache;                                               //@synthesize appsCache=_appsCache - In the implementation block
@property (nonatomic,retain) NSDictionary * glancesCache;                                            //@synthesize glancesCache=_glancesCache - In the implementation block
@property (nonatomic,retain) NSDictionary * appsWithNotificationsCache;                              //@synthesize appsWithNotificationsCache=_appsWithNotificationsCache - In the implementation block
@property (nonatomic,retain) NSDictionary * gizmoDomainCache;                                        //@synthesize gizmoDomainCache=_gizmoDomainCache - In the implementation block
+(id)bundleHash:(id)arg1 ;
+(id)sha1:(id)arg1 ;
+(id)sharedInstance;
-(id)gizmoAppBundleUrlWithPluginUrl:(id)arg1 ;
-(BOOL)isNewGizmo;
-(void)handleInstallWatchKitAppsNotification;
-(void)readSetupSettings;
-(id)pluginIdentifierForProtocolIdentifier:(id)arg1 ;
-(void)markPluginWithIdentifierNeedsBeginUsing:(id)arg1 ;
-(void)getOrBeginActivePlugInForApplication:(id)arg1 setupBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)getInstalledApplications;
-(void)updateInstallStatusForApplicationWithIdentifier:(id)arg1 status:(id)arg2 message:(id)arg3 ;
-(void)syncApplications:(id)arg1 ;
-(void)updateCoreDuetSession:(id)arg1 ;
-(void)notifyActiveForPluginWithIdentifier:(id)arg1 ;
-(void)notifyInactiveForPluginWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentXcodeControlledPlugin:(NSString *)arg1 ;
-(void)waitForPreviousPluginToFinishEnding:(id)arg1 toComplete:(/*^block*/id)arg2 ;
-(void)updateGizmoApplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeApplicationInfoEntryWithIdentifier:(id)arg1 ;
-(BOOL)alwaysInstall;
-(void)updateApplicationInfo:(id)arg1 key:(id)arg2 data:(id)arg3 ;
-(void)registerForContinuousPluginDiscovery;
-(void)setContinuouslyDiscoveredPlugins:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pkPluginManagementQueue;
-(NSMutableDictionary *)continuouslyDiscoveredPlugins;
-(void)callEndUsingCompletionsForPluginWithIdentifier:(id)arg1 ;
-(void)setPluginsFoundBlock:(id)arg1 ;
-(id)pluginsFoundBlock;
-(void)setWkContinuousDiscoveryToken:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)pkPluginCompletionQueue;
-(NSString *)currentXcodeControlledPlugin;
-(NSObject*<OS_dispatch_queue>)pkPluginBeginUsingTimerQueue;
-(NSMutableDictionary *)pkPluginBeginUsingTimers;
-(void)beginUsingPlugin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)discoverPlugInForIdentifier:(id)arg1 found:(/*^block*/id)arg2 ;
-(id)gizmoPersistentDomain;
-(void)setGizmoPersistentDomain:(id)arg1 ;
-(id)domainUpdateLock;
-(id)identifierForPluginProxy:(id)arg1 ;
-(id)createGizmoApplicationInfoWithPluginProxy:(id)arg1 ;
-(BOOL)isInstalledByXCode:(id)arg1 ;
-(id)settingsBundlePathForPlugin:(id)arg1 ;
-(BOOL)isGlanceAvailableInGizmoApplication:(id)arg1 ;
-(BOOL)isCustomNotificationAvailableInGizmoApplication:(id)arg1 ;
-(id)showOnWatchForApplicationWithInfo:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)appInstallationQueue;
-(id)identifierForPlugin:(id)arg1 ;
-(BOOL)gizmoApplicationIsInstallCandidate:(id)arg1 applicationInfo:(id)arg2 ;
-(void)discoverAllPlugIns:(/*^block*/id)arg1 ;
-(id)gizmoApplicationInfoWithIdentifier:(id)arg1 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(id)gizmoApplicationIcons:(id)arg1 ;
-(void)pluginUrlWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)bundleTimeStamp:(id)arg1 ;
-(void)updateApplicationInfoWithPluginProxy:(id)arg1 applicationInfo:(id)arg2 ;
-(BOOL)newGizmo;
-(id)gizmoApplicationInfo:(id)arg1 ;
-(id)identifiersForInstalledPlugins;
-(id)localizedApplicationNameForBundle:(id)arg1 ;
-(id)localizedNameForContainerApplication:(id)arg1 ;
-(void)updateGizmoPersistentDomainWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchInstalledAppsWithNotificationWithCompletion:(/*^block*/id)arg1 ;
-(void)showOnWatchApplicationWithIdentifier:(id)arg1 show:(id)arg2 ;
-(id)installStatusForApplicationWithIdentifier:(id)arg1 ;
-(void)applicationInstallationInfoWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applicationInfoWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)gizmoApplicationsWithContainerBundleID:(id)arg1 ;
-(id)gizmoApplicationsWithPluginProxy:(id)arg1 ;
-(id)applicationInfo:(id)arg1 ;
-(long long)installationMode;
-(void)setInstallationMode:(long long)arg1 ;
-(NPSDomainAccessor *)watchKitAppsDomain;
-(void)setWatchKitAppsDomain:(NPSDomainAccessor *)arg1 ;
-(void)setNewGizmo:(BOOL)arg1 ;
-(BOOL)domainVerified;
-(void)setDomainVerified:(BOOL)arg1 ;
-(void)setPkPluginManagementQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPkPluginCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAppInstallationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPkPluginBeginUsingTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPkPluginBeginUsingTimers:(NSMutableDictionary *)arg1 ;
-(id)wkContinuousDiscoveryToken;
-(void)setDomainUpdateLock:(id)arg1 ;
-(void)setUserVolumeBlockSize:(unsigned long long)arg1 ;
-(BOOL)appsCacheValid;
-(void)setAppsCacheValid:(BOOL)arg1 ;
-(BOOL)glancesCacheValid;
-(void)setGlancesCacheValid:(BOOL)arg1 ;
-(BOOL)appsWithNotificationsCacheValid;
-(void)setAppsWithNotificationsCacheValid:(BOOL)arg1 ;
-(NSDictionary *)appsCache;
-(void)setAppsCache:(NSDictionary *)arg1 ;
-(NSDictionary *)glancesCache;
-(void)setGlancesCache:(NSDictionary *)arg1 ;
-(NSDictionary *)appsWithNotificationsCache;
-(void)setAppsWithNotificationsCache:(NSDictionary *)arg1 ;
-(NSDictionary *)gizmoDomainCache;
-(void)setGizmoDomainCache:(NSDictionary *)arg1 ;
-(id)init;
-(void)fetchInstalledGlancesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAlwaysInstall:(id)arg1 ;
-(unsigned long long)userVolumeBlockSize;
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1 ;
@end

