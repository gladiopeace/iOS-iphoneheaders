/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface GEOLatLng : PBCodable <NSCopying> {

	double _lat;
	double _lng;

}

@property (assign,nonatomic) double lat;              //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lng;              //@synthesize lng=_lng - In the implementation block
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(bool)readFrom:(id)arg1 ;
-(double)lat;
-(double)lng;
-(void)setLat:(double)arg1 ;
-(void)setLng:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

