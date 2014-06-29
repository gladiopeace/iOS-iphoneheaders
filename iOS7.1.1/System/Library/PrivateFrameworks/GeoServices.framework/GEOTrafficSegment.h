/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface GEOTrafficSegment : PBCodable <NSCopying> {

	int _speed;
	int _vertexCount;
	int _vertexOffset;
	int _width;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) int vertexOffset;              //@synthesize vertexOffset=_vertexOffset - In the implementation block
@property (assign,nonatomic) int vertexCount;               //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) bool hasSpeed; 
@property (assign,nonatomic) int speed;                     //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) bool hasWidth; 
@property (assign,nonatomic) int width;                     //@synthesize width=_width - In the implementation block
-(void)setVertexCount:(int)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSpeed:(int)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)speed;
-(int)width;
-(id)dictionaryRepresentation;
-(void)setWidth:(int)arg1 ;
-(void)setHasSpeed:(bool)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(bool)hasSpeed;
-(int)vertexCount;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasWidth:(bool)arg1 ;
-(bool)hasWidth;
-(void)setVertexOffset:(int)arg1 ;
-(int)vertexOffset;
@end

