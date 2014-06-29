/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBUIPluginControllerHost <NSObject>
@required
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
-(BOOL)uiPluginExpectsFaceContact:(id)arg1;
-(BOOL)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/ id)arg3;
-(void)uiPlugin:(id)arg1 isNowRunning:(BOOL)arg2;
-(void)uiPluginWantsDismissal:(id)arg1 withAnimation:(BOOL)arg2;
-(void)uiPluginUserEventOccurred:(id)arg1;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3;
-(BOOL)uiPlugin:(id)arg1 openURL:(id)arg2;
-(BOOL)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(BOOL)arg4;
-(BOOL)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
-(void)uiPlugin:(id)arg1 setExpectsFaceContact:(BOOL)arg2;
@end

