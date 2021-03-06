/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBActivateAppUnderLockScreenWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class SBApplication, SBUIAnimationController, NSString;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction <SBUIAnimationControllerObserver> {

	SBApplication* _fromApp;
	BOOL _workspaceAlreadyResumed;
	BOOL _animatedAppDeactivation;
	SBUIAnimationController* _animation;
	BOOL _suspendWorkspace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlertManager:(id)arg1 fromApplication:(id)arg2 toLockScreenController:(id)arg3 andApp:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_alertDidActivate;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)_didComplete;
-(void)_begin;
@end

