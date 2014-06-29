/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GEOCorrectedField : PBCodable <NSCopying> {

	NSString* _correctedValue;
	NSString* _displayName;
	NSString* _objectName;
	bool _isMarkedIncorrect;
	SCD_Struct_GE55 _has;

}

@property (nonatomic,retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) bool hasObjectName; 
@property (nonatomic,retain) NSString * objectName;                  //@synthesize objectName=_objectName - In the implementation block
@property (nonatomic,readonly) bool hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue;              //@synthesize correctedValue=_correctedValue - In the implementation block
@property (assign,nonatomic) bool hasIsMarkedIncorrect; 
@property (assign,nonatomic) bool isMarkedIncorrect;                 //@synthesize isMarkedIncorrect=_isMarkedIncorrect - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)setCorrectedValue:(id)arg1 ;
-(bool)hasCorrectedValue;
-(id)correctedValue;
-(void)setIsMarkedIncorrect:(bool)arg1 ;
-(void)setHasIsMarkedIncorrect:(bool)arg1 ;
-(bool)hasIsMarkedIncorrect;
-(bool)isMarkedIncorrect;
-(void)setObjectName:(id)arg1 ;
-(bool)hasObjectName;
-(id)objectName;
-(bool)readFrom:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

