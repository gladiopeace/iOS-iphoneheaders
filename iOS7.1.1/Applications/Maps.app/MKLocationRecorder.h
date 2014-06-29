/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKLocationRecorder <NSObject>
@required
-(void)recordInitialCourse:(double)arg1;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
-(void)recordError:(id)arg1;
-(void)recordLocationUpdatePause;
-(void)recordLocationUpdateResume;
-(void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
-(void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
@end

