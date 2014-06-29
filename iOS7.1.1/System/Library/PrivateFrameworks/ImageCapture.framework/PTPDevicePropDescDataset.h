/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableData;

@interface PTPDevicePropDescDataset : NSObject {

	unsigned short _devicePropertyCode;
	unsigned short _dataTypeCode;
	unsigned char _readWriteAttribute;
	id _factoryDefaultValue;
	id _currentValue;
	unsigned char _formFlag;
	id _minimumValue;
	id _maximumValue;
	id _stepSize;
	unsigned short _numberOfValues;
	NSMutableArray* _supportedValues;
	NSMutableData* _content;
	bool _dirty;
	bool _readOnlyObject;

}
-(void)updateContent;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(id)minimumValue;
-(id)maximumValue;
-(void)setMinimumValue:(id)arg1 ;
-(void)setMaximumValue:(id)arg1 ;
-(id)content;
-(id)initWithMutableData:(id)arg1 ;
-(unsigned short)devicePropertyCode;
-(void)setDevicePropertyCode:(unsigned short)arg1 ;
-(unsigned short)dataTypeCode;
-(void)setDataTypeCode:(unsigned short)arg1 ;
-(unsigned char)readWriteAttribute;
-(void)setReadWriteAttribute:(unsigned char)arg1 ;
-(id)factoryDefaultValue;
-(void)setFactoryDefaultValue:(id)arg1 ;
-(unsigned char)formFlag;
-(void)setFormFlag:(unsigned char)arg1 ;
-(id)stepSize;
-(void)setStepSize:(id)arg1 ;
-(unsigned short)numberOfValues;
-(void)setNumberOfValues:(unsigned short)arg1 ;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(id)supportedValues;
-(void)setSupportedValues:(id)arg1 ;
-(void)setContent:(id)arg1 ;
@end

