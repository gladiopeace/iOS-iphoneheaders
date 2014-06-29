/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DebugViewControllerDelegate <NSObject>
@property (assign,nonatomic) BOOL hasShownDrivingNavModeAdvisory; 
@property (assign,nonatomic) BOOL hasShownWalkingNavModeAdvisory; 
@property (assign,nonatomic) BOOL locationPulseEnabled; 
@required
-(void)debugController:(id)arg1 choseTracePlayer:(id)arg2 startNav:(BOOL)arg3;
-(id)visibleMapViewForDebugController:(id)arg1;
-(void)debugControllerDidFinish:(id)arg1;
-(BOOL)hasShownDrivingNavModeAdvisory;
-(void)setHasShownDrivingNavModeAdvisory:(BOOL)arg1;
-(BOOL)hasShownWalkingNavModeAdvisory;
-(void)setHasShownWalkingNavModeAdvisory:(BOOL)arg1;
-(BOOL)locationPulseEnabled;
-(void)setLocationPulseEnabled:(BOOL)arg1;
@end

