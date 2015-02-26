/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthentication.bundle/AppleIDAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDAccountAuthenticationPlugin <NSObject>
@optional
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)isPushSupportedForAccount:(id)arg1;
-(id)credentialForAccount:(id)arg1 client:(id)arg2;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4;
-(void)verifyCredentialsForAccount:(id)arg1 client:(id)arg2 withHandler:(/*^block*/id)arg3;
-(id)renewalIDForAccount:(id)arg1;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3;

@end
