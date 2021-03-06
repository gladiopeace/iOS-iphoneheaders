/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <Maps/MKETAUpdaterDelegate.h>

@protocol MNETAManagerDelegate;
@class MKETAUpdater, NSMapTable, MNRouteSet;

@interface MNETAManager : NSObject <GEOResourceManifestTileGroupObserver, MKETAUpdaterDelegate> {

	MKETAUpdater* _etaUpdater;
	NSMapTable* _routesStepsLookup;
	MNRouteSet* _currentRouteSet;
	<MNETAManagerDelegate>* _delegate;
	int _etaBehavior;

}

@property (assign,nonatomic,__weak) <MNETAManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int etaBehavior;                                       //@synthesize etaBehavior=_etaBehavior - In the implementation block
-(void)updateCurrentRoute:(id)arg1 ;
-(void)updateUserLocation:(id)arg1 routeMatch:(id)arg2 ;
-(void)useRouteSet:(id)arg1 ;
-(void)setEtaBehavior:(int)arg1 ;
-(void)_updateRequestInterval;
-(BOOL)_updateRouteWithETATrafficUpdateResponse:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3 ;
-(void)_createCurrentRouteStepsLookup;
-(void)_updateRouteStepsLookupWithContingentRoutes;
-(int)etaBehavior;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(BOOL)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(void)startUpdateRequests;
-(void)stopUpdateRequests;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)reset;
-(void).cxx_destruct;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end

