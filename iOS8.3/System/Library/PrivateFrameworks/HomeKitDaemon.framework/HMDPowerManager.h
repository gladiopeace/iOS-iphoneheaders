/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:01:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
@class NSObject;

@interface HMDPowerManager : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _ethernetActive;
	char _networkAccessRequired;
	unsigned _powerAssertion;
	SCDynamicStoreRef _scStore;
	void* _scContext;
	char _started;

}

@property (assign,getter=isNetworkAccessRequired,nonatomic) char networkAccessRequired;              //@synthesize networkAccessRequired=_networkAccessRequired - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)_update;
-(void)start;
-(long)_ensureNetworkInterfaceMonitorStarted;
-(void)_ensureNetworkInterfaceMonitorStopped;
-(void)setNetworkAccessRequired:(char)arg1 ;
-(char)isNetworkAccessRequired;
@end

