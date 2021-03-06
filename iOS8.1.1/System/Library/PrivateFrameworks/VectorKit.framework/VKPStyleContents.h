/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@class VKPStyleProperties, NSMutableArray;

@interface VKPStyleContents : PBCodable <NSCopying> {

	VKPStyleProperties* _properties;
	NSMutableArray* _zooms;

}

@property (nonatomic,readonly) BOOL hasProperties; 
@property (nonatomic,retain) VKPStyleProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMutableArray * zooms;                       //@synthesize zooms=_zooms - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(VKPStyleProperties *)properties;
-(void)setProperties:(VKPStyleProperties *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZooms:(NSMutableArray *)arg1 ;
-(void)addZooms:(id)arg1 ;
-(unsigned long long)zoomsCount;
-(void)clearZooms;
-(id)zoomsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasProperties;
-(NSMutableArray *)zooms;
@end

