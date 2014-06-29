/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUAudioController.h>

@protocol OS_dispatch_queue;
@class NSString, AVController, NSObject, NSArray, NSDictionary, NSNumber;

@interface PHVoicemailAudioController : TUAudioController {

	NSString* _category;
	AVController* _avController;
	NSObject<OS_dispatch_queue>* _avControllerQueue;
	NSObject<OS_dispatch_queue>* _pickableRoutesQueue;
	NSObject<OS_dispatch_queue>* _pickedRouteQueue;
	NSArray* _pickableRoutes;
	NSDictionary* _pickedRoute;
	NSDictionary* _forcedPickedRoute;
	BOOL _isRequestingPickableRoutes;
	BOOL _isRequestingPickedRoute;
	unsigned long long _lastPickableRoutesScheduleTime;
	unsigned long long _lastPickedRouteScheduleTime;
	NSNumber* _currentTimeOverride;

}

@property (@dynamic,readonly) NSArray * pickableRoutes; 
@property (nonatomic,@dynamic,copy) NSDictionary * pickedRoute; 
@property (@dynamic,readonly) int pickedRouteType; 
@property (@dynamic,readonly) NSDictionary * receiverRoute; 
@property (@dynamic,readonly) NSDictionary * speakerRoute; 
@property (readonly) AVController * avController; 
@property (@dynamic) double currentTime; 
@property (retain) NSNumber * currentTimeOverride;                           //@synthesize currentTimeOverride=_currentTimeOverride - In the implementation block
-(id)speakerRoute;
-(id)receiverRoute;
-(void)setPickedRoute:(id)arg1 ;
-(int)pickedRouteType;
-(id)initForVoicemail;
-(id)_initWithCategory:(id)arg1 ;
-(id)_pickableRoutesForceNewRequest:(BOOL)arg1 ;
-(id)_pickedRouteForceNewRequest:(BOOL)arg1 ;
-(int)typeForRoute:(id)arg1 ;
-(void)_mediaServerDied:(id)arg1 ;
-(id)currentTimeOverride;
-(void)_avControllerTimeJumpedAfterReset:(id)arg1 ;
-(void)setCurrentTimeOverride:(id)arg1 ;
-(id)initForVoicemailGreeting;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(id)pickedRoute;
-(void)dealloc;
-(id)avController;
-(void)_pickableRoutesChanged:(id)arg1 ;
-(id)pickableRoutes;
@end

