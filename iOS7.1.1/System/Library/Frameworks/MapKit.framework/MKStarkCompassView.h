/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/MKLocationManagerObserver.h>

@class UIView, UILabel, MKLocationManager;

@interface MKStarkCompassView : UIView <MKLocationManagerObserver> {

	UIView* _contentsView;
	bool _monitoringCourse;
	UILabel* _label;
	MKLocationManager* _locationManager;
	int _compassPoint;
	double _heading;

}

@property (assign,nonatomic) int compassPoint;              //@synthesize compassPoint=_compassPoint - In the implementation block
@property (assign,nonatomic) double heading;                //@synthesize heading=_heading - In the implementation block
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(bool)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)_startLocationUpdates;
-(void)_updateStyling;
-(void)_updateContents;
-(void)setCompassPoint:(int)arg1 ;
-(void)_updateDisplayedHeadingWithHeading:(double)arg1 ;
-(id)initWithSharedMKLocationManager;
-(int)compassPoint;
-(void)_createSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void).cxx_destruct;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(void)setHeading:(double)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(double)heading;
@end

