/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface CRLocation : PBCodable <NSCopying> {

	double _latitude;
	double _longitude;
	double _timestamp;
	float _altitude;
	int _context;
	float _course;
	float _horizontalAccuracy;
	float _speed;
	float _verticalAccuracy;
	SCD_Struct_CR6 _has;

}

@property (assign,nonatomic) double latitude;                       //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                      //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) float altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) float verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) float speed;                           //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) float course;                          //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) BOOL hasContext; 
@property (assign,nonatomic) int context;                           //@synthesize context=_context - In the implementation block
-(void)setHasContext:(BOOL)arg1 ;
-(BOOL)hasContext;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setSpeed:(float)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)context;
-(float)speed;
-(void)setContext:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAltitude:(float)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setHorizontalAccuracy:(float)arg1 ;
-(void)setVerticalAccuracy:(float)arg1 ;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setHasSpeed:(BOOL)arg1 ;
-(void)setCourse:(float)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
-(BOOL)hasCourse;
-(BOOL)readFrom:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(BOOL)hasSpeed;
-(float)horizontalAccuracy;
-(float)verticalAccuracy;
-(float)altitude;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)course;
@end

