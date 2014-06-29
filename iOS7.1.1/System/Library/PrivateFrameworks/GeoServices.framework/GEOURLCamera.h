/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface GEOURLCamera : PBCodable <NSCopying> {

	double _altitude;
	double _heading;
	double _latitude;
	double _longitude;
	double _pitch;
	SCD_Struct_GE58 _has;

}

@property (assign,nonatomic) bool hasLatitude; 
@property (assign,nonatomic) double latitude;                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) bool hasLongitude; 
@property (assign,nonatomic) double longitude;               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) bool hasHeading; 
@property (assign,nonatomic) double heading;                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) bool hasPitch; 
@property (assign,nonatomic) double pitch;                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) bool hasAltitude; 
@property (assign,nonatomic) double altitude;                //@synthesize altitude=_altitude - In the implementation block
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAltitude:(double)arg1 ;
-(void)setHasAltitude:(bool)arg1 ;
-(bool)hasAltitude;
-(void)setHeading:(double)arg1 ;
-(void)setHasHeading:(bool)arg1 ;
-(bool)hasHeading;
-(bool)hasLatitude;
-(bool)hasLongitude;
-(void)setHasLatitude:(bool)arg1 ;
-(void)setHasLongitude:(bool)arg1 ;
-(void)setHasPitch:(bool)arg1 ;
-(bool)hasPitch;
-(bool)readFrom:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(double)altitude;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
-(double)heading;
@end

