/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PowerlogPlugins/PLCameraLogger.bundle/PLCameraLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PLCameraLogger/PLCameraLogger-Structs.h>
#import <PLCameraLogger/PLCameraLogger.h>

@interface PLCameraLegacyIOServiceLogger : PLCameraLogger {

	unsigned cameraService;
	int serviceGen;
	IONotificationPortRef ioNotifyPort;
	unsigned notificationRef;

}
-(void)dealloc;
-(id)init;
-(void)log;
@end

