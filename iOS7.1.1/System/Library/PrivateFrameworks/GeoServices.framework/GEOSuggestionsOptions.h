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

@class NSData;

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {

	int _entriesType;
	int _listType;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) bool hasListType; 
@property (assign,nonatomic) int listType;                                   //@synthesize listType=_listType - In the implementation block
@property (assign,nonatomic) bool hasEntriesType; 
@property (assign,nonatomic) int entriesType;                                //@synthesize entriesType=_entriesType - In the implementation block
@property (nonatomic,readonly) bool hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                    //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) bool hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;               //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSuggestionMetadata:(id)arg1 ;
-(bool)hasSuggestionMetadata;
-(id)suggestionMetadata;
-(void)setSuggestionEntryMetadata:(id)arg1 ;
-(bool)hasSuggestionEntryMetadata;
-(id)suggestionEntryMetadata;
-(void)setListType:(int)arg1 ;
-(void)setHasListType:(bool)arg1 ;
-(bool)hasListType;
-(void)setEntriesType:(int)arg1 ;
-(void)setHasEntriesType:(bool)arg1 ;
-(bool)hasEntriesType;
-(int)listType;
-(int)entriesType;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

