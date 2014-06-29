/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIPluginControllerHost.h>

@class SBUIPluginController;

@interface SBUIPluginHost : NSObject <SBUIPluginControllerHost> {

	SBUIPluginController* _plugin;
	BOOL _expectsFaceContact;
	BOOL _isPluginRunning;

}

@property (readonly) BOOL isPluginVisible; 
@property (readonly) BOOL isPluginRunning; 
@property (retain) SBUIPluginController * pluginController;              //@synthesize plugin=_plugin - In the implementation block
-(BOOL)pluginHandledButtonDownEventFromSource:(int)arg1 ;
-(BOOL)pluginHandledButtonUpEventFromSource:(int)arg1 ;
-(BOOL)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(BOOL)activatePluginForEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(BOOL)pluginHandledPasscodeUnlockWithCompletion:(/*^block*/ id)arg1 ;
-(BOOL)expectsFaceContact;
-(void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)_pluginDidLoad:(id)arg1 ;
-(void)_pluginWillUnload:(id)arg1 ;
-(BOOL)pluginHandledButtonTapEventFromSource:(int)arg1 ;
-(void)cancelPendingPluginActivationEvent:(int)arg1 ;
-(BOOL)pluginWantsInterfaceOrientation:(int*)arg1 ;
-(BOOL)pluginSuppressesNotifications;
-(BOOL)pluginWantsScreenDimInterval:(double*)arg1 ;
-(BOOL)pluginSupportedAndEnabled;
-(BOOL)isPluginVisible;
-(BOOL)isPluginRunning;
-(void)_notePluginVisibilityDidChange;
-(id)pluginController;
-(void)dismissPluginForEvent:(int)arg1 ;
-(void)_dismissUIPlugin:(id)arg1 animated:(BOOL)arg2 ;
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(BOOL)arg3 ;
-(void)_removeObserversForPlugin:(id)arg1 ;
-(void)setPluginController:(id)arg1 ;
-(void)_noteDeviceLockedOrBlocked;
-(void)_updateFaceContactForVisibilityChange:(BOOL)arg1 ;
-(void)_uiLocked:(id)arg1 ;
-(void)_deviceBlocked:(id)arg1 ;
-(void)_remoteLocked:(id)arg1 ;
-(void)_restoreOrientation;
-(BOOL)uiPluginExpectsFaceContact:(id)arg1 ;
-(void)_updateExpectsFaceContactWithChangedValue:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(void)uiPlugin:(id)arg1 isNowRunning:(BOOL)arg2 ;
-(void)uiPluginWantsDismissal:(id)arg1 withAnimation:(BOOL)arg2 ;
-(void)uiPluginUserEventOccurred:(id)arg1 ;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 ;
-(BOOL)uiPlugin:(id)arg1 openURL:(id)arg2 ;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(BOOL)arg4 ;
-(BOOL)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3 ;
-(void)uiPlugin:(id)arg1 setExpectsFaceContact:(BOOL)arg2 ;
@end

