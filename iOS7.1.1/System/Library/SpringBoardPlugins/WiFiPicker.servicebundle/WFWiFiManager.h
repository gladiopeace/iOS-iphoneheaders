/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WiFiPicker/WiFiPicker-Structs.h>
#import <SpringBoardUI/SBPluginBundleController.h>

@protocol SBUIUserAgent;
@class NSRecursiveLock, WFWiFiAlertItem, NSDictionary;

@interface WFWiFiManager : NSObject <SBPluginBundleController> {

	NSRecursiveLock* _lock;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	CFRunLoopRef _callbackRunLoop;
	int _rssiThreshold;
	bool _joining;
	bool _bluetoothTethered;
	bool _delayedForBTScan;
	WFWiFiAlertItem* _alertItem;
	NSDictionary* _lastWifiScanDictionary;
	unsigned _notificationID;
	<SBUIUserAgent>* _sbUserAgent;

}

@property (assign,nonatomic) WFWiFiAlertItem * currentAlertItem;              //@synthesize alertItem=_alertItem - In the implementation block
+(id)sharedInstance;
+(void)awakeFromBundle;
-(bool)_shouldShowPicker;
-(void)_runManagerCallbackThread;
-(void)_bluetoothConnectionChanged:(id)arg1 ;
-(void)_askToJoinWithID:(unsigned)arg1 ;
-(void)_wifiScanComplete:(CFArrayRef)arg1 ;
-(void)_joinComplete:(int)arg1 network:(WiFiNetworkRef)arg2 ;
-(void)_appDeactivated:(id)arg1 ;
-(void)_appFlagsChanged:(id)arg1 ;
-(id)lastWifiScanDictionary;
-(void)_lockButtonPressed:(id)arg1 ;
-(void)acceptTrust:(id)arg1 ;
-(void)setLastWifiScanDictionary:(id)arg1 ;
-(void)_appLaunched:(id)arg1 ;
-(bool)isAskToJoinEnabled;
-(bool)joining;
-(WiFiManagerClientRef)_managerLocked;
-(void)_bluetoothScanComplete:(id)arg1 ;
-(void)_scanFailed;
-(void)userChoseNetwork:(id)arg1 ;
-(void)joinNetwork:(id)arg1 password:(id)arg2 ;
-(void)setCurrentAlertItem:(id)arg1 ;
-(void)scan;
-(void)cancelTrust:(bool)arg1 ;
-(void)_trustCallbackWithID:(unsigned)arg1 type:(int)arg2 network:(WiFiNetworkRef)arg3 data:(id)arg4 ;
-(id)currentAlertItem;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(void)cancelPicker:(bool)arg1 ;
-(id)init;
-(id)knownNetworks;
-(void)dismissAlerts;
@end

