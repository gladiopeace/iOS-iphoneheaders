/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>
#import <MapsSupport/SYObject.h>

@class PBUnknownFields, MSPBookmarkStorage, MSPPinStorage, MSPSearchRequestStorage, NSString;

@interface MSPCompanionSyncedItem : PBCodable <NSCopying, SYObject> {

	PBUnknownFields* _unknownFields;
	MSPBookmarkStorage* _bookmark;
	MSPPinStorage* _pin;
	MSPSearchRequestStorage* _searchRequest;
	NSString* _syncId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSyncId; 
@property (nonatomic,retain) NSString * syncId;                                    //@synthesize syncId=_syncId - In the implementation block
@property (nonatomic,readonly) BOOL hasBookmark; 
@property (nonatomic,retain) MSPBookmarkStorage * bookmark;                        //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasPin; 
@property (nonatomic,retain) MSPPinStorage * pin;                                  //@synthesize pin=_pin - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchRequest; 
@property (nonatomic,retain) MSPSearchRequestStorage * searchRequest;              //@synthesize searchRequest=_searchRequest - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setPin:(MSPPinStorage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(MSPPinStorage *)pin;
-(MSPBookmarkStorage *)bookmark;
-(NSString *)syncId;
-(void)setSyncId:(NSString *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSearchRequest:(MSPSearchRequestStorage *)arg1 ;
-(BOOL)hasSyncId;
-(BOOL)hasBookmark;
-(BOOL)hasPin;
-(BOOL)hasSearchRequest;
-(MSPSearchRequestStorage *)searchRequest;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBookmark:(MSPBookmarkStorage *)arg1 ;
@end

