/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSThread.h>

@class NSMutableArray, NSMutableDictionary;

@interface UIStatusBarServerThread : NSThread {

	NSMutableArray* _clientPorts;
	NSMutableArray* _publishers;
	SCD_Struct_UI69 _statusBarData;
	SCD_Struct_UI69 _composedStatusBarData;
	SCD_Struct_UI70 _overrides;
	CFDictionaryRef _doubleHeightStatusStrings;
	CFDictionaryRef _glowAnimationStates;
	NSMutableDictionary* _glowAnimationEndTimes;
	bool _composedStatusBarDataValid;

}
-(void)main;
-(id)_publisherForPort:(unsigned)arg1 ;
-(void)_broadcastStatusBarDataWithActions:(int)arg1 ;
-(void)_broadcastStyleOverrides;
-(SCD_Struct_UI69*)_statusBarData;
-(int)_styleOverrides;
-(void)_setAnimationEndTimesForOverrides:(int)arg1 ;
-(void)_removeAnimationEndTimesForOverrides:(int)arg1 ;
-(double)_glowAnimationEndTimeForStyle:(long long)arg1 ;
-(void)_addClient:(unsigned)arg1 ;
-(void)_removeClient:(CFMachPortRef)arg1 ;
-(void)_removePublisher:(CFMachPortRef)arg1 ;
-(SCD_Struct_UI70*)_statusBarOverrideData;
-(void)_postStatusBarData:(SCD_Struct_UI69*)arg1 actions:(int)arg2 ;
-(void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2 ;
-(void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2 ;
-(bool)_glowAnimationStateForStyle:(long long)arg1 ;
-(void)_postGlowAnimationState:(bool)arg1 forStyle:(long long)arg2 ;
-(id)_doubleHeightStatusStringForStyle:(long long)arg1 ;
-(void)_postDoubleHeightStatus:(char*)arg1 forStyle:(long long)arg2 ;
-(void)_postStatusBarOverrideData:(SCD_Struct_UI70*)arg1 ;
-(bool)_permanentizeStatusBarOverrideData;
-(void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2 ;
-(void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2 ;
@end

