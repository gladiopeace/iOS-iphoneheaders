/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, CKDPConfigurationFieldValue;

@interface CKDPConfigurationField : PBCodable <NSCopying> {

	NSString* _name;
	CKDPConfigurationFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPConfigurationFieldValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(CKDPConfigurationFieldValue *)value;
-(void)setValue:(CKDPConfigurationFieldValue *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
@end

