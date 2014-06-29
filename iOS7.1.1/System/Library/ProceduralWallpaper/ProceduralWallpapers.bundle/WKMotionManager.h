/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
@class CMMotionManager, WKInfiniteImpulseResponseFilter;

@interface WKMotionManager : NSObject {

	double _x;
	double _y;
	double _z;
	SCD_Struct_WK5 _attitude;
	double _roll;
	double _pitch;
	double _yaw;
	double _coefficient;
	double _threshold;
	int _referenceFrame;
	CMMotionManager* _motionManager;
	bool _motionManagerPaused;
	WKInfiniteImpulseResponseFilter* _motionFilterX;
	WKInfiniteImpulseResponseFilter* _motionFilterY;
	WKInfiniteImpulseResponseFilter* _motionFilterZ;
	WKInfiniteImpulseResponseFilter* _motionFilterAX;
	WKInfiniteImpulseResponseFilter* _motionFilterAY;
	WKInfiniteImpulseResponseFilter* _motionFilterAZ;
	WKInfiniteImpulseResponseFilter* _motionFilterAW;
	WKInfiniteImpulseResponseFilter* _motionFilterRoll;
	WKInfiniteImpulseResponseFilter* _motionFilterPitch;
	WKInfiniteImpulseResponseFilter* _motionFilterYaw;

}

@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
@property (nonatomic,readonly) double z; 
@property (nonatomic,readonly) SCD_Struct_WK5 attitude; 
@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (assign,nonatomic) double deviceMotionUpdateInterval; 
@property (assign,nonatomic) double accelerometerUpdateInterval; 
-(id)initWithCoefficient:(double)arg1 threshold:(double)arg2 ;
-(bool)zeroMovementSinceLastFrame;
-(void)_createFilters;
-(id)initWithCoefficient:(double)arg1 ;
-(void)startDeviceAccelerometerUpdates;
-(void)stopDeviceAccelerometerUpdates;
-(void)pauseDeviceMotionUpdates;
-(void)createMotionManager;
-(double)accelerometerUpdateInterval;
-(id)init;
-(double)x;
-(double)y;
-(double)z;
-(void)setDeviceMotionUpdateInterval:(double)arg1 ;
-(bool)isDeviceMotionAvailable;
-(double)deviceMotionUpdateInterval;
-(void).cxx_destruct;
-(SCD_Struct_WK5)attitude;
-(double)pitch;
-(void)stopDeviceMotionUpdates;
-(void)setAccelerometerUpdateInterval:(double)arg1 ;
-(void)startDeviceMotionUpdates;
-(double)yaw;
-(double)roll;
@end

