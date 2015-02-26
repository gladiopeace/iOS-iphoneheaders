/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOAlmanac : NSObject {

	SCD_Struct_GE12 _coordinate;
	double _sunrise;
	double _sunset;
	double _nextSunrise;
	double _nextSunset;

}

@property (nonatomic,readonly) BOOL isDayLight; 
-(id).cxx_construct;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE12)arg1 time:(double)arg2 ;
-(BOOL)isDayLightForTime:(double)arg1 ;
-(double)intervalForNextAstronomicalChangeFromTime:(double)arg1 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE12)arg1 ;
-(void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 ;
-(BOOL)isDayLight;
-(double)intervalForNextAstronomicalChange;
@end
