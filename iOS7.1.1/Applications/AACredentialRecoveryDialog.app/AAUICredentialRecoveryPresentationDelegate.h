/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AACredentialRecoveryDialog.app/AACredentialRecoveryDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AAUICredentialRecoveryPresentationDelegate
@optional
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;

@required
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
@end

