/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBService, CBUUID, NSData, NSArray, CBPeripheral, NSNumber;

@interface CBCharacteristic : NSObject {

	CBService* _service;
	CBUUID* _UUID;
	unsigned long long _properties;
	NSData* _value;
	NSArray* _descriptors;
	bool _isBroadcasted;
	bool _isNotifying;
	CBPeripheral* _peripheral;
	NSNumber* _handle;
	NSNumber* _valueHandle;

}

@property (assign,nonatomic,__weak) CBService * service;                   //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) CBUUID * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) unsigned long long properties;              //@synthesize properties=_properties - In the implementation block
@property (retain) NSData * value;                                         //@synthesize value=_value - In the implementation block
@property (retain) NSArray * descriptors;                                  //@synthesize descriptors=_descriptors - In the implementation block
@property (readonly) bool isBroadcasted;                                   //@synthesize isBroadcasted=_isBroadcasted - In the implementation block
@property (assign) bool isNotifying;                                       //@synthesize isNotifying=_isNotifying - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                  //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                          //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSNumber * valueHandle;                     //@synthesize valueHandle=_valueHandle - In the implementation block
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(void)setIsNotifying:(bool)arg1 ;
-(id)valueHandle;
-(id)peripheral;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(id)handleValueBroadcasted:(id)arg1 ;
-(id)handleValueNotifying:(id)arg1 ;
-(id)handleDescriptorsDiscovered:(id)arg1 ;
-(bool)isBroadcasted;
-(bool)isNotifying;
-(id)service;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)UUID;
-(unsigned long long)properties;
-(id)descriptors;
-(void)setDescriptors:(id)arg1 ;
-(id)handle;
-(void)setService:(id)arg1 ;
@end

