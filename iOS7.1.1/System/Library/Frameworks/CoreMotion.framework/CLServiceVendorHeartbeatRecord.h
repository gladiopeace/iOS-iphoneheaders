/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLIntersiloServiceProtocol;
@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject {

	int _synCount;
	int _ackCount;
	CLSilo* _silo;
	<CLIntersiloServiceProtocol>* _service;

}

@property (nonatomic,readonly) CLSilo * silo;                                       //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) <CLIntersiloServiceProtocol> * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) int synCount;                                        //@synthesize synCount=_synCount - In the implementation block
@property (nonatomic,readonly) int ackCount;                                        //@synthesize ackCount=_ackCount - In the implementation block
-(id)silo;
-(id)initTrackingService:(id)arg1 ;
-(void)syn;
-(void)ack;
-(id)service;
-(int)synCount;
-(int)ackCount;
-(void).cxx_destruct;
@end

