/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:14:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCACAccountPayloadHandler.h>
#import <DAAccountAuthenticator/DAValidityCheckConsumer.h>
#import <DADaemonEAS/ASPolicyPreflighterDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSError, NSDictionary, NSData, ASAccount;

@interface MCNewEASAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer, ASPolicyPreflighterDelegate> {

	NSObject<OS_dispatch_semaphore>* _validationSema;
	BOOL _validationComplete;
	NSError* _validationError;
	NSObject<OS_dispatch_semaphore>* _preflightSema;
	BOOL _policyPreflightComplete;
	NSError* _policyPreflightError;
	NSDictionary* _policyPreflightFeatures;
	NSData* _embeddedCertificatePersistentID;
	ASAccount* _account;

}
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(BOOL)stageForInstallationWithInstaller:(id)arg1 interactionClient:(id)arg2 outError:(id*)arg3 ;
-(void)unstageFromInstallationWithInstaller:(id)arg1 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(id)_installedAccount;
-(void)_preflightWithAccount:(id)arg1 ;
-(BOOL)_isConfiguredWithSCEP;
-(id)_preflightTimePersistentIDForIdentityCertificateUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(id)_accountFromPayloadWithUserInputResponses:(id)arg1 identityPersistentID:(id)arg2 SMIMESigningIdentityPersistentID:(id)arg3 SMIMEEncryptionIdentityPersistentID:(id)arg4 ;
-(void)_preflightWithPreflighter:(id)arg1 ;
-(id)_getClientRestrictionsFromServerCertificatePersistentID:(id)arg1 SMIMESigningIdentityPersistentID:(id)arg2 SMIMEEncryptionIdentityPersistentID:(id)arg3 outError:(id*)arg4 ;
-(id)_installTimePersistentIDForIdentityCertificateOutError:(id*)arg1 ;
-(id)_errorFromPolicyPreflightError:(id)arg1 ;
-(void)preflighterSuccessWithoutPolicyUpdate:(id)arg1 ;
-(void)remove;
-(void).cxx_destruct;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)preflighter:(id)arg1 error:(id)arg2 ;
-(void)preflighterRemoteWipeRequested:(id)arg1 ;
-(void)preflighter:(id)arg1 needsComplianceWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 ;
-(void)preflighter:(id)arg1 successWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 policyKey:(id)arg4 ;
-(void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1 ;
-(BOOL)isInstalled;
@end

