/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@class VKPStyleProperties;

@interface VKPZoomProperty : PBCodable <NSCopying> {

	float _maxZ;
	float _minZ;
	VKPStyleProperties* _properties;

}

@property (assign,nonatomic) float minZ;                                   //@synthesize minZ=_minZ - In the implementation block
@property (assign,nonatomic) float maxZ;                                   //@synthesize maxZ=_maxZ - In the implementation block
@property (nonatomic,retain) VKPStyleProperties * properties;              //@synthesize properties=_properties - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(VKPStyleProperties *)properties;
-(void)setProperties:(VKPStyleProperties *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)minZ;
-(void)setMinZ:(float)arg1 ;
-(float)maxZ;
-(void)setMaxZ:(float)arg1 ;
-(void)applyTo:(id)arg1 zoom:(float)arg2 ;
@end

