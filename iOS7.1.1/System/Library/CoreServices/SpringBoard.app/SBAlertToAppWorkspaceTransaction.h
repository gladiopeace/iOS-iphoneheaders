/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBToAppWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerDelegate.h>

@class SBAlert, SBPasscodeLockDisableAssertion, SBUIAnimationController;

@interface SBAlertToAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {

	SBAlert* _alert;
	SBPasscodeLockDisableAssertion* _siriUnlockAssertion;
	SBUIAnimationController* _animation;
	BOOL _preventAlertDeactivationForAnimation;
	BOOL _preventAlertDeactivationForAnimationLegacy;
	BOOL _animatedAppActivation;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingFromAssistant;
	BOOL _fadeAssistant;

}

@property (nonatomic,readonly) SBAlert * alert;              //@synthesize alert=_alert - In the implementation block
-(id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 alert:(id)arg3 toApplication:(id)arg4 activationHandler:(/*^block*/ id)arg5 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_transactionComplete;
-(BOOL)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2 ;
-(BOOL)selfApplicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2 ;
-(BOOL)selfApplicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)selfApplicationActivated:(id)arg1 ;
-(BOOL)selfApplicationLaunchDidFail:(id)arg1 ;
-(BOOL)selfApplicationExited:(id)arg1 ;
-(BOOL)selfAlertWillDeactivate:(id)arg1 ;
-(BOOL)selfAlertDidDeactivate:(id)arg1 ;
-(BOOL)shouldDismissSwitcher;
-(void)_endAnimation;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(void)_alertAnimationComplete:(id)arg1 ;
-(void)_deactivateAlertIfNecessary;
-(void)_handleFailure;
-(void)_commit;
-(id)alert;
-(void)dealloc;
-(id)debugDescription;
@end

