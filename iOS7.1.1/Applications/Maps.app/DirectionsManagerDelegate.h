/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DirectionsManagerDelegate <NSObject>
@required
-(BOOL)directionsManagerShouldAllowAlternateRoutesForTransportType:(int)arg1;
-(void)directionsManagerUpdatedETA:(id)arg1;
-(void)directionsManager:(id)arg1 didChangeNavigatorState:(int)arg2;
-(void)directionsManagerDidFailToReceiveRoute:(id)arg1;
-(void)directionsManagerWillRecalculateRoute:(id)arg1;
-(void)directionsManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5;
-(void)directionsManager:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 distanceUntilManeuver:(double)arg4 timeUntilManeuver:(double)arg5;
-(void)directionsManager:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di6*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
-(void)directionsManager:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di6*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
-(void)directionsManagerHideSecondaryStep:(id)arg1;
-(void)directionsManagerHasArrived:(id)arg1;
-(void)directionsManagerDidFailToRecalculateRoute:(id)arg1;
@end

