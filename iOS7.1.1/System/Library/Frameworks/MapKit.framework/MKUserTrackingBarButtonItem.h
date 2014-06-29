/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIBarButtonItem.h>
#import <MapKit/MKUserTrackingButtonTarget.h>

@protocol MKUserTrackingView;
@class UIButton, _MKUserTrackingButtonController, _MKUserTrackingButton, UIImage, UIToolbar, UINavigationBar, UIView, MKMapView;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget> {

	bool _hasCustomAssociatedView;
	UIButton* _customButton;
	_MKUserTrackingButtonController* _controller;
	_MKUserTrackingButton* _userTrackingButton;
	bool _isLegacy;
	UIImage* _trackingEmptyImage;
	UIImage* _trackingNoneImage;
	UIImage* _trackingFollowImage;
	UIImage* _trackingFollowWithHeadingImage;
	<MKUserTrackingView>* _userTrackingView;
	UIToolbar* _toolbar;
	UINavigationBar* _navigationBar;
	UIView* _associatedView;

}

@property (nonatomic,retain) MKMapView * mapView; 
@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) bool selectsWhenTracking; 
@property (assign,setter=_setState:,nonatomic) long long _state; 
@property (nonatomic,retain) UIToolbar * _toolbar;                                                                              //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UINavigationBar * _navigationBar;                                                                  //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIView * _associatedView;                                                                          //@synthesize associatedView=_associatedView - In the implementation block
@property (setter=_setUserTrackingView:,nonatomic,retain) <MKUserTrackingView> * _userTrackingView;                             //@synthesize userTrackingView=_userTrackingView - In the implementation block
+(Class)_activityIndicatorClass;
-(void)_goToNextMode:(id)arg1 ;
-(id)_trackingNoneImage;
-(void)set_associatedView:(id)arg1 ;
-(id)_initWithUserTrackingView:(id)arg1 ;
-(bool)_selectsWhenTracking;
-(void)_setSelectsWhenTracking:(bool)arg1 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_trackingEmptyImage;
-(id)_trackingFollowImage;
-(id)_trackingFollowWithHeadingImage;
-(id)_associatedView;
-(id)_userTrackingView;
-(void)_setUserTrackingView:(id)arg1 ;
-(void)set_toolbar:(id)arg1 ;
-(void)_repositionViews;
-(void)set_navigationBar:(id)arg1 ;
-(long long)_styleForState:(long long)arg1 ;
-(void)_updateForState:(long long)arg1 ;
-(bool)_isHighlightedForState:(long long)arg1 ;
-(id)initWithMapView:(id)arg1 ;
-(id)_imageForUserTrackingMode:(long long)arg1 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 ;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 ;
-(id)_toolbar;
-(id)_navigationBar;
-(void)dealloc;
-(void)setEnabled:(bool)arg1 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(long long)_state;
-(bool)_isInMiniBar;
-(id)createViewForToolbar:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setState:(long long)arg1 ;
-(long long)_activityIndicatorStyle;
-(void).cxx_destruct;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
@end

