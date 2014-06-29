/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationCalloutControllerDelegate <NSObject>
@optional
-(void)calloutControllerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(void)calloutController:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(CGRect*)calloutController:(id)arg1 visibleCenteringRectInAnnotationView:(id)arg2;
-(void)calloutController:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(SCD_Struct_MK1)arg3 completionHandler:(/*^block*/ id)arg4;
@end

