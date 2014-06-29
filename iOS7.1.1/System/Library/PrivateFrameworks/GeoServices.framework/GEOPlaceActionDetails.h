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

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {

	unsigned long long _businessID;
	long long _placeID;
	double _searchResponseRelativeTimestamp;
	int _localSearchProviderID;
	int _resultIndex;
	int _sequenceNumber;
	SCD_Struct_GE56 _has;

}

@property (assign,nonatomic) bool hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                        //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) bool hasPlaceID; 
@property (assign,nonatomic) long long placeID;                                    //@synthesize placeID=_placeID - In the implementation block
@property (assign,nonatomic) bool hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                            //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (assign,nonatomic) bool hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) bool hasSearchResponseRelativeTimestamp; 
@property (assign,nonatomic) double searchResponseRelativeTimestamp;               //@synthesize searchResponseRelativeTimestamp=_searchResponseRelativeTimestamp - In the implementation block
@property (assign,nonatomic) bool hasResultIndex; 
@property (assign,nonatomic) int resultIndex;                                      //@synthesize resultIndex=_resultIndex - In the implementation block
-(int)sequenceNumber;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(bool)arg1 ;
-(bool)hasLocalSearchProviderID;
-(int)localSearchProviderID;
-(void)setSequenceNumber:(int)arg1 ;
-(void)setHasSequenceNumber:(bool)arg1 ;
-(bool)hasSequenceNumber;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setHasBusinessID:(bool)arg1 ;
-(void)setPlaceID:(long long)arg1 ;
-(void)setHasPlaceID:(bool)arg1 ;
-(bool)hasPlaceID;
-(long long)placeID;
-(void)setSearchResponseRelativeTimestamp:(double)arg1 ;
-(void)setHasSearchResponseRelativeTimestamp:(bool)arg1 ;
-(bool)hasSearchResponseRelativeTimestamp;
-(void)setResultIndex:(int)arg1 ;
-(void)setHasResultIndex:(bool)arg1 ;
-(bool)hasResultIndex;
-(double)searchResponseRelativeTimestamp;
-(int)resultIndex;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(bool)hasBusinessID;
-(unsigned long long)businessID;
@end

