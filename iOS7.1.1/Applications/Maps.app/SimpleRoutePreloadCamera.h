/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RoutePreloadCamera.h>

@interface SimpleRoutePreloadCamera : NSObject <RoutePreloadCamera> {

	unsigned _zoomLevel;

}
-(id)initWithZoomLevel:(unsigned)arg1 ;
-(void)implicateTilesForLocation:(id)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(BOOL)arg4 into:(id)arg5 ;
-(unsigned)zoomLevel;
@end

