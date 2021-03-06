/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <companioncamerad/companioncamerad-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <companioncamerad/NSCopying.h>

@interface NCCameraStateChangeResponse : PBCodable <NSCopying> {

	BOOL _acknowledge;
	SCD_Struct_NC3 _has;

}

@property (assign,nonatomic) BOOL hasAcknowledge; 
@property (assign,nonatomic) BOOL acknowledge;                 //@synthesize acknowledge=_acknowledge - In the implementation block
-(void)setAcknowledge:(BOOL)arg1 ;
-(void)setHasAcknowledge:(BOOL)arg1 ;
-(BOOL)hasAcknowledge;
-(BOOL)acknowledge;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

