/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WPDeviceScannerDelegate, OS_dispatch_queue;
@class XPCClient, NSMutableArray, NSMutableDictionary, NSObject;

@interface WPDeviceScanner : NSObject <XPCClientDelegate> {

	<WPDeviceScannerDelegate>* _delegate;
	XPCClient* _xpcClient;
	long long _state;
	NSMutableArray* _liveDevices;
	NSMutableDictionary* _activeScans;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (assign) long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * liveDevices;                   //@synthesize liveDevices=_liveDevices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeScans;              //@synthesize activeScans=_activeScans - In the implementation block
@property (retain) NSObject<OS_dispatch_queue> * queue;                      //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void).cxx_destruct;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)connectionInterrupted;
-(void)unregisterAllDeviceChanges;
-(void)timerFinished:(id)arg1 ;
-(id)activeScans;
-(id)liveDevices;
-(void)changeState:(long long)arg1 ;
-(void)postDevice:(id)arg1 ;
-(void)postDevices:(id)arg1 ;
-(void)registerForDevicesMatching:(id)arg1 options:(id)arg2 ;
-(void)unregisterForDevices:(id)arg1 ;
-(void)setLiveDevices:(id)arg1 ;
-(void)setActiveScans:(id)arg1 ;
@end

