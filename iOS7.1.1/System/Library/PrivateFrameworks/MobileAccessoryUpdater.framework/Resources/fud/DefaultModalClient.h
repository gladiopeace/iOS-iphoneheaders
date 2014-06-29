/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:19:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Resources/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <fud/fud-Structs.h>
#import <MobileAccessoryUpdater/MobileAccessoryUpdaterDelegate.h>

@protocol OS_dispatch_queue;
@class MobileAccessoryUpdater, NSBundle, NSString, NSObject;

@interface DefaultModalClient : NSObject <MobileAccessoryUpdaterDelegate> {

	MobileAccessoryUpdater* updater;
	CFUserNotificationRef notification;
	BOOL useProgressBar;
	NSBundle* frameworkBundle;
	NSString* modalDeviceClass;
	NSObject<OS_dispatch_queue>* processingQueue;
	BOOL ignorePromptResponse;

}

@property (retain) NSString * modalDeviceClass; 
-(id)initWithGroup:(id)arg1 ;
-(void)setModalDeviceClass:(id)arg1 ;
-(id)copyNotificationOptions;
-(BOOL)areAllUpdatesRequired;
-(void)shouldInstallUpdateForAccessory:(id)arg1 deviceClass:(id)arg2 withOptions:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(id)modalDeviceClass;
-(void)dealloc;
-(void)deviceClassAttached:(id)arg1 ;
-(void)stepComplete:(id)arg1 deviceClass:(id)arg2 successful:(BOOL)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)stepRunning:(id)arg1 deviceClass:(id)arg2 progress:(double)arg3 overallProgress:(double)arg4 info:(id)arg5 ;
-(void)deviceClassDetached:(id)arg1 error:(id)arg2 ;
@end

