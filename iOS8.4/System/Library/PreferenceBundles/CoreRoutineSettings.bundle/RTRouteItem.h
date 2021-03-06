/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutineSettings/CoreRoutineSettings-Structs.h>
#import <CoreRoutineSettings/RTMapAndTableRowItem.h>

@class RTLocationOfInterest, RTPredictedLocationOfInterest, MKPolyline, NSString;

@interface RTRouteItem : NSObject <RTMapAndTableRowItem> {

	RTLocationOfInterest* _loi;
	RTPredictedLocationOfInterest* _ploi;
	MKPolyline* _polyline;
	SCD_Struct_RT3 _mapRect;

}

@property (nonatomic,retain) RTLocationOfInterest * loi;                        //@synthesize loi=_loi - In the implementation block
@property (nonatomic,retain) RTPredictedLocationOfInterest * ploi;              //@synthesize ploi=_ploi - In the implementation block
@property (nonatomic,retain) MKPolyline * polyline;                             //@synthesize polyline=_polyline - In the implementation block
@property (assign,nonatomic) SCD_Struct_RT3 mapRect;                            //@synthesize mapRect=_mapRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPolyline:(MKPolyline *)arg1 ;
-(void)setLoi:(RTLocationOfInterest *)arg1 ;
-(RTLocationOfInterest *)loi;
-(void)populateSubtitleStyleCell:(id)arg1 ;
-(id)initWithLOI:(id)arg1 andPredictedLOI:(id)arg2 ;
-(void)setPloi:(RTPredictedLocationOfInterest *)arg1 ;
-(SCD_Struct_RT3)mapRect;
-(RTPredictedLocationOfInterest *)ploi;
-(void)setMapRect:(SCD_Struct_RT3)arg1 ;
-(MKPolyline *)polyline;
@end

