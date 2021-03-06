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

@interface GEOLocationShiftResponse : PBCodable <NSCopying> {

	SCD_Struct_GE76 _shiftedPixel;

}

@property (readonly) SCD_Struct_GE12 shiftedCoordinate; 
@property (assign,nonatomic) SCD_Struct_GE77 shiftedPixel;              //@synthesize shiftedPixel=_shiftedPixel - In the implementation block
-(SCD_Struct_GE12)shiftedCoordinate;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE77)shiftedPixel;
-(void)setShiftedPixel:(SCD_Struct_GE77)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

