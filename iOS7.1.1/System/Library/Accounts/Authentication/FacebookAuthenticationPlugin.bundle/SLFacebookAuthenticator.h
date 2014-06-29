/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Accounts/Authentication/FacebookAuthenticationPlugin.bundle/FacebookAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSString;

@interface SLFacebookAuthenticator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/ id _completionHandler;
	NSString* _machineId;
	long long _retryCount;

}
-(id)_errorForErrorCode:(int)arg1 ;
-(id)_machineId;
-(void)_setMachineId:(id)arg1 ;
-(id)_sanitizeResponseForLogging:(id)arg1 ;
-(void)_processResponseDictionary:(id)arg1 ;
-(bool)_isErrorTemporary:(int)arg1 ;
-(bool)_isLoginApprovalRequired:(int)arg1 ;
-(id)_machineIdFromResponseDictionary:(id)arg1 ;
-(id)_fetchMeInfoForAccount:(id)arg1 ;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(void)signInWithCompletion:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
-(id)initWithAccount:(id)arg1 ;
@end

