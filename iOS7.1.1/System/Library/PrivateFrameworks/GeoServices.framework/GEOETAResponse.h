/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, GEOPlaceSearchResponse;

@interface GEOETAResponse : PBCodable <NSCopying> {

	SCD_Struct_GE59* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	NSMutableArray* _etaResults;
	GEOPlaceSearchResponse* _originPlaceSearchResponse;
	int _status;
	SCD_Struct_GE55 _has;

}

@property (assign,nonatomic) bool hasStatus; 
@property (assign,nonatomic) int status;                                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * etaResults;                                     //@synthesize etaResults=_etaResults - In the implementation block
@property (nonatomic,readonly) bool hasOriginPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * originPlaceSearchResponse;              //@synthesize originPlaceSearchResponse=_originPlaceSearchResponse - In the implementation block
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) SCD_Struct_GE59* problemDetails; 
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)clearProblemDetails;
-(unsigned long long)problemDetailsCount;
-(SCD_Struct_GE59)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)addProblemDetail:(SCD_Struct_GE59)arg1 ;
-(SCD_Struct_GE59*)problemDetails;
-(void)setProblemDetails:(SCD_Struct_GE59*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasStatus:(bool)arg1 ;
-(bool)hasStatus;
-(void)setEtaResults:(id)arg1 ;
-(void)setOriginPlaceSearchResponse:(id)arg1 ;
-(void)addEtaResult:(id)arg1 ;
-(unsigned long long)etaResultsCount;
-(void)clearEtaResults;
-(id)etaResultAtIndex:(unsigned long long)arg1 ;
-(bool)hasOriginPlaceSearchResponse;
-(id)etaResults;
-(id)originPlaceSearchResponse;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

