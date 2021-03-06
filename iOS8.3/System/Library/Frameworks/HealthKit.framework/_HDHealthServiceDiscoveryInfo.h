/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableSet, CBUUID, NSObject;

@interface _HDHealthServiceDiscoveryInfo : NSObject {

	NSMutableSet* _peripheralsUUIDs;
	unsigned _discoveryIdentifier;
	/*^block*/id _discoveryHandler;
	CBUUID* _serviceUUID;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (assign,nonatomic) unsigned discoveryIdentifier;                            //@synthesize discoveryIdentifier=_discoveryIdentifier - In the implementation block
@property (nonatomic,readonly) id discoveryHandler;                                   //@synthesize discoveryHandler=_discoveryHandler - In the implementation block
@property (nonatomic,readonly) CBUUID * serviceUUID;                                  //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(id)initWithHandler:(/*^block*/id)arg1 serviceUUID:(id)arg2 ;
-(char)_addPeripheralUUID:(id)arg1 ;
-(id)discoveryHandler;
-(void)setDiscoveryIdentifier:(unsigned)arg1 ;
-(unsigned)discoveryIdentifier;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(CBUUID *)serviceUUID;
@end

