/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MapKit/MKMapViewDelegate.h>

@protocol MKAnnotation;
@class MKMapView;

@interface CKMapViewController : UIViewController <MKMapViewDelegate> {

	<MKAnnotation>* _annotation;
	MKMapView* _mapView;

}

@property (nonatomic,retain) <MKAnnotation> * annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                      //@synthesize mapView=_mapView - In the implementation block
-(void)dealloc;
-(bool)wantsFullScreenLayout;
-(void)loadView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(id)annotation;
-(void)setAnnotation:(id)arg1 ;
-(void)selectPin;
-(id)initWithAnnotation:(id)arg1 ;
-(void)setMapView:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(id)mapView;
@end

