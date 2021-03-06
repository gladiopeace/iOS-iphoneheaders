/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKLocationManagerObserver.h>

@class GEOPlace, NSString;

@interface DistanceDetailProvider : NSObject <MKLocationManagerObserver> {

	GEOPlace* _place;
	NSString* _distanceToPlace;
	BOOL _useMetric;
	BOOL _useYardsForShortDistances;
	/*^block*/ id _updateHandler;

}

@property (retain) GEOPlace * place;              //@synthesize place=_place - In the implementation block
@property (copy) id updateHandler;                //@synthesize updateHandler=_updateHandler - In the implementation block
+(BOOL)infoAvailable;
-(void)beginUpdateWithHandler:(/*^block*/ id)arg1 ;
-(void)_handleLocaleChangeNotification:(id)arg1 ;
-(void)_updateDistanceToPlace;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)dealloc;
-(void)endUpdates;
-(void)setPlace:(id)arg1 ;
-(void)setUpdateHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)updateHandler;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(id)place;
@end

