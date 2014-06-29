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

@class GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {

	unsigned _correctedSearchResultIndex;
	unsigned _originalSearchResultIndex;
	GEOPlaceSearchRequest* _placeSearchRequest;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSString* _preferredSearchDisplayLocation;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,readonly) bool hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest;                //@synthesize placeSearchRequest=_placeSearchRequest - In the implementation block
@property (nonatomic,readonly) bool hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse;              //@synthesize placeSearchResponse=_placeSearchResponse - In the implementation block
@property (assign,nonatomic) bool hasOriginalSearchResultIndex; 
@property (assign,nonatomic) unsigned originalSearchResultIndex;                        //@synthesize originalSearchResultIndex=_originalSearchResultIndex - In the implementation block
@property (assign,nonatomic) bool hasCorrectedSearchResultIndex; 
@property (assign,nonatomic) unsigned correctedSearchResultIndex;                       //@synthesize correctedSearchResultIndex=_correctedSearchResultIndex - In the implementation block
@property (nonatomic,readonly) bool hasPreferredSearchDisplayLocation; 
@property (nonatomic,retain) NSString * preferredSearchDisplayLocation;                 //@synthesize preferredSearchDisplayLocation=_preferredSearchDisplayLocation - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPlaceSearchRequest:(id)arg1 ;
-(bool)hasPlaceSearchRequest;
-(id)placeSearchRequest;
-(void)setPlaceSearchResponse:(id)arg1 ;
-(bool)hasPlaceSearchResponse;
-(id)placeSearchResponse;
-(void)setPreferredSearchDisplayLocation:(id)arg1 ;
-(void)setOriginalSearchResultIndex:(unsigned)arg1 ;
-(void)setHasOriginalSearchResultIndex:(bool)arg1 ;
-(bool)hasOriginalSearchResultIndex;
-(void)setCorrectedSearchResultIndex:(unsigned)arg1 ;
-(void)setHasCorrectedSearchResultIndex:(bool)arg1 ;
-(bool)hasCorrectedSearchResultIndex;
-(bool)hasPreferredSearchDisplayLocation;
-(unsigned)originalSearchResultIndex;
-(unsigned)correctedSearchResultIndex;
-(id)preferredSearchDisplayLocation;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

