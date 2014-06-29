/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/CBPeripheralManagerDelegate.h>

@class CBMutableService;

@interface ServerService : NSObject <CBPeripheralManagerDelegate> {

	CBMutableService* _service;

}

@property (nonatomic,readonly) CBMutableService * service;              //@synthesize service=_service - In the implementation block
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3 ;
-(void)respondToRequest:(id)arg1 withResult:(int)arg2 ;
-(void)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3 ;
-(id)service;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
@end

