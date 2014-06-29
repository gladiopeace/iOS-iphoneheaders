/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:23:13 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/Support/touchsetupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <touchsetupd/TRDeviceSetupBrowserDelegate.h>
#import <touchsetupd/TRDeviceSetupPeripheralDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableSet, NSObject, TRDeviceSetupBrowser;

@interface DeviceSetupBrowser : NSObject <TRDeviceSetupBrowserDelegate, TRDeviceSetupPeripheralDelegate> {

	BOOL _buddySetupDone;
	int _buddySetupDoneToken;
	BOOL _buddySetupDoneTokenIsValid;
	NSMutableSet* _discoveredPeripherals;
	double _lastTapTimeInterval;
	BOOL _scanning;
	NSObject<OS_dispatch_source>* _scanningDurationTimer;
	TRDeviceSetupBrowser* _setupBrowser;
	NSObject<OS_dispatch_source>* _setupTimeoutTimer;
	BOOL _setupInProgress;
	double _scanningStartTimeInterval;

}
+(id)sharedSetupBrowser;
-(void)endScan;
-(void)_beginActualScan;
-(void)_endScanIfNecessary;
-(void)_startSetupTimeoutTimer;
-(void)_endActualScan;
-(void)_resetScanningDurationTimer;
-(void)_cancelScanningDurationTimer;
-(void)deviceSetupBrowser:(id)arg1 didRemovePeripheral:(id)arg2 ;
-(void)beginScan;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)deviceSetupBrowserDidChangeState:(id)arg1 ;
-(void)deviceSetupBrowser:(id)arg1 didFindPeripheral:(id)arg2 ;
-(void)deviceSetupPeripheralDidTap:(id)arg1 ;
-(void)deviceSetupPeripheralSetupDidComplete:(id)arg1 ;
-(void)deviceSetupPeripheralSetupDidFail:(id)arg1 withError:(id)arg2 ;
@end

