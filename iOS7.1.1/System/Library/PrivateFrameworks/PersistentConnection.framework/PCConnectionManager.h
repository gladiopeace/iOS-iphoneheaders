/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <PersistentConnection/PCLoggingDelegate.h>
#import <PersistentConnection/PCInterfaceMonitorDelegate.h>

@protocol PCConnectionManagerDelegate, PCGrowthAlgorithm;
@class NSString, NSRunLoop, PCDarwinNotificationRunLoopSource, PCPersistentTimer;

@interface PCConnectionManager : NSObject <PCLoggingDelegate, PCInterfaceMonitorDelegate> {

	int _connectionClass;
	<PCConnectionManagerDelegate>* _delegate;
	NSString* _serviceIdentifier;
	int _prefsStyle;
	int _onlyAllowedStyle;
	bool _onlyAllowedStyleSet;
	long long _interfaceIdentifier;
	unsigned long long _guidancePriority;
	NSRunLoop* _delegateRunLoop;
	dispatch_queue_sRef _delegateQueue;
	<PCGrowthAlgorithm>* _wwanGrowthAlgorithm;
	<PCGrowthAlgorithm>* _wifiGrowthAlgorithm;
	<PCGrowthAlgorithm>* _lastScheduledGrowthAlgorithm;
	PCDarwinNotificationRunLoopSource* _prefsChangedSource;
	PCPersistentTimer* _intervalTimer;
	PCPersistentTimer* _reconnectWakeTimer;
	PCPersistentTimer* _delayTimer;
	unsigned _powerAssertionID;
	double _onTimeKeepAliveTime;
	double _lastResumeTime;
	double _lastStopTime;
	double _lastReachableTime;
	double _lastReconnectTime;
	double _lastScheduledIntervalTime;
	double _timerGuidance;
	double _keepAliveGracePeriod;
	unsigned _reconnectIteration;
	int _timerGuidanceToken;
	int _pushIsConnectedToken;
	double _defaultPollingInterval;
	double _pollingIntervalOverride;
	bool _pollingIntervalOverrideSet;
	bool _hasStarted;
	bool _isRunning;
	bool _inCallback;
	bool _isInReconnectMode;
	bool _reconnectWithKeepAliveDelay;
	bool _forceManualWhenRoaming;
	bool _enableNonCellularConnections;
	bool _isReachable;
	bool _disableEarlyFire;

}

@property (assign,nonatomic) <PCConnectionManagerDelegate> * delegate; 
@property (nonatomic,readonly) bool isRunning; 
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign) double maximumKeepAliveInterval; 
@property (nonatomic,readonly) unsigned long long countOfGrowthActions; 
@property (assign,nonatomic) bool disableEarlyFire; 
@property (assign,nonatomic) double keepAliveGracePeriod;                            //@synthesize keepAliveGracePeriod=_keepAliveGracePeriod - In the implementation block
@property (nonatomic,readonly) double pollingInterval; 
@property (nonatomic,readonly) NSString * loggingIdentifier;                         //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(Class)growthAlgorithmClass;
+(id)_keepAliveCachePath;
+(id)intervalCacheDictionaries;
+(bool)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2 ;
-(void)log:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)currentStyle;
-(bool)isRunning;
-(void)setOnlyAllowedStyle:(int)arg1 ;
-(void)startManager;
-(void)setPollingIntervalOverride:(double)arg1 ;
-(id)_stringForStyle:(int)arg1 ;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(dispatch_queue_sRef)arg3 serviceIdentifier:(id)arg4 ;
-(bool)disableEarlyFire;
-(void)setKeepAliveGracePeriod:(double)arg1 ;
-(void)setMinimumKeepAliveInterval:(double)arg1 ;
-(void)setMaximumKeepAliveInterval:(double)arg1 ;
-(void)stopManager;
-(bool)shouldClientScheduleReconnectDueToFailure;
-(void)resumeManagerWithAction:(int)arg1 ;
-(double)currentKeepAliveInterval;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(void)interfaceManagerInHomeCountryStatusChanged:(id)arg1 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(double)minimumKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(id)_stringForAction:(int)arg1 ;
-(unsigned long long)countOfGrowthActions;
-(id)loggingIdentifier;
-(id)_getCachedWWANKeepAliveInterval;
-(void)_setTimerGuidance:(double)arg1 ;
-(void)_preferencesChanged;
-(void)_loadPreferencesGeneratingEvent:(bool)arg1 ;
-(id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(dispatch_queue_sRef)arg5 serviceIdentifier:(id)arg6 ;
-(id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5 ;
-(void)_clearTimers;
-(void)_adjustInterfaceAssertions;
-(void)_calloutWithEvent:(int)arg1 ;
-(double)pollingInterval;
-(void)_validateActionForCurrentStyle:(int)arg1 ;
-(void)_resolveStateWithAction:(int)arg1 ;
-(id)_currentGrowthAlgorithm;
-(void)_setupTimerForPushWithKeepAliveInterval:(double)arg1 ;
-(void)_saveWWANKeepAliveInterval;
-(void)_setupTimerForPollForAdjustment:(bool)arg1 ;
-(void)_setupKeepAliveForReconnect;
-(bool)_isPushConnected;
-(void)_intervalTimerFired;
-(void)_takePowerAssertionWithTimeout:(double)arg1 ;
-(void)_delayTimerFired;
-(void)_clearTimersReleasingPowerAssertion:(bool)arg1 ;
-(void)_releasePowerAssertion;
-(id)_stringForEvent:(int)arg1 ;
-(void)_callDelegateWithEvent:(id)arg1 ;
-(void)_adjustPollTimerIfNecessary;
-(void)logAtLevel:(int)arg1 format:(id)arg2 arguments:(char*)arg3 ;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3 ;
-(void)stopAndResetManager;
-(void)cancelPollingIntervalOverride;
-(void)setEnableNonCellularConnections:(bool)arg1 ;
-(void)setDisableEarlyFire:(bool)arg1 ;
-(void)logAtLevel:(int)arg1 format:(id)arg2 ;
-(double)keepAliveGracePeriod;
@end

