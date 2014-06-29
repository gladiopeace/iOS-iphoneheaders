/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/FiveHotSpotDecisionTree.h>

@interface SixHotSpotDecisionTree : FiveHotSpotDecisionTree {

	unsigned hotspot6ControlEffort;
	unsigned char dtNormHotSpot6[256][6];

}
-(int)evaluateDecisionSlot:(int)arg1 :(int)arg2 ;
-(void)updateHotSpotControlEffort:(int)arg1 :(unsigned)arg2 ;
-(void)evaluateDecisionTree;
-(id)initDTWith:(id)arg1 ;
-(void)initDecisionTable:(CFDictionaryRef)arg1 ;
@end

