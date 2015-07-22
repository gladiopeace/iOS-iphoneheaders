/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject;

@interface GEOMapAccess : GEOMapRequestManager {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<GEOMapAccessRestrictions> _restrictions;
	/*^block*/id _tileErrorHandler;

}

@property (nonatomic,readonly) char allowsNetworkTileLoad; 
@property (assign,nonatomic) id<GEOMapAccessRestrictions> restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,copy) id tileErrorHandler;                                      //@synthesize tileErrorHandler=_tileErrorHandler - In the implementation block
+(char)supportsRealisticMap;
+(id)realisticMap;
-(void)dealloc;
-(id)init;
-(id)callbackQueue;
-(void)setCallbackQueue:(id)arg1 ;
-(id<GEOMapAccessRestrictions>)restrictions;
-(id)findRoadEdgesWithin:(double)arg1 of:(SCD_Struct_GE15)arg2 edgeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findClosestNamedFeaturesAtCoordinate:(SCD_Struct_GE15)arg1 roadHandler:(/*^block*/id)arg2 pointHandler:(/*^block*/id)arg3 polygonHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findClosestRoadAtCoordinate:(SCD_Struct_GE15)arg1 roadHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsWithin:(double)arg1 of:(SCD_Struct_GE15)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)buildMapEdgeFrom:(const SCD_Struct_GE157*)arg1 edgeHandler:(/*^block*/id)arg2 ;
-(id)tileErrorHandler;
-(void)setTileErrorHandler:(id)arg1 ;
-(void)setRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(id)findRoadTilesWithin:(double)arg1 of:(SCD_Struct_GE15)arg2 tileHander:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)allowsNetworkTileLoad;
@end
