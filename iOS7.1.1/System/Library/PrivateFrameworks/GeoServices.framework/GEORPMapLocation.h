/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOLatLng, NSData, GEOMapRegion;

@interface GEORPMapLocation : PBCodable <NSCopying> {

	GEOLatLng* _coordinate;
	NSData* _image;
	GEOMapRegion* _mapRegion;
	float _zoomLevel;
	SCD_Struct_GE55 _has;

}

@property (nonatomic,readonly) bool hasImage; 
@property (nonatomic,retain) NSData * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) bool hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) bool hasZoomLevel; 
@property (assign,nonatomic) float zoomLevel;                       //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) bool hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;              //@synthesize mapRegion=_mapRegion - In the implementation block
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)image;
-(id)dictionaryRepresentation;
-(bool)hasMapRegion;
-(bool)hasImage;
-(bool)hasCoordinate;
-(void)setHasZoomLevel:(bool)arg1 ;
-(bool)hasZoomLevel;
-(bool)readFrom:(id)arg1 ;
-(id)coordinate;
-(float)zoomLevel;
-(void)setCoordinate:(id)arg1 ;
-(id)mapRegion;
-(void)setMapRegion:(id)arg1 ;
-(void)setZoomLevel:(float)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

