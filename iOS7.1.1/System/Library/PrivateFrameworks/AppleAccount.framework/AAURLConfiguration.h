/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface AAURLConfiguration : NSObject {

	NSDictionary* _urlDictionary;

}

@property (nonatomic,readonly) NSString * accountCreationURL; 
@property (nonatomic,readonly) NSString * updateAccountURL; 
@property (nonatomic,readonly) NSString * registerURL; 
@property (nonatomic,readonly) NSString * validateURL; 
@property (nonatomic,readonly) NSString * accountCreationUIURL; 
@property (nonatomic,readonly) NSString * updateAccountUIURL; 
@property (nonatomic,readonly) NSString * signInURL; 
@property (nonatomic,readonly) NSString * fetchAccountSettingsURL; 
@property (nonatomic,readonly) NSString * authenticateURL; 
@property (nonatomic,readonly) NSString * addEmailURL; 
@property (nonatomic,readonly) NSString * initiateValidateEmailURL; 
@property (nonatomic,readonly) NSString * completeValidateEmailURL; 
@property (nonatomic,readonly) NSString * mobileMeOfferAlertURL; 
@property (nonatomic,readonly) NSString * signingSessionCertURL; 
@property (nonatomic,readonly) NSString * signingSessionURL; 
@property (nonatomic,readonly) NSString * emailLookupURL; 
@property (nonatomic,readonly) NSString * genericTermsURL; 
@property (nonatomic,readonly) NSString * ckAppLoginURL; 
@property (nonatomic,readonly) NSString * ckAppLoginCheckURL; 
@property (nonatomic,readonly) NSString * fmipAuthenticate; 
@property (nonatomic,readonly) NSString * iForgotUIURL; 
@property (nonatomic,readonly) NSString * existingAppleIDTermsUIURL; 
@property (nonatomic,readonly) NSString * finishProvisioningURL; 
@property (nonatomic,readonly) NSString * syncMachineURL; 
@property (nonatomic,readonly) NSString * loginDelegatesURL; 
@property (nonatomic,readonly) NSString * deviceListURL; 
@property (nonatomic,readonly) NSString * sendCodeURL; 
@property (nonatomic,readonly) NSString * verifyCodeURL; 
+(id)urlConfiguration;
+(void)reset;
-(id)iForgotUIURL;
-(id)initWithDictionary:(id)arg1 ;
-(void).cxx_destruct;
-(id)signingSessionCertURL;
-(id)signingSessionURL;
-(id)authenticateURL;
-(id)existingAppleIDTermsUIURL;
-(id)loginDelegatesURL;
-(id)genericTermsURL;
-(id)ckAppLoginURL;
-(id)accountCreationUIURL;
-(id)updateAccountUIURL;
-(id)addEmailURL;
-(id)signInURL;
-(id)fetchAccountSettingsURL;
-(id)initiateValidateEmailURL;
-(id)completeValidateEmailURL;
-(id)mobileMeOfferAlertURL;
-(id)emailLookupURL;
-(id)fmipAuthenticate;
-(id)finishProvisioningURL;
-(id)syncMachineURL;
-(id)accountCreationURL;
-(id)updateAccountURL;
-(id)registerURL;
-(id)validateURL;
-(id)ckAppLoginCheckURL;
-(id)deviceListURL;
-(id)sendCodeURL;
-(id)verifyCodeURL;
@end

