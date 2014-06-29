/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:00:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/scrod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/SCROBrailleDisplay.h>

@class NSMutableDictionary;

@interface MSCRODBluetoothBrailleDisplay : SCROBrailleDisplay {

	NSMutableDictionary* _bluetoothConnectedDevices;
	BOOL _isReconnectionEnabled;
	BOOL _isDriverLoading;
	BOOL _isDriverDisconnected;

}
+(id)displayWithIOElement:(id)arg1 cachedInfo:(id)arg2 delegate:(id)arg3 reconnectionEnabled:(BOOL)arg4 ;
+(id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 modelIdentifier:(id)arg3 mainSize:(id)arg4 statusSize:(id)arg5 delegate:(id)arg6 reconnectionEnabled:(BOOL)arg7 ;
+(id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 reconnectionEnabled:(BOOL)arg4 ;
+(id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)resetReconnectionTimer;
-(id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 modelIdentifier:(id)arg3 ioElement:(id)arg4 mainSize:(int)arg5 statusSize:(int)arg6 delegate:(id)arg7 reconnectionEnabled:(BOOL)arg8 ;
-(void)_stopWatchingForDevices;
-(void)_startWatchingForDevices;
-(void)_setupDriverSupport;
-(void)deviceUpdatedNotification:(id)arg1 ;
-(void)_delayedAddDeviceNotification:(id)arg1 ;
-(void)_reloadDriver;
-(void)_delayedRemoveDeviceNotification:(id)arg1 ;
-(void)_delayedDeviceUpdatedNotification:(id)arg1 ;
-(void)addDeviceNotification:(id)arg1 ;
-(void)removeDeviceNotification:(id)arg1 ;
-(void)invalidate;
-(id)configuration;
-(void)_runThread;
-(id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4 ;
-(void)_delayedDisplayLoad;
-(void)_unloadHandler;
@end

