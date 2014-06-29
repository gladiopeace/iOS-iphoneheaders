/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:55:58 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareBehaviorServices/SBManagerServerInterface.h>

@class SBManager, NSMutableArray;

@interface SBManagerServer : NSObject <SBManagerServerInterface> {

	SBManager* _manager;
	NSMutableArray* _clients;

}
+(id)sharedInstance;
-(void)runUntilIdleExit;
-(id)_clientForCurrentConnection;
-(void)_notifyServerStart;
-(void)dealloc;
-(id)init;
-(void)_run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)manager;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(id)clients;
-(void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(/*^block*/ id)arg3 ;
-(void)isSoftwareBehaviorBundleSupported:(/*^block*/ id)arg1 ;
-(void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(/*^block*/ id)arg2 ;
-(void)checkForSoftwareBehaviorBundleUpdate:(/*^block*/ id)arg1 ;
-(void)setClientType:(int)arg1 withResult:(/*^block*/ id)arg2 ;
@end

