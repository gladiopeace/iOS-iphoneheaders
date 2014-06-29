/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SWLocalRunWorkoutProxy, CPDistributedMessagingCenter, CPDistributedNotificationCenter, NSTimer;

@interface SWRemoteRunWorkoutProxyServer : NSObject {

	SWLocalRunWorkoutProxy* _workoutProxy;
	CPDistributedMessagingCenter* _messagingCenter;
	CPDistributedNotificationCenter* _notificationCenter;
	NSTimer* _propertyUpdateTimer;

}
-(void)activateWorkout;
-(void)pauseWorkout;
-(void)playPowerSong;
-(void)selectNextSong;
-(void)selectPreviousSong;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(void)prepareToActivateWorkout;
-(void)getGoing;
-(void)goToNowPlaying;
-(void)pauseMusic;
-(void)playMusic;
-(void)_sensorSearchStateChanged:(id)arg1 ;
-(void)_workoutStateChanged:(id)arg1 ;
-(void)_nowPlayingChanged:(id)arg1 ;
-(void)_clientDidCheckin;
-(void)_handlePropertyUpdateTimer:(id)arg1 ;
-(void)_postPropertyUpdateNotification;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)dealloc;
-(id)init;
@end

