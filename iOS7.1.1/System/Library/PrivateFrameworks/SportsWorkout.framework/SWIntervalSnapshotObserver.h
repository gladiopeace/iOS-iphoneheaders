/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWRunWorkoutObserver.h>

@class NSMutableArray, NSArray;

@interface SWIntervalSnapshotObserver : NSObject <SWRunWorkoutObserver> {

	NSMutableArray* _snapshots;
	unsigned long long _timeIntervalInSeconds;
	float _distanceIntervalInMiles;
	float _calorieInterval;
	unsigned long long _previousTimeSnapshotIndex;
	unsigned long long _previousDistanceSnapshotIndex;
	unsigned long long _previousCalorieSnapshotIndex;

}

@property (nonatomic,@dynamic,readonly) NSArray * snapshots; 
-(id)initWithDistanceIntervalInMiles:(float)arg1 ;
-(id)initWithTimeIntervalInSeconds:(unsigned long long)arg1 ;
-(void)adjustSnapshotsForDistanceScaleFactor:(float)arg1 ;
-(void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned long long)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6 ;
-(void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3 ;
-(void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2 ;
-(id)initWithCalorieInterval:(float)arg1 ;
-(void)dealloc;
-(id)_init;
-(id)snapshots;
@end

