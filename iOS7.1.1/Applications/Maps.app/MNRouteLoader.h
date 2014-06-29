/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MNRouteManager;

@interface MNRouteLoader : NSObject {

	MNRouteManager* _routeManager;

}

@property (nonatomic,readonly) MNRouteManager * routeManager;              //@synthesize routeManager=_routeManager - In the implementation block
-(id)routeManager;
-(id)initWithDirectionsFrom:(id)arg1 to:(id)arg2 mapRegion:(id)arg3 type:(int)arg4 fromCurrentLocation:(BOOL)arg5 preloadRoutes:(BOOL)arg6 allowAlternateTypes:(BOOL)arg7 tracePlayer:(id)arg8 withFeedback:(id)arg9 ;
-(void)loadMaxRoutes:(unsigned)arg1 errorHandler:(/*^block*/ id)arg2 recordTrace:(BOOL)arg3 ;
-(void).cxx_destruct;
@end

