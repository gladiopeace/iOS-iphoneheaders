/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>
#import <AppLaunchStats/DuetSaveAndRestore.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, NSMutableDictionary;

@interface AppLaunchStatsDelayLaunch : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	NSObject<OS_dispatch_queue>* aplsDelayLaunchQueue;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	NSMutableDictionary* delayLaunchList;
	NSMutableDictionary* delayLaunchTimeInterval;

}
-(id)init;
-(void).cxx_destruct;
-(void)save:(id)arg1 ;
-(void)logAll:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)saveContext:(id)arg1 ;
-(void)restore:(id)arg1 ;
-(void)delayLaunch:(id)arg1 with:(double)arg2 ;
-(void)resetDelayLaunch:(id)arg1 ;
-(int)valueSetForDelay:(id)arg1 ;
-(bool)shouldDelayLaunch:(id)arg1 forTrending:(bool)arg2 ;
@end

