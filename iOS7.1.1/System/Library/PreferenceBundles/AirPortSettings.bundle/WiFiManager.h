/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AirPortSettings/AirPortSettings-Structs.h>
@class NSString, NSArray, WiFiNetwork, NSDictionary, NSMutableDictionary, NSMutableArray, NSSet, NSMutableSet;

@interface WiFiManager : NSObject {

	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	SCDynamicStoreRef _store;
	SCPreferencesRef _prefs;
	NSString* _interfaceName;
	NSArray* _dynamicStoreKeys;
	NSString* _ipv4StateKey;
	NSString* _ipv6StateKey;
	WiFiNetwork* _current;
	WiFiNetworkRef _currentWiFiNetworkRef;
	NSDictionary* _currentNetworkScanDict;
	NSMutableDictionary* _configurationDict;
	NSMutableDictionary* _networks;
	NSMutableArray* _favorites;
	NSMutableArray* _favoritesArray;
	NSMutableDictionary* _customSettings;
	NSSet* _managedNetworkNames;
	NSMutableSet* _networksInCurrentScan;
	NSMutableArray* _hiddenFavoritesQueue;
	bool _isConnected;
	bool _enabled;
	int _autojoin;
	bool _associating;
	bool _joiningEnterprise;
	bool _isDirty;
	bool _shouldScan;
	bool _initialPowerOnScan;
	bool _haveValidIPv4Address;
	NSMutableArray* _scanList;
	int _rssiThreshold;
	int _scanningMode;
	WiFiNetwork* _joinNetwork;
	WiFiNetwork* _scanForHiddenNetwork;
	WiFiNetwork* _deferredJoin;
	unsigned _consecutiveScanFailures;
	unsigned _enterpriseAssociationAttempts;
	bool _settingScanResults;
	int _supportsWAPI;
	bool _globalProxyEnabled;
	bool _hs20Supported;
	bool _hs20ProfilesInstalled;
	NSMutableDictionary* _hs20LabelDict;
	NSMutableDictionary* _captivePlugInDict;
	bool _networkSyncingEnabled;
	bool _waitingForCircleStatusCheck;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)_setScanResults:(id)arg1 ;
-(void)_initDynamicStoreMonitor;
-(void)_getCurrentNetworkInfo;
-(void)_copyAutojoinPropertiesToNetwork:(id)arg1 ;
-(id)_scanListForChannels:(id)arg1 ;
-(id)_scanListForNetworks:(id)arg1 ;
-(id)_scanDictForChannels:(id)arg1 andNetworks:(id)arg2 ;
-(void)_addNetworkForDictionary:(id)arg1 ;
-(void)_associationAttemptFinishedWithError:(id)arg1 onNetwork:(WiFiNetworkRef)arg2 ;
-(bool)_forgetWiFiNetwork:(id)arg1 ;
-(bool)_forgetNetworkWithSSID:(id)arg1 ;
-(void)_setupNewSetForNetwork:(id)arg1 ;
-(void)_storeCustomSettingsForNetwork:(id)arg1 ;
-(void)_applySetForCurrentNetwork;
-(id)_loadCustomSettingsForNetwork:(id)arg1 ;
-(id)_interfaceName;
-(void)_loadFavorites;
-(void)_postEnterpriseNotification:(id)arg1 ;
-(void)_checkIsCurrentNetwork:(id)arg1 ;
-(void)_updateAutojoinInformation;
-(void)_loadCustomSettings;
-(void)_updateHiddenFavoritesQueue;
-(void)_checkCloudNetworkSyncStatus;
-(void)_logScanResults:(id)arg1 ;
-(void)_checkForGasQueries;
-(void)_refreshHs20LabeledNetworks:(id)arg1 ;
-(void)_scanCompletedWithResults:(id)arg1 ;
-(id)_networkFromDictionary:(id)arg1 ;
-(void)_dynamicStoreChanged:(id)arg1 ;
-(void)_deleteSetForNetworkWithSSID:(id)arg1 ;
-(SCNetworkSetRef)_createNewSetForNetwork:(id)arg1 ;
-(SCNetworkSetRef)_defaultSetRetained;
-(SCNetworkSetRef)_setForNetwork:(id)arg1 ;
-(void)_applyCustomProxySettings:(id)arg1 forService:(SCNetworkServiceRef)arg2 ;
-(void)_resetDynamicStoreMonitor;
-(void)_delayedPerformSelector:(id)arg1 ;
-(id)_currentNetwork;
-(id)_arrayFromCommaSeparatedString:(id)arg1 ;
-(void)_enterpriseAssociationResult:(id)arg1 withInfo:(id)arg2 ;
-(void)_scanFailedWithError:(id)arg1 ;
-(void)_gasQueryCompletedWithResults:(id)arg1 ;
-(void)_setIPv4StateKey:(id)arg1 ;
-(void)_linkChangedWithDict:(id)arg1 ;
-(void)_linkChanged;
-(void)_powerChanged;
-(void)_deleteSetForNetwork:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 ;
-(void)_delayedPerformSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 ;
-(void)_load;
-(SCDynamicStoreRef)store;
-(void)dealloc;
-(id)init;
-(bool)setEnabled:(bool)arg1 ;
-(bool)enabled;
-(bool)wifiIsTethering;
-(id)currentNetwork:(bool)arg1 ;
-(id)currentCachedNetwork;
-(bool)canSupportWAPI;
-(void)forgetNetwork:(id)arg1 ;
-(bool)isNetworkCloudSynced:(id)arg1 ;
-(void)renewLease;
-(void)loadCustomSettingsForNetwork:(id)arg1 ;
-(bool)canForgetNetwork:(id)arg1 ;
-(bool)canSetAutoJoin:(id)arg1 ;
-(bool)canSetAutoLogin:(id)arg1 ;
-(bool)globalProxyEnabled;
-(void)saveCustomSettingsForNetwork:(id)arg1 ;
-(void)setAutoJoin:(bool)arg1 forNetwork:(id)arg2 ;
-(bool)networkEnabled:(id)arg1 ;
-(void)setAutoLogin:(bool)arg1 forNetwork:(id)arg2 ;
-(bool)autoLogin:(id)arg1 ;
-(void)loadConfiguration;
-(id)knownNetworks;
-(void)disablePersonalHotspot;
-(bool)personalHotspotHasClients;
-(id)availableNetworks;
-(int)autojoinMode;
-(void)setAutojoinMode:(int)arg1 ;
-(void)beginCaptivePlugInScan;
-(void)endCaptivePlugInScan;
-(void)removeNetworkNamed:(id)arg1 ;
-(void)setShouldScan:(bool)arg1 ;
-(bool)scanForNetwork:(id)arg1 ;
-(void)cancelEnterpriseTrust:(id)arg1 forUser:(bool)arg2 ;
-(void)cleanupNetworks;
-(void)joinNetwork:(id)arg1 isHidden:(bool)arg2 ;
-(void)joinNetwork:(id)arg1 ;
-(void)attemptEnterpriseAssociation;
-(void)acceptEnterpriseTrust:(id)arg1 ;
-(void)cancelEnterpriseAssociation;
-(void)relayCircleStatusCheck:(id)arg1 ;
-(id)findEqualKnownWiFiNetworks:(id)arg1 ;
-(void)_cancelEnterpriseAssociation;
-(bool)_scanForHiddenNetwork:(id)arg1 ;
-(void)setWiFiTetheringOff;
-(SCPreferencesRef)getSCRef;
-(bool)isCaptive:(id)arg1 ;
-(bool)isPreferredAdhocNetwork:(id)arg1 ;
-(id)findEqualKnownNetworks:(WiFiNetworkRef)arg1 ;
-(bool)haveValidIPv6;
-(id)labelForNetwork:(id)arg1 ;
-(bool)scanning;
-(id)currentNetworkInfo;
-(id)currentNetworkStrength;
-(void)asyncCircleStatusCheck:(id)arg1 ;
-(void)disconnectFromCurrentNetwork;
-(void)forgetNetworkName:(id)arg1 ;
-(void)movedKnownNetworkAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)findMatchingSSIDKnownNetworks:(id)arg1 ;
-(bool)haveValidIP;
-(bool)haveValidIPv4OrIPv6AddressForNetwork:(id)arg1 ;
-(bool)isAssociatingToNetwork:(id)arg1 ;
-(bool)isAssociating;
-(bool)deviceSupportsHS20;
-(void)releaseResources:(bool)arg1 ;
-(bool)connected;
@end

