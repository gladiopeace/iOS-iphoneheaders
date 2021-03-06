/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface LTEAudioDevice : NSObject {

	NSString* _deviceName;
	NSNumber* _deviceID;
	BOOL _inputAvailable;
	BOOL _outputAvailable;
	BOOL _isLineIn;

}

@property (nonatomic,readonly) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL inputAvailable;                //@synthesize inputAvailable=_inputAvailable - In the implementation block
@property (nonatomic,readonly) BOOL outputAvailable;               //@synthesize outputAvailable=_outputAvailable - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)deviceID;
-(void)createName;
-(BOOL)isSomethingConnectedToJack;
-(id)initWithDeviceID:(id)arg1 ;
-(void)createNameForScope:(unsigned)arg1 ;
-(BOOL)isValidDevice;
-(BOOL)isValidInputDevice;
-(BOOL)isStreamAvailableForScope:(unsigned)arg1 ;
-(NSString *)deviceName;
-(BOOL)inputAvailable;
-(BOOL)outputAvailable;
@end

