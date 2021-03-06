/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSystemServiceDelegate, OS_dispatch_queue;
@class FBApplicationLibrary, NSObject, FBSystemServiceServer;

@interface FBSystemService : NSObject {

	FBApplicationLibrary* _library;
	id<FBSystemServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	FBSystemServiceServer* _server;

}

@property (assign,nonatomic) id<FBSystemServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FBSystemServiceServer * server;                    //@synthesize server=_server - In the implementation block
+(id)sharedInstance;
-(id)systemApplicationBundleIdentifier;
-(void)dealloc;
-(void)setDelegate:(id<FBSystemServiceDelegate>)arg1 ;
-(id<FBSystemServiceDelegate>)delegate;
-(FBSystemServiceServer *)server;
-(id)initWithQueue:(id)arg1 ;
-(int)pidForApplication:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setServer:(FBSystemServiceServer *)arg1 ;
-(void)_performExitTasksForRelaunch:(BOOL)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 ;
-(void)_activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(BOOL)_requiresOpenApplicationEntitlement:(id)arg1 options:(id)arg2 originalSource:(id)arg3 ;
-(void)_reallyActivateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)_activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1 ;
-(void)shutdownAndReboot:(BOOL)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 ;
-(void)prepareForExitAndRelaunch:(BOOL)arg1 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 ;
-(void)canActivateApplication:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)handleActions:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
@end

