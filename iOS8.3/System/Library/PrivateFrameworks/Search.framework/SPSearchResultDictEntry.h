/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:30:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Search/NSCopying.h>

@class NSData, NSString;

@interface SPSearchResultDictEntry : PBCodable <NSCopying> {

	NSData* _encodedValue;
	NSString* _key;

}

@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * encodedValue;              //@synthesize encodedValue=_encodedValue - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)setEncodedValue:(NSData *)arg1 ;
-(NSData *)encodedValue;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

