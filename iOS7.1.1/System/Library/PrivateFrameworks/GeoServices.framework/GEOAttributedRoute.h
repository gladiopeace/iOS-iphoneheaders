/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEORoute, NSArray;

@interface GEOAttributedRoute : NSObject {

	GEORoute* _route;
	NSArray* _maneuverDisplaySteps;
	bool _maneuverDisplayEnabled;
	unsigned long long _currentDisplayStep;
	unsigned _maneuverDisplayCount;
	double* _pointLengths;
	SCD_Struct_GE72* _currentManeuverDisplayEndPoints;

}

@property (nonatomic,readonly) GEORoute * route;                                 //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) bool maneuverDisplayEnabled;                        //@synthesize maneuverDisplayEnabled=_maneuverDisplayEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long currentDisplayStep;              //@synthesize currentDisplayStep=_currentDisplayStep - In the implementation block
@property (nonatomic,retain) NSArray * maneuverDisplaySteps;                     //@synthesize maneuverDisplaySteps=_maneuverDisplaySteps - In the implementation block
@property (nonatomic,readonly) unsigned maneuverDisplayCount;                    //@synthesize maneuverDisplayCount=_maneuverDisplayCount - In the implementation block
-(id)route;
-(void)dealloc;
-(id)description;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned)arg2 ;
-(bool)_needsCornerOffsetAt:(unsigned)arg1 ;
-(void)setManeuverDisplaySteps:(id)arg1 ;
-(void)setCurrentDisplayStep:(unsigned long long)arg1 ;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 ;
-(void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 ;
-(void)setManeuverDisplayEnabled:(bool)arg1 ;
-(id)maneuverDisplaySteps;
-(id)initWithRoute:(id)arg1 ;
-(unsigned long long)currentDisplayStep;
-(bool)maneuverDisplayEnabled;
-(void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4 ;
-(unsigned)maneuverDisplayCount;
-(SCD_Struct_GE72)maneuverDisplayEndpointsAtIndex:(unsigned long long)arg1 ;
-(void)attributedRouteHasChanged;
@end

