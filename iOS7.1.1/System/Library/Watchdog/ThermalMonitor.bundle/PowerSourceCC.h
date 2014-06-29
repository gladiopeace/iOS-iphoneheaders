/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ComponentControl.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface PowerSourceCC : ComponentControl <tGraphDataSource> {

	BOOL valueStr[30];
	int chargeLevel;
	unsigned pmuPowerService;
	unsigned short availableCurrent;
	unsigned short brickPowerID;
	unsigned short inputCurrent;
	unsigned watts;
	unsigned familyCode;

}
-(void)refreshCurrentLoadingIndex;
-(void)getAdaptorPMUValue;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(int)numberOfFields;
-(id)initWith:(const char*)arg1 :(int)arg2 :(CFDictionaryRef)arg3 ;
-(void)defaultAction;
@end

