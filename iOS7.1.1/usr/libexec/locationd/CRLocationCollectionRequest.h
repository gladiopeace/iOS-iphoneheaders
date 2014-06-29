/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray, CRMeta;

@interface CRLocationCollectionRequest : PBRequest <NSCopying> {

	NSString* _appBundleId;
	NSMutableArray* _locations;
	int _mcc;
	CRMeta* _meta;
	int _mnc;
	int _rat;
	NSString* _tripId;
	SCD_Struct_CR7 _has;

}

@property (nonatomic,retain) CRMeta * meta;                           //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                  //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,retain) NSString * tripId;                       //@synthesize tripId=_tripId - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                 //@synthesize rat=_rat - In the implementation block
@property (assign,nonatomic) BOOL hasMcc; 
@property (assign,nonatomic) int mcc;                                 //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) BOOL hasMnc; 
@property (assign,nonatomic) int mnc;                                 //@synthesize mnc=_mnc - In the implementation block
-(BOOL)hasMcc;
-(int)mcc;
-(int)mnc;
-(void)setMcc:(int)arg1 ;
-(void)setMnc:(int)arg1 ;
-(void)setRat:(int)arg1 ;
-(void)setHasRat:(BOOL)arg1 ;
-(BOOL)hasRat;
-(int)rat;
-(void)setMeta:(id)arg1 ;
-(id)meta;
-(void)setTripId:(id)arg1 ;
-(void)setHasMcc:(BOOL)arg1 ;
-(void)setHasMnc:(BOOL)arg1 ;
-(BOOL)hasMnc;
-(id)tripId;
-(void)dealloc;
-(void)setLocations:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)locationAtIndex:(unsigned)arg1 ;
-(void)addLocation:(id)arg1 ;
-(void)clearLocations;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)locationsCount;
-(id)locations;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAppBundleId:(id)arg1 ;
-(BOOL)hasAppBundleId;
-(id)appBundleId;
@end

