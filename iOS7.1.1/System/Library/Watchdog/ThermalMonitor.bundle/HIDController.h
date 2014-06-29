/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ThermalMonitor/ThermalMonitor-Structs.h>
@class NSObject;

@interface HIDController : NSObject {

	bool alsSensorReady;
	bool tempSensorReady;
	NSObject<OS_dispatch_queue>* hidQueue;
	CFArrayRef alsSensor;
	CFArrayRef tempSensor;
	IOHIDEventSystemClientRef hidEventSystem;

}
+(id)sharedInstance;
-(bool)createHIDEventSystemObject;
-(void)createSensorArray:(int)arg1 :(int)arg2 :(_CFArray*)arg3 ;
-(void)setSensorArray:(int)arg1 :(int)arg2 ;
-(void)resetHIDArray;
-(CFArrayRef)getSensors:(int)arg1 ;
-(id)init;
-(void)setBacklightLevel:(int)arg1 ;
@end

