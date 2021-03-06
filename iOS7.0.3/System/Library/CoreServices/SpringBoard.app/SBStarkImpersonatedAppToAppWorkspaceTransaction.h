/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAppToAppWorkspaceTransaction.h>

@class SBAlert;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction {

	SBAlert* _deactivatingAlert;
	BOOL _animatedAppActivation;

}
-(id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5 ;
-(void)_doCommit;
-(int)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(id)_newAnimationFromAppToApp;
-(id)_newAnimationFromAppToLauncher;
-(id)_newAnimationFromLauncherToApp;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_transactionComplete;
-(BOOL)selfApplicationLaunchDidFail:(id)arg1 ;
-(BOOL)selfApplicationExited:(id)arg1 ;
-(BOOL)selfStarkAlertDidDeactivate:(id)arg1 ;
-(void)_deactivateAlertIfPossible;
-(void)_handleFailureToLaunch;
-(BOOL)selfStarkAlertWillDeactivate:(id)arg1 ;
-(void)dealloc;
@end

