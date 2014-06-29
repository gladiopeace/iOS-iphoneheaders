/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class VKPGenericShieldStyleInfo, NSString, NSMutableArray;

@interface VKPShield : PBCodable <NSCopying> {

	VKPGenericShieldStyleInfo* _genericShieldStyleInfo;
	NSString* _identifier;
	NSMutableArray* _variants;

}

@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * variants;                                       //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) bool hasGenericShieldStyleInfo; 
@property (nonatomic,retain) VKPGenericShieldStyleInfo * genericShieldStyleInfo;              //@synthesize genericShieldStyleInfo=_genericShieldStyleInfo - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)identifier;
-(id)dictionaryRepresentation;
-(void)setIdentifier:(id)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)variants;
-(bool)hasGenericShieldStyleInfo;
-(id)genericShieldStyleInfo;
-(void)setVariants:(id)arg1 ;
-(void)setGenericShieldStyleInfo:(id)arg1 ;
-(void)addVariants:(id)arg1 ;
-(unsigned long long)variantsCount;
-(void)clearVariants;
-(id)variantsAtIndex:(unsigned long long)arg1 ;
@end

