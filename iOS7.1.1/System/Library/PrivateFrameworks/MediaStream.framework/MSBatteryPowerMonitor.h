/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaStream/MediaStream-Structs.h>
@interface MSBatteryPowerMonitor : NSObject {

	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	bool _isExteralPowerConnected;
	double _currentLevel;

}

@property (assign,nonatomic) bool isExternalPowerConnected;              //@synthesize isExteralPowerConnected=_isExteralPowerConnected - In the implementation block
@property (assign,nonatomic) double currentLevel;                        //@synthesize currentLevel=_currentLevel - In the implementation block
+(id)defaultMonitor;
-(void)dealloc;
-(id)init;
-(double)batteryPercentRemaining;
-(void)setCurrentLevel:(double)arg1 ;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(double)currentLevel;
-(void)setExternalPowerConnected:(bool)arg1 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(bool)isExternalPowerConnected;
@end

