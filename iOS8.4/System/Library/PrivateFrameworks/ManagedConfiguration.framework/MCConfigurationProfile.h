/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCProfile.h>

@class NSArray, MCProfileServiceProfile;

@interface MCConfigurationProfile : MCProfile {

	NSArray* _payloads;
	NSArray* _managedPayloads;
	BOOL _isCloudProfile;
	BOOL _isCloudLocked;
	BOOL _isMDMProfile;
	MCProfileServiceProfile* _OTAProfile;

}

@property (nonatomic,retain) MCProfileServiceProfile * OTAProfile;              //@synthesize OTAProfile=_OTAProfile - In the implementation block
@property (assign,nonatomic) BOOL isCloudProfile;                               //@synthesize isCloudProfile=_isCloudProfile - In the implementation block
@property (assign,nonatomic) BOOL isCloudLocked;                                //@synthesize isCloudLocked=_isCloudLocked - In the implementation block
@property (assign,nonatomic) BOOL isMDMProfile;                                 //@synthesize isMDMProfile=_isMDMProfile - In the implementation block
-(id)description;
-(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
-(id)stubDictionary;
-(void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(id)_sortPayloads:(id)arg1 ;
-(id)payloads;
-(id)payloadWithUUID:(id)arg1 ;
-(SecCertificateRef)copyCertificateFromPayloadWithUUID:(id)arg1 ;
-(id)_subjectSummaryFromCertificate:(SecCertificateRef)arg1 ;
-(id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id*)arg3 ;
-(void)_sortPayloads;
-(id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1 ;
-(id)_localizedPayloadSummaryByType:(id)arg1 ;
-(id)managedPayloads;
-(id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1 ;
-(id)subjectSummaryFromCertificateWithPersistentID:(id)arg1 ;
-(BOOL)isManagedByProfileService;
-(id)localizedPayloadSummaryByType;
-(id)localizedManagedPayloadSummaryByType;
-(id)earliestCertificateExpiryDate;
-(MCProfileServiceProfile *)OTAProfile;
-(void)setOTAProfile:(MCProfileServiceProfile *)arg1 ;
-(BOOL)isCloudProfile;
-(void)setIsCloudProfile:(BOOL)arg1 ;
-(BOOL)isCloudLocked;
-(void)setIsCloudLocked:(BOOL)arg1 ;
-(BOOL)isMDMProfile;
-(void)setIsMDMProfile:(BOOL)arg1 ;
@end
