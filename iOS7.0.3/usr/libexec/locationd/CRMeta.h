/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CRMeta : PBCodable {

	long long _submissionId;
	NSString* _probeId;
	NSString* _productId;
	NSString* _softwareVersion;
	SCD_Struct_CR7 _has;

}

@property (nonatomic,retain) NSString * productId;                    //@synthesize productId=_productId - In the implementation block
@property (nonatomic,retain) NSString * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSubmissionId; 
@property (assign,nonatomic) long long submissionId;                  //@synthesize submissionId=_submissionId - In the implementation block
@property (nonatomic,readonly) BOOL hasProbeId; 
@property (nonatomic,retain) NSString * probeId;                      //@synthesize probeId=_probeId - In the implementation block
-(void)setProductId:(id)arg1 ;
-(void)setProbeId:(id)arg1 ;
-(id)productId;
-(BOOL)hasSubmissionId;
-(long long)submissionId;
-(void)setSubmissionId:(long long)arg1 ;
-(BOOL)hasProbeId;
-(id)probeId;
-(void)setHasSubmissionId:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setSoftwareVersion:(id)arg1 ;
-(id)softwareVersion;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
