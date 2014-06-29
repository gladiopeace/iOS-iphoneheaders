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

@interface GEORPVisibleTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE157* _tileKeys;
	unsigned long long _tileKeysCount;
	unsigned long long _tileKeysSpace;
	unsigned _identifier;
	int _style;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) bool hasStyle; 
@property (assign,nonatomic) int style;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) bool hasIdentifier; 
@property (assign,nonatomic) unsigned identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long tileKeysCount; 
@property (nonatomic,readonly) SCD_Struct_GE157* tileKeys; 
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)style;
-(unsigned)identifier;
-(id)dictionaryRepresentation;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)clearTileKeys;
-(SCD_Struct_GE157*)tileKeys;
-(void)setTileKeys:(SCD_Struct_GE157*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasIdentifier:(bool)arg1 ;
-(bool)hasIdentifier;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)tileKeysCount;
-(SCD_Struct_GE157)tileKeyAtIndex:(unsigned long long)arg1 ;
-(void)addTileKey:(SCD_Struct_GE157)arg1 ;
-(void)setHasStyle:(bool)arg1 ;
-(bool)hasStyle;
@end

