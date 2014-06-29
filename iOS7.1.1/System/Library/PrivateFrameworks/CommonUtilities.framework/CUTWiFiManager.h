/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommonUtilities/CommonUtilities-Structs.h>
#import <CommonUtilities/CUTPowerMonitorDelegate.h>

@class NSRecursiveLock, NSMapTable, NSDictionary, NSNumber, NSString;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate> {

	int _linkToken;
	NSRecursiveLock* _lock;
	void* _wifiManager;
	void* _wifiDevice;
	void* _currentNetwork;
	void* _dynamicStore;
	NSMapTable* _delegateMap;
	NSDictionary* _lastWiFiPowerInfo;

}

@property (nonatomic,readonly) bool isWiFiEnabled; 
@property (nonatomic,readonly) bool isWiFiAssociated; 
@property (nonatomic,readonly) bool isHostingWiFiHotSpot; 
@property (nonatomic,readonly) bool isWiFiCaptive; 
@property (nonatomic,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,readonly) NSString * currentSSID; 
@property (nonatomic,retain) NSRecursiveLock * lock;                       //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) void* wifiManager;                            //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) void* wifiDevice;                             //@synthesize wifiDevice=_wifiDevice - In the implementation block
@property (assign,nonatomic) void* currentNetwork;                         //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign,nonatomic) void* dynamicStore;                           //@synthesize dynamicStore=_dynamicStore - In the implementation block
@property (assign,nonatomic) int linkToken;                                //@synthesize linkToken=_linkToken - In the implementation block
@property (nonatomic,retain) NSMapTable * delegateMap;                     //@synthesize delegateMap=_delegateMap - In the implementation block
@property (nonatomic,copy) NSDictionary * lastWiFiPowerInfo;               //@synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)lock;
-(void*)currentNetwork;
-(void)setLock:(id)arg1 ;
-(bool)isWiFiEnabled;
-(void)_createDynamicStore;
-(id)_ssidFromNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/ id)arg1 withDevice:(WiFiDeviceClientRef)arg2 async:(bool)arg3 ;
-(void)_handlePotentialDeviceChange:(WiFiDeviceClientRef)arg1 ;
-(void)_performDeviceBlock:(/*^block*/ id)arg1 useCache:(bool)arg2 ;
-(void)_performDeviceBlock:(/*^block*/ id)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/ id)arg1 withDevice:(WiFiDeviceClientRef)arg2 ;
-(void)currentWiFiNetworkPowerUsageWithCompletion:(/*^block*/ id)arg1 ;
-(double)_wifiMeasurementErrorForInterval:(double)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/ id)arg1 ;
-(bool)_isPrimaryCellular;
-(void)_handleDeviceAttachedCallback;
-(void)_setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performPowerReading;
-(id)currentSSID;
-(void)setCurrentNetwork:(void*)arg1 ;
-(void*)dynamicStore;
-(void)setDynamicStore:(void*)arg1 ;
-(int)linkToken;
-(void)setLinkToken:(int)arg1 ;
-(id)delegateMap;
-(void)setDelegateMap:(id)arg1 ;
-(id)lastWiFiPowerInfo;
-(void)setLastWiFiPowerInfo:(id)arg1 ;
-(bool)isWiFiAssociated;
-(void)_createWiFiManager;
-(bool)isHostingWiFiHotSpot;
-(bool)willTryToAutoAssociateWiFiNetwork;
-(bool)willTryToSearchForWiFiNetwork;
-(id)wiFiSignalStrength;
-(id)wiFiScaledRSSI;
-(id)wiFiScaledRate;
-(bool)isWiFiCaptive;
-(void*)wifiManager;
-(void)setWifiManager:(void*)arg1 ;
-(void*)wifiDevice;
-(void)setWifiDevice:(void*)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
@end

