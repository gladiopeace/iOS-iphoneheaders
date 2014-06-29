/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@class NSDate;

@interface PLBatteryLogger : PLLogger {

	IONotificationPortRef ioNotifyPort;
	unsigned notificationRef;
	unsigned long long lastBatteryLevel;
	NSDate* lastBatteryLevelChangeDate;
	bool lastConnectedState;
	id gasGaugeLock;
	ggcontextRef ggCtx;
	bool sleepDisabledGasGaugeOpen;
	bool sleeping;

}

@property (nonatomic,retain) NSDate * lastBatteryLevelChangeDate; 
-(void)dealloc;
-(id)init;
-(void)log;
-(void)handleWake:(id)arg1 ;
-(void)handleSleep:(id)arg1 ;
-(void)setLastBatteryLevelChangeDate:(id)arg1 ;
-(bool)gasGaugeStopLoggingAndClose;
-(bool)gasGaugeOpenAndStartLogging;
-(void)logBatteryProperties:(id)arg1 ;
-(void)gasGauageLog;
-(id)lastBatteryLevelChangeDate;
-(double)secondsBeforeSignificantTimeTriggered;
-(id)gasGaugeRead;
-(void)batteryStatusChanged:(id)arg1 ;
-(id)loggerFunctionCall:(short)arg1 withParameters:(id)arg2 ;
@end

