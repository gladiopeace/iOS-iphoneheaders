/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMActivity : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) int confidence; 
@property (nonatomic,readonly) bool isMoving; 
@property (nonatomic,readonly) bool isWalking; 
@property (nonatomic,readonly) bool isRunning; 
@property (nonatomic,readonly) bool isDriving; 
@property (nonatomic,readonly) bool maybeExitingVehicle; 
@property (nonatomic,readonly) bool hasExitedVehicle; 
-(id)initWithMotionActivity:(CLMotionActivity)arg1 andTimestamp:(double)arg2 ;
-(int)confidence;
-(bool)isMoving;
-(bool)isWalking;
-(bool)isDriving;
-(bool)maybeExitingVehicle;
-(bool)hasExitedVehicle;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isRunning;
-(CLMotionActivity)activity;
@end

