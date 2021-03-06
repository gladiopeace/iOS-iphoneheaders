/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/ChromeViewController.h>

@protocol LoadingToken;
@class DirectionsAnnotationsManager, SearchPinsManager;

@interface MapsChromeViewController : ChromeViewController {

	DirectionsAnnotationsManager* _directionsAnnotationsManager;
	SearchPinsManager* _searchPinsManager;
	id<LoadingToken> _loadingMapNetworkActivity;

}

@property (nonatomic,readonly) DirectionsAnnotationsManager * directionsAnnotationsManager; 
@property (nonatomic,readonly) SearchPinsManager * searchPinsManager; 
+(Class)userLocationViewClass;
-(void)_updateAdditionalManifestConfiguration;
-(id)topMode;
-(SearchPinsManager *)searchPinsManager;
-(void)performInitialConfigurationOnDirectionsAnnotationsManager:(id)arg1 ;
-(void)performInitialConfigurationOnSearchPinsManager:(id)arg1 ;
-(DirectionsAnnotationsManager *)directionsAnnotationsManager;
-(id)enteredForegroundDate;
-(void)didLoadView;
-(void)_lightLevelChanged:(id)arg1 ;
-(void)mapViewInstanceDidChange;
-(void)updateLightLevelAnimated:(char)arg1 lightLevel:(int)arg2 ;
-(void)moveToMapDisplayStyle:(unsigned)arg1 forChangeToLightLevel:(int)arg2 animation:(id)arg3 ;
-(void)didUnsuppress;
-(void)loadTitle;
-(id)newTraits;
-(void)configureNavigationController:(id)arg1 forLightLevel:(int)arg2 ;
-(/*^block*/id)presentInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(/*^block*/id)presentUnhandledInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(void)mapViewDidAnimateInAnnotationViews:(id)arg1 ;
-(void)setMapView:(id)arg1 ;
-(void)mapViewWillStartLoadingMap:(id)arg1 ;
-(void)mapViewDidFinishLoadingMap:(id)arg1 ;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(char)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

