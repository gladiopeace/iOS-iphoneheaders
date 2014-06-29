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

@class NSMutableArray, NSString;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {

	SCD_Struct_GE57* _attributionRequirements;
	NSMutableArray* _attributionApps;
	NSMutableArray* _localizedAttributions;
	NSString* _sourceIdentifier;
	unsigned _sourceVersion;

}

@property (nonatomic,retain) NSString * sourceIdentifier;                                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned sourceVersion;                                         //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedAttributions;                         //@synthesize localizedAttributions=_localizedAttributions - In the implementation block
@property (nonatomic,readonly) unsigned long long attributionRequirementsCount; 
@property (nonatomic,readonly) int* attributionRequirements; 
@property (nonatomic,retain) NSMutableArray * attributionApps;                               //@synthesize attributionApps=_attributionApps - In the implementation block
-(id)bestLocalizedAttribution;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)sourceVersion;
-(void)setSourceVersion:(unsigned)arg1 ;
-(void)setSourceIdentifier:(id)arg1 ;
-(void)setLocalizedAttributions:(id)arg1 ;
-(void)setAttributionApps:(id)arg1 ;
-(void)addLocalizedAttribution:(id)arg1 ;
-(void)addAttributionApps:(id)arg1 ;
-(unsigned long long)localizedAttributionsCount;
-(void)clearLocalizedAttributions;
-(id)localizedAttributionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionRequirementsCount;
-(void)clearAttributionRequirements;
-(int)attributionRequirementsAtIndex:(unsigned long long)arg1 ;
-(void)addAttributionRequirements:(int)arg1 ;
-(unsigned long long)attributionAppsCount;
-(void)clearAttributionApps;
-(id)attributionAppsAtIndex:(unsigned long long)arg1 ;
-(int*)attributionRequirements;
-(void)setAttributionRequirements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)localizedAttributions;
-(id)attributionApps;
-(bool)readFrom:(id)arg1 ;
-(id)sourceIdentifier;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

