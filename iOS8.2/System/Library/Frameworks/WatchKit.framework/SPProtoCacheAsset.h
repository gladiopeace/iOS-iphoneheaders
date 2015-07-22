/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <WatchKit/NSCopying.h>

@class NSString;

@interface SPProtoCacheAsset : PBCodable <NSCopying> {

	double _accessDate;
	unsigned long long _size;
	NSString* _key;
	unsigned _state;

}

@property (assign,nonatomic) unsigned state;                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double accessDate;                    //@synthesize accessDate=_accessDate - In the implementation block
-(unsigned long long)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(double)accessDate;
-(void)setAccessDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
