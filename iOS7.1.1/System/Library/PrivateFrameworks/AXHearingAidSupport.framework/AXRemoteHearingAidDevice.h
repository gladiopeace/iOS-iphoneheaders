/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AXTimer, NSString, NSDate, NSArray, AXHearingAidMode;

@interface AXRemoteHearingAidDevice : NSObject {

	AXTimer* _propertyWriteTimer;
	bool _keepInSync;
	bool _isPaired;
	bool _isConnecting;
	int _availableEars;
	double _rightMicrophoneVolume;
	double _leftMicrophoneVolume;
	double _rightStreamVolume;
	double _leftStreamVolume;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _leftFirmwareVersion;
	NSString* _rightFirmwareVersion;
	NSString* _leftHardwareVersion;
	NSString* _rightHardwareVersion;
	NSString* _rightUUID;
	NSString* _leftUUID;
	NSString* _leftPeripheralUUID;
	NSString* _rightPeripheralUUID;
	double _rightBatteryLevel;
	double _leftBatteryLevel;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;
	NSArray* _rightPrograms;
	NSArray* _leftPrograms;
	AXHearingAidMode* _leftSelectedProgram;
	AXHearingAidMode* _rightSelectedProgram;
	NSString* _deviceUUID;
	long long _loadedProperties;
	long long _pendingPropertyWrites;

}

@property (assign,nonatomic) bool isPaired;                                        //@synthesize isPaired=_isPaired - In the implementation block
@property (assign,nonatomic) bool isConnecting;                                    //@synthesize isConnecting=_isConnecting - In the implementation block
@property (assign,nonatomic) bool keepInSync;                                      //@synthesize keepInSync=_keepInSync - In the implementation block
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                              //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSString * model;                                     //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * leftFirmwareVersion;                       //@synthesize leftFirmwareVersion=_leftFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightFirmwareVersion;                      //@synthesize rightFirmwareVersion=_rightFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftHardwareVersion;                       //@synthesize leftHardwareVersion=_leftHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightHardwareVersion;                      //@synthesize rightHardwareVersion=_rightHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightUUID;                                 //@synthesize rightUUID=_rightUUID - In the implementation block
@property (nonatomic,retain) NSString * leftUUID;                                  //@synthesize leftUUID=_leftUUID - In the implementation block
@property (nonatomic,retain) NSString * leftPeripheralUUID;                        //@synthesize leftPeripheralUUID=_leftPeripheralUUID - In the implementation block
@property (nonatomic,retain) NSString * rightPeripheralUUID;                       //@synthesize rightPeripheralUUID=_rightPeripheralUUID - In the implementation block
@property (assign,nonatomic) double rightMicrophoneVolume;                         //@synthesize rightMicrophoneVolume=_rightMicrophoneVolume - In the implementation block
@property (assign,nonatomic) double leftMicrophoneVolume;                          //@synthesize leftMicrophoneVolume=_leftMicrophoneVolume - In the implementation block
@property (assign,nonatomic) double rightStreamVolume;                             //@synthesize rightStreamVolume=_rightStreamVolume - In the implementation block
@property (assign,nonatomic) double leftStreamVolume;                              //@synthesize leftStreamVolume=_leftStreamVolume - In the implementation block
@property (assign,nonatomic) double rightBatteryLevel;                             //@synthesize rightBatteryLevel=_rightBatteryLevel - In the implementation block
@property (assign,nonatomic) double leftBatteryLevel;                              //@synthesize leftBatteryLevel=_leftBatteryLevel - In the implementation block
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                          //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                         //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
@property (nonatomic,copy) NSArray * rightPrograms;                                //@synthesize rightPrograms=_rightPrograms - In the implementation block
@property (nonatomic,copy) NSArray * leftPrograms;                                 //@synthesize leftPrograms=_leftPrograms - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedProgram;               //@synthesize leftSelectedProgram=_leftSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedProgram;              //@synthesize rightSelectedProgram=_rightSelectedProgram - In the implementation block
@property (nonatomic,retain) NSString * deviceUUID;                                //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (assign,nonatomic) int availableEars;                                    //@synthesize availableEars=_availableEars - In the implementation block
@property (assign,nonatomic) long long loadedProperties;                           //@synthesize loadedProperties=_loadedProperties - In the implementation block
@property (assign,nonatomic) long long pendingPropertyWrites;                      //@synthesize pendingPropertyWrites=_pendingPropertyWrites - In the implementation block
-(bool)isConnected;
-(bool)isConnecting;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)model;
-(void)connect;
-(void)disconnect;
-(bool)leftAvailable;
-(bool)rightAvailable;
-(bool)isPaired;
-(double)leftBatteryLevel;
-(double)rightBatteryLevel;
-(void)setDeviceUUID:(id)arg1 ;
-(void)setLeftPrograms:(id)arg1 ;
-(void)setRightPrograms:(id)arg1 ;
-(void)setLeftFirmwareVersion:(id)arg1 ;
-(void)setRightFirmwareVersion:(id)arg1 ;
-(void)setLeftHardwareVersion:(id)arg1 ;
-(void)setRightHardwareVersion:(id)arg1 ;
-(id)deviceUUID;
-(int)availableEars;
-(long long)loadedProperties;
-(bool)didLoadProperty:(long long)arg1 ;
-(long long)pendingPropertyWrites;
-(void)setPendingPropertyWrites:(long long)arg1 ;
-(void)_delayWriteProperties;
-(void)writeVolumesForProperty:(long long)arg1 ;
-(id)leftPrograms;
-(id)rightPrograms;
-(id)programs;
-(void)setLeftSelectedProgram:(id)arg1 ;
-(void)setRightSelectedProgram:(id)arg1 ;
-(id)leftSelectedProgram;
-(id)rightSelectedProgram;
-(bool)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftBatteryLevel:(double)arg1 ;
-(void)setRightBatteryLevel:(double)arg1 ;
-(void)setLoadedProperties:(long long)arg1 ;
-(void)setAvailableEars:(int)arg1 ;
-(void)setLeftUUID:(id)arg1 ;
-(void)setRightUUID:(id)arg1 ;
-(void)setIsPaired:(bool)arg1 ;
-(void)setLeftBatteryLowDate:(id)arg1 ;
-(void)setRightBatteryLowDate:(id)arg1 ;
-(id)initWithRemoteRepresentation:(id)arg1 andDeviceID:(id)arg2 ;
-(bool)isLeftConnected;
-(bool)isRightConnected;
-(bool)containsPeripheralWithUUID:(id)arg1 ;
-(bool)didLoadBasicProperties;
-(void)setLeftMicrophoneVolume:(double)arg1 ;
-(void)setRightMicrophoneVolume:(double)arg1 ;
-(void)setLeftStreamVolume:(double)arg1 ;
-(void)setRightStreamVolume:(double)arg1 ;
-(void)selectProgram:(id)arg1 ;
-(id)selectedPrograms;
-(id)selectedProgramIndexes;
-(void)setKeepInSync:(bool)arg1 ;
-(bool)keepInSync;
-(double)rightMicrophoneVolume;
-(double)leftMicrophoneVolume;
-(double)rightStreamVolume;
-(double)leftStreamVolume;
-(void)setIsConnecting:(bool)arg1 ;
-(id)leftFirmwareVersion;
-(id)rightFirmwareVersion;
-(id)leftHardwareVersion;
-(id)rightHardwareVersion;
-(id)rightUUID;
-(id)leftUUID;
-(id)leftPeripheralUUID;
-(void)setLeftPeripheralUUID:(id)arg1 ;
-(id)rightPeripheralUUID;
-(void)setRightPeripheralUUID:(id)arg1 ;
-(id)leftBatteryLowDate;
-(id)rightBatteryLowDate;
-(void)setModel:(id)arg1 ;
-(void)setManufacturer:(id)arg1 ;
-(id)manufacturer;
-(void)setValue:(id)arg1 forProperty:(long long)arg2 ;
@end

