/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray;

@interface GEOMapMatchRequest : PBRequest <NSCopying> {

	NSMutableArray* _locations;
	NSMutableArray* _waypoints;

}

@property (nonatomic,retain) NSMutableArray * waypoints;              //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
-(void)dealloc;
-(void)setLocations:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setWaypoints:(id)arg1 ;
-(void)addWaypoint:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(id)waypointAtIndex:(unsigned long long)arg1 ;
-(id)waypoints;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)addLocation:(id)arg1 ;
-(void)clearLocations;
-(bool)readFrom:(id)arg1 ;
-(unsigned long long)locationsCount;
-(id)locations;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

