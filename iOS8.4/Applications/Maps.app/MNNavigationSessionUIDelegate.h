/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNNavigationSessionUIDelegate <MNDirectionsSessionUIDelegate>
@required
-(void)navigationSession:(id)arg1 willStartForRoute:(id)arg2;
-(void)navigationSessionDidStart:(id)arg1;
-(void)navigationSessionWillEnd:(id)arg1;
-(void)navigationSession:(id)arg1 failedWithErrorCode:(int)arg2;
-(void)navigationSession:(id)arg1 didEnableGuidance:(char)arg2;
-(void)navigationSession:(id)arg1 updatedMatchedLocation:(id)arg2;
-(void)navigationSession:(id)arg1 didChangeState:(int)arg2;
-(void)navigationSession:(id)arg1 startingStepIndex:(unsigned)arg2;
-(void)navigationSession:(id)arg1 updatePointOfInterest:(SCD_Struct_RA2)arg2 focusStyle:(int)arg3;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned)arg6;
-(void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di8*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned)arg11 isSynthetic:(char)arg12;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned)arg2;
-(void)navigationSession:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di8*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
-(void)navigationSessionHideSecondaryStep:(id)arg1;
-(void)navigationSessionHasArrived:(id)arg1;
-(void)navigationSessionHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(char)arg2;
-(void)navigationSessionDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2;
-(void)navigationSessionTransportTypeChanged:(id)arg1 newTransportType:(int)arg2;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned)arg2 andLegIndex:(unsigned)arg3;
-(void)navigationSession:(id)arg1 willStartNavigatorForRoute:(id)arg2;
-(void)navigationSessionWillPauseNavigator:(id)arg1;
-(void)navigationSessionWillResumeNavigatorFromPause:(id)arg1;
-(void)navigationSessionWillStopNavigator:(id)arg1;

@end
