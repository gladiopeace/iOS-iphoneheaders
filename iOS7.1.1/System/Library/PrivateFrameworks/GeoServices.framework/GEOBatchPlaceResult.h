/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOPlaceResult;

@interface GEOBatchPlaceResult : PBCodable <NSCopying> {

	GEOPlaceResult* _placeResult;
	int _statusCode;
	SCD_Struct_GE55 _has;

}

@property (assign,nonatomic) bool hasStatusCode; 
@property (assign,nonatomic) int statusCode;                            //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) bool hasPlaceResult; 
@property (nonatomic,retain) GEOPlaceResult * placeResult;              //@synthesize placeResult=_placeResult - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(bool)arg1 ;
-(bool)hasStatusCode;
-(void)setPlaceResult:(id)arg1 ;
-(bool)hasPlaceResult;
-(bool)readFrom:(id)arg1 ;
-(id)placeResult;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

