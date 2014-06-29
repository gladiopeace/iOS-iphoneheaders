/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFUISiriRemoteViewControllerDelegate <NSObject>
@required
-(void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
-(void)dismissSiriRemoteViewController:(id)arg1;
-(void)startGuidedAccessForRemoteViewController:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
-(void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
-(void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
-(bool)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3;
-(void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1;
-(void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2;
-(void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(bool)arg2;
-(void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(bool)arg2;
-(void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(bool)arg2;
-(void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(bool)arg2;
-(void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
-(void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
-(void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(bool)arg2;
-(void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(bool)arg2;
-(void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(bool)arg2;
-(void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
-(bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(bool)arg3;
-(bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(bool)arg4;
-(void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2;
@end

