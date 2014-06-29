/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/VKPuckAnimatorTarget.h>
#import <VectorKit/VKTrackableAnnotationPresentation.h>
#import <MapKit/VKRouteMatchedAnnotationPresentation.h>

@class VKAttributedRouteMatch, MKAnnotationView, NSHashTable;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {

	MKAnnotationView* _annotationView;
	NSHashTable* _presentationCoordinateObservers;

}

@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) double presentationCourse; 
@property (assign,nonatomic) SCD_Struct_MK1 presentationCoordinate; 
@property (assign,getter=isTracking,nonatomic) bool tracking; 
@property (nonatomic,retain) VKAttributedRouteMatch * routeMatch; 
-(void)setAnnotationView:(id)arg1 ;
-(id)annotationView;
-(bool)isTracking;
-(void)setTracking:(bool)arg1 ;
-(void).cxx_destruct;
-(SCD_Struct_MK1)presentationCoordinate;
-(void)setAnimatingToCoordinate:(bool)arg1 ;
-(void)setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(void)removePresentationCoordinateChangedObserver:(id)arg1 ;
-(void)addPresentationCoordinateChangedObserver:(id)arg1 ;
-(id)routeMatch;
-(void)setRouteMatch:(id)arg1 ;
@end

