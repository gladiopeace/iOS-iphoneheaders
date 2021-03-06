/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface CRLocation : PBCodable {

	double _latitude;
	double _longitude;
	double _timestamp;
	float _altitude;
	int _context;
	float _course;
	float _horizontalAccuracy;
	float _speed;
	float _verticalAccuracy;
	SCD_Struct_CR5 _has;

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
-(BOOL)hasContext;
-(void)setHasContext:(BOOL)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setSpeed:(float)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(int)context;
-(float)speed;
-(void)setContext:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAltitude;
-(void)setAltitude:(float)arg1 ;
-(void)setHorizontalAccuracy:(float)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setVerticalAccuracy:(float)arg1 ;
-(BOOL)hasCourse;
-(void)setCourse:(float)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(void)setHasSpeed:(BOOL)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
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

