/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBAlertAdapter.h>
#import <SpringBoard/_SBRemoteAlertHostViewControllerDelegate.h>

@class _SBRemoteAlertHostViewController, NSString;

@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate> {

	_SBRemoteAlertHostViewController* _remoteAlertHostViewController;
	NSString* _impersonatedApplicationBundleID;
	BOOL _activated;
	BOOL _dismissWithHomeButton;

}
+(void)requestRemoteViewService:(id)arg1 options:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_impersonatesApplicationWithBundleID;
-(BOOL)matchesRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(void)remoteAlertWantsToAllowBanners:(BOOL)arg1 ;
-(void)remoteAlertDidTerminateWithError:(id)arg1 ;
-(id)_initWithRemoteAlertHostViewController:(id)arg1 ;
-(void)_setImpersonatedApplicationBundleID:(id)arg1 ;
-(void)_setDismissWithHomeButton:(BOOL)arg1 ;
-(BOOL)isRemote;
-(void)dealloc;
-(void)deactivate;
-(void)activate;
-(id)initWithViewController:(id)arg1 ;
-(BOOL)handleMenuButtonTap;
@end

