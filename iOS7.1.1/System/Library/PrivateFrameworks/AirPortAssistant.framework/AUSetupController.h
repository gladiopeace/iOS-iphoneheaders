/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantCallbackController.h>
#import <AirPortAssistant/SetupUIConfigDelegateResult.h>
#import <AirPortAssistant/AutoGuessSetup.h>
#import <AirPortAssistant/BaseStationSetup.h>

@class NSDictionary, NSMutableSet, NSString, NSDate;

@interface AUSetupController : AssistantCallbackController <SetupUIConfigDelegateResult, AutoGuessSetup, BaseStationSetup> {

	id _context;
	bool _autoJoinState;
	bool _scanningState;
	bool _busy;
	bool _initializedBasePasswordFlag;
	bool _performingManualRead;
	bool _needToNilBonjour;
	BSConfigurationContextRef _configContext;
	NSMutableSet* _setupDelegates;
	id _uiConfigDelegate;
	NSString* _autoGuessSetupRecommendation;
	NSDictionary* _lastInstrumentation;
	bool _rememberDiskPassword;
	NSDate* _lastHeardFromDevice;
	NSString* _lastSystemName;
	NSString* _lastDNSName;
	NSString* _keychainBasePassword;
	NSString* _keychainWiFiPassword;
	NSString* _keychainDiskPassword;
	bool _activeTask;

}

@property (nonatomic,readonly) NSMutableSet * setupDelegates;                         //@synthesize setupDelegates=_setupDelegates - In the implementation block
@property (assign,nonatomic) <SetupUIConfigDelegate> * uiConfigDelegate;              //@synthesize uiConfigDelegate=_uiConfigDelegate - In the implementation block
@property (assign,nonatomic) id context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * autoGuessSetupRecommendation;                 //@synthesize autoGuessSetupRecommendation=_autoGuessSetupRecommendation - In the implementation block
@property (nonatomic,retain) NSDictionary * lastInstrumentation;                      //@synthesize lastInstrumentation=_lastInstrumentation - In the implementation block
@property (nonatomic,retain) NSDictionary * bonjourRecord; 
@property (assign,nonatomic) bool rememberBasePassword; 
@property (assign,nonatomic) bool rememberWiFiPassword; 
@property (assign,nonatomic) bool rememberDiskPassword;                               //@synthesize rememberDiskPassword=_rememberDiskPassword - In the implementation block
@property (nonatomic,@dynamic,retain) NSString * keychainBasePassword; 
@property (nonatomic,@dynamic,retain) NSString * keychainWiFiPassword; 
@property (nonatomic,@dynamic,retain) NSString * keychainDiskPassword; 
@property (nonatomic,readonly) NSDate * lastHeardFromDevice;                          //@synthesize lastHeardFromDevice=_lastHeardFromDevice - In the implementation block
@property (nonatomic,retain) NSString * lastSystemName;                               //@synthesize lastSystemName=_lastSystemName - In the implementation block
@property (nonatomic,retain) NSString * lastDNSName;                                  //@synthesize lastDNSName=_lastDNSName - In the implementation block
@property (assign,nonatomic) bool activeTask;                                         //@synthesize activeTask=_activeTask - In the implementation block
@property (retain) NSDictionary * restoreRecommendation; 
+(void)initialize;
+(id)setupController;
-(void)handleBusyStart;
-(void)setupWiFiState;
-(void)resetWiFiState;
-(bool)performingManualRead;
-(void)handleBusyComplete;
-(void)updateLastHeardFromDevice;
-(void)handleSetupComplete:(int)arg1 ;
-(void)handleTaskComplete;
-(void)logChangesToCCL;
-(id)targetBaseInfoDict;
-(bool)isMonitoring;
-(void)dealloc;
-(id)init;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)lastInstrumentation;
-(void)setLastInstrumentation:(id)arg1 ;
-(int)subclassAssistantCallback:(AssistantCallbackContext*)arg1 ;
-(id)setupDelegates;
-(void)setUiConfigDelegate:(id)arg1 ;
-(int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2 ;
-(int)updateSettingsAsync;
-(int)cancelSetup;
-(void)setupUIConfigResult:(int)arg1 withOptions:(id)arg2 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(int)closeAllConnections:(bool)arg1 ;
-(void)setLastDNSName:(id)arg1 ;
-(void)setLastSystemName:(id)arg1 ;
-(void)setAutoGuessSetupRecommendation:(id)arg1 ;
-(bool)activeTask;
-(id)uiConfigDelegate;
-(int)copyValue:(id*)arg1 forBSSetting:(int)arg2 ;
-(int)copyValue:(id*)arg1 forSettingPath:(id)arg2 ;
-(int)stateForProblem:(unsigned)arg1 ;
-(bool)rememberBasePassword;
-(void)setRememberBasePassword:(bool)arg1 ;
-(bool)rememberWiFiPassword;
-(void)setRememberWiFiPassword:(bool)arg1 ;
-(bool)rememberDiskPassword;
-(void)setRememberDiskPassword:(bool)arg1 ;
-(int)readPropertyListFromBaseAsync:(id)arg1 ;
-(BaseStationRef)bsRef;
-(int)getValue:(id*)arg1 forBSSetting:(int)arg2 ;
-(id)bonjourRecord;
-(void)updateRememberKeychainFlagsButSkipBasePassword:(bool)arg1 ;
-(void)loadKeychainBasePassword;
-(void)loadKeychainWirelessPassword;
-(void)deleteKeychainBasePassword;
-(int)updateKeychainWithPasswords;
-(void)saveKeychainBasePassword;
-(void)setKeychainBasePassword:(id)arg1 ;
-(id)bestKeychainMACAddress;
-(id)keychainBasePassword;
-(int)getValue:(id*)arg1 forSettingPath:(id)arg2 ;
-(void)setKeychainWiFiPassword:(id)arg1 ;
-(int)taskState;
-(void)setActiveTask:(bool)arg1 ;
-(int)setupWithTargetNetwork:(id)arg1 ;
-(int)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2 ;
-(int)cancelTask;
-(int)setValue:(id)arg1 forBSSetting:(int)arg2 ;
-(int)setValue:(id)arg1 forSettingPath:(id)arg2 ;
-(bool)hasACPFeature:(unsigned)arg1 ;
-(long long)unignoredProblemCount;
-(id)validateAllSettingsAndGetErrors;
-(id)validateSettingsAndGetErrors:(id)arg1 ;
-(int)ignoreProblemCode:(unsigned)arg1 ;
-(int)unIgnoreProblemCode:(unsigned)arg1 ;
-(id)keychainWiFiPassword;
-(id)keychainDiskPassword;
-(void)setKeychainDiskPassword:(id)arg1 ;
-(int)joinAsync;
-(int)joinAndBrowseAsync;
-(int)readAllPropertiesFromBaseAsync;
-(id)snapshotChangedKeys;
-(void)snapshotResetAll;
-(bool)snapshotDirty;
-(int)snapshotPush;
-(int)snapshotPop:(bool)arg1 ;
-(id)allKeychainMACAddresses;
-(void)updateRememberKeychainFlagsIfInitializing;
-(int)updateKeychainWithPasswordsWithStatus:(int)arg1 ;
-(void)saveKeychainWirelessPassword;
-(void)deleteKeychainWirelessPassword;
-(int)rpcSystemInterfacesAsync;
-(int)rpcStartRemoteBrowse:(id)arg1 withService:(id)arg2 ;
-(int)rpcRefreshBSSettingAsync:(int)arg1 ;
-(int)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1 ;
-(int)rpcRenewDHCPLeaseAsync;
-(int)rpcWPSStartAsync:(bool)arg1 dayPass:(bool)arg2 timeout:(unsigned)arg3 ;
-(int)rpcWPSStopAsync;
-(int)rpcWPSAllowClientAsync:(id)arg1 ;
-(unsigned)taskCode;
-(int)busyState;
-(int)taskRestartAsync;
-(int)taskRestoreDefaultsAsync:(bool)arg1 ;
-(int)taskUploadFirmwareAsync:(id)arg1 ;
-(int)taskEraseDiskAsync:(id)arg1 ;
-(int)taskArchiveDiskAsync:(id)arg1 ;
-(int)setMonitorForChanges:(bool)arg1 ;
-(id)lastHeardFromDevice;
-(void)setBonjourRecord:(id)arg1 ;
-(bool)dirty;
-(long long)ethernetPortCount;
-(id)autoGuessSetupRecommendation;
-(id)lastSystemName;
-(id)lastDNSName;
-(int)closeAllConnections;
@end

