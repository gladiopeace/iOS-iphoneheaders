/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:14:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCACAccountPayloadHandler.h>
#import <DAAccountAuthenticator/DAValidityCheckConsumer.h>

@protocol OS_dispatch_semaphore;
@class NSError, NSObject;

@interface MCNewCalDAVAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer> {

	BOOL _validationComplete;
	NSError* _validationError;
	NSObject<OS_dispatch_semaphore>* _doneSema;

}
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(BOOL)arg2 ;
-(id)_installedAccount;
-(id)_accountFromPayloadWithUserInputResponses:(id)arg1 ;
-(void)_preflightWithAccount:(id)arg1 ;
-(void)remove;
-(void).cxx_destruct;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(BOOL)isInstalled;
@end

