/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MKMapItem;

@interface MKETAResponse : NSObject {

	MKMapItem* _source;
	MKMapItem* _destination;
	double _expectedTravelTime;
	double _distance;

}

@property (nonatomic,readonly) MKMapItem * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                       //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) double expectedTravelTime;                     //@synthesize expectedTravelTime=_expectedTravelTime - In the implementation block
@property (getter=_distance,nonatomic,readonly) double distance;              //@synthesize distance=_distance - In the implementation block
-(double)expectedTravelTime;
-(id)initWithSource:(id)arg1 destination:(id)arg2 expectedTravelTime:(double)arg3 distance:(double)arg4 ;
-(id)source;
-(id)destination;
-(void).cxx_destruct;
-(double)_distance;
@end

