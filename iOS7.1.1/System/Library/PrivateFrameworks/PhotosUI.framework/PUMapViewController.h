/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <MapKit/MKMapViewDelegate.h>
#import <PhotosUI/PUMapAnnotationManagerDataSource.h>
#import <PhotosUI/PUPhotoBrowserZoomTransitionDelegate.h>
#import <PhotosUI/PUStackedAlbumTransitionDelegate.h>

@protocol PLDiagnosticsProvider;
@class MKMapView, NSMutableArray, NSArray, PUMapAnnotationManager, PUMapViewControllerSpec, NSObject;

@interface PUMapViewController : UIViewController <MKMapViewDelegate, PUMapAnnotationManagerDataSource, PUPhotoBrowserZoomTransitionDelegate, PUStackedAlbumTransitionDelegate> {

	MKMapView* _mapView;
	NSMutableArray* _mapAnnotations;
	NSArray* _mapItems;
	PUMapAnnotationManager* _annotationManager;
	PUMapViewControllerSpec* _spec;
	bool _useCurrentUserLocation;
	double _annotationWidth;
	double _borderAnnotationPadding;
	CGSize _annotationSize;
	bool _updatedInitialAnnotations;
	bool _shouldShowToolbar;
	bool _shouldShowTabBar;
	unsigned long long _maxItemsInitialZoom;
	NSObject<PLDiagnosticsProvider>* _diagnosticsProvider;

}

@property (assign,nonatomic) unsigned long long maxItemsInitialZoom;                             //@synthesize maxItemsInitialZoom=_maxItemsInitialZoom - In the implementation block
@property (assign,nonatomic) bool shouldShowToolbar;                                             //@synthesize shouldShowToolbar=_shouldShowToolbar - In the implementation block
@property (assign,nonatomic) bool shouldShowTabBar;                                              //@synthesize shouldShowTabBar=_shouldShowTabBar - In the implementation block
@property (nonatomic,retain) NSObject<PLDiagnosticsProvider> * diagnosticsProvider;              //@synthesize diagnosticsProvider=_diagnosticsProvider - In the implementation block
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(bool)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(long long*)arg3 forPhotoToken:(id)arg4 operation:(long long)arg5 ;
-(bool)shouldShowToolbar;
-(bool)shouldShowTabBar;
-(bool)pu_wantsToolbarVisible;
-(bool)pu_wantsTabBarVisible;
-(id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3 ;
-(void)zoomTransition:(id)arg1 setVisibility:(bool)arg2 forPhotoToken:(id)arg3 ;
-(void)stackedAlbumTransition:(id)arg1 setVisibility:(bool)arg2 forCollection:(id)arg3 ;
-(id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 ;
-(void)_createAnnotationManager;
-(void)updateAssets:(id)arg1 ;
-(void)_updateAnnotationsForMapItems:(id)arg1 ;
-(void)_updateAnnotationsForMapItems:(id)arg1 shouldScroll:(bool)arg2 ;
-(void)_addLocationsToArray:(id)arg1 forInitialZoomWithMapItems:(id)arg2 ;
-(void)_showLocations:(id)arg1 animated:(bool)arg2 ;
-(void)_updateNavItem;
-(void)_handleReportButton:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)_displayDetailsForAlbum:(NSObject*)arg1 ;
-(CGRect)zoomTransition:(id)arg1 frameForPhotoToken:(id)arg2 operation:(long long)arg3 ;
-(id)_annotationViewForPhotoToken:(id)arg1 ;
-(id)_puAnnotationViewForAnnotation:(id)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(id)mapView:(id)arg1 viewForOverlay:(id)arg2 ;
-(id)mapAnnotationManager:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(CGPoint)arg3 ;
-(id)initWithSpec:(id)arg1 assets:(id)arg2 ;
-(SCD_Struct_PU9)_mapRectWithDefaultZoomCenteredAtCoordinate:(CGPoint)arg1 ;
-(unsigned long long)maxItemsInitialZoom;
-(void)setMaxItemsInitialZoom:(unsigned long long)arg1 ;
-(void)setShouldShowToolbar:(bool)arg1 ;
-(void)setShouldShowTabBar:(bool)arg1 ;
-(id)diagnosticsProvider;
-(void)setDiagnosticsProvider:(id)arg1 ;
@end

