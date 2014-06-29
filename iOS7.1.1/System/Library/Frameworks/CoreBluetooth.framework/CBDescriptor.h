/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBCharacteristic, CBUUID, CBPeripheral, NSNumber;

@interface CBDescriptor : NSObject {

	CBCharacteristic* _characteristic;
	CBUUID* _UUID;
	id _value;
	CBPeripheral* _peripheral;
	NSNumber* _handle;

}

@property (assign,nonatomic,__weak) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) CBUUID * UUID;                                       //@synthesize UUID=_UUID - In the implementation block
@property (retain) id value;                                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                           //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                                   //@synthesize handle=_handle - In the implementation block
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(id)peripheral;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(void)setCharacteristic:(id)arg1 ;
-(id)characteristic;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)UUID;
-(id)handle;
@end

