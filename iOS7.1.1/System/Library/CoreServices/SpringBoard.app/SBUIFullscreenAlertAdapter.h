/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertAdapter.h>

@interface SBUIFullscreenAlertAdapter : SBAlertAdapter {

	BOOL _animatingDeactivation;
	BOOL _animatingActivation;

}
+(void)alertAdapterDisplayDidDisappear:(id)arg1 ;
+(void)activateAlertForController:(id)arg1 animated:(BOOL)arg2 animateCurrentDisplayOut:(BOOL)arg3 withDelay:(BOOL)arg4 isSlidingDisplay:(BOOL)arg5 ;
+(void)deactivateAlertForController:(id)arg1 animated:(BOOL)arg2 animateOldDisplayInWithStyle:(int)arg3 isSlidingDisplay:(BOOL)arg4 ;
+(id)_adapterForController:(id)arg1 ;
-(void)setDisplaySetting:(unsigned)arg1 flag:(BOOL)arg2 ;
-(BOOL)allowsEventOnlySuspension;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(BOOL)allowsStackingOfAlert:(id)arg1 ;
-(void)displayDidDisappear;
-(BOOL)currentlyAnimatingDeactivation;
-(BOOL)_shouldDismissSwitcherOnActivation;
-(BOOL)isCurrentlyAnimatingActivation;
-(void)_pluginViewDidAnimatedIn:(id)arg1 ;
-(void)_pluginViewAnimatedOut:(id)arg1 ;
-(void)_updateForTransparentDismiss:(id)arg1 ;
-(id)effectiveViewController;
-(void)prepareViewToAnimateIn;
-(id)initWithAlertController:(id)arg1 ;
-(void)prepareViewToAnimateOut;
-(void)setViewShouldAnimateIn:(BOOL)arg1 ;
-(void)dealloc;
-(void)deactivate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)activate;
-(id)display;
-(BOOL)viewIsReadyToBeRemoved;
-(void)setDisplay:(id)arg1 ;
-(void)animateViewIn;
-(void)animateViewOut;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(void)handleAutoLock;
-(BOOL)hasTranslucentBackground;
-(BOOL)handleMenuButtonTap;
@end

