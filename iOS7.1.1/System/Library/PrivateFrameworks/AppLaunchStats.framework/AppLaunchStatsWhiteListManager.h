/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <MobileCoreServices/LSApplicationWorkspaceObserverProtocol.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, LSApplicationWorkspace, NSMutableArray;

@interface AppLaunchStatsWhiteListManager : NSObject <LSApplicationWorkspaceObserverProtocol, DuetLoggerProtocol> {

	NSObject<OS_dispatch_queue>* aplsWLMQueue;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	LSApplicationWorkspace* wlmAppWorkSpace;
	NSMutableArray* defaultsWriteWhiteList;
	NSMutableArray* launchServiceWhiteListFetch;
	NSMutableArray* launchServiceWhiteListPush;
	bool enableWhiteListCheck;

}

@property (assign,nonatomic) bool enableWhiteListCheck; 
+(id)instance;
-(void)applicationsDidInstall:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
-(void)initSetup;
-(void)addToMultiTaskingQueue:(id)arg1 ;
-(bool)isAppInList:(id)arg1 withBundleID:(id)arg2 ;
-(void)logAll:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(bool)isWhiteListed:(id)arg1 withFetch:(int)arg2 ;
-(void)reloadConfiguration;
-(void)saveContext:(id)arg1 ;
-(bool)enableWhiteListCheck;
-(void)setEnableWhiteListCheck:(bool)arg1 ;
@end

