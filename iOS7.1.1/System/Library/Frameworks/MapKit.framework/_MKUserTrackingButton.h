/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIButton.h>
#import <MapKit/MKUserTrackingButtonTarget.h>

@class _MKUserTrackingButtonController, NSMutableDictionary, MKMapView;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {

	_MKUserTrackingButtonController* _controller;
	bool _inMiniBar;
	NSMutableDictionary* _customImages;
	NSMutableDictionary* _customLandscapeImagePhones;
	bool _selectsWhenTracking;

}

@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) bool selectsWhenTracking;              //@synthesize selectsWhenTracking=_selectsWhenTracking - In the implementation block
@property (nonatomic,retain) MKMapView * mapView; 
@property (nonatomic,retain) <MKUserTrackingView> * userTrackingView; 
@property (nonatomic,readonly) _MKUserTrackingButtonController * controller;                                                    //@synthesize controller=_controller - In the implementation block
+(id)buttonWithUserTrackingView:(id)arg1 ;
+(Class)_activityIndicatorClass;
+(id)buttonWithMapView:(id)arg1 ;
-(bool)_selectsWhenTracking;
-(void)_setSelectsWhenTracking:(bool)arg1 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(id)userTrackingView;
-(void)setUserTrackingView:(id)arg1 ;
-(void)_repositionViews;
-(void)_updateForState:(long long)arg1 ;
-(bool)_isHighlightedForState:(long long)arg1 ;
-(id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)sizeToFit;
-(void)updateForMiniBarState:(bool)arg1 ;
-(long long)_state;
-(CGRect)_selectedIndicatorBounds;
-(id)controller;
-(void)_setState:(long long)arg1 ;
-(long long)_activityIndicatorStyle;
-(void).cxx_destruct;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
@end

