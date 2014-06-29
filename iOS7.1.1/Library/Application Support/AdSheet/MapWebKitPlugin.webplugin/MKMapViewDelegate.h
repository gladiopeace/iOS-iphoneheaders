/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKMapViewDelegate <NSObject>
@optional
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(bool)arg2;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
-(void)mapViewWillStartLoadingMap:(id)arg1;
-(void)mapViewDidFinishLoadingMap:(id)arg1;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
-(void)mapViewWillStartRenderingMap:(id)arg1;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(bool)arg2;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
-(void)mapViewWillStartLocatingUser:(id)arg1;
-(void)mapViewDidStopLocatingUser:(id)arg1;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(bool)arg3;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
-(void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2;
-(id)mapView:(id)arg1 viewForOverlay:(id)arg2;
-(void)mapView:(id)arg1 didAddOverlayViews:(id)arg2;
@end

