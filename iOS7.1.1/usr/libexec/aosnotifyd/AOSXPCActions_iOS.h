/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSNotification/AOSNotificationiOSActions.h>

@interface AOSXPCActions_iOS : NSObject <AOSNotificationiOSActions>
-(BOOL)_hasClientAccessEntitlement;
-(id)_errorForCode:(int)arg1 message:(id)arg2 ;
-(oneway void)enableLostModeWithInfo:(id)arg1 usingCallback:(/*^block*/ id)arg2 ;
-(oneway void)disableLostModeUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)deviceActivationDidSucceedUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)getLockdownShouldDisableDeviceRestoreUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)getLockdownShouldDisableDevicePairingUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)getFMIPStateUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)getFMFDeviceIdUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)getFMIPDeviceIdUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)getStoreAccountUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)getFmipAccountUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)getiCloudAccountUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)enableFMIPInContext:(int)arg1 usingCallback:(/*^block*/ id)arg2 ;
-(oneway void)disableFMIPUsingToken:(id)arg1 inContext:(int)arg2 usingCallback:(/*^block*/ id)arg3 ;
-(oneway void)getActivationLockStateUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)enableActivationLockUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)disableActivationLockUsingToken:(id)arg1 usingCallback:(/*^block*/ id)arg2 ;
-(oneway void)didEnterFMFRegion:(id)arg1 atLocation:(id)arg2 usingCallback:(/*^block*/ id)arg3 ;
-(oneway void)didExitFMFRegion:(id)arg1 atLocation:(id)arg2 usingCallback:(/*^block*/ id)arg3 ;
-(oneway void)addFMFAccount:(id)arg1 usingCallback:(/*^block*/ id)arg2 ;
-(oneway void)removeFMFAccountWithUsername:(id)arg1 usingCallback:(/*^block*/ id)arg2 ;
-(oneway void)retrieveFMFAccountUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)vetEmailAccount:(id)arg1 usingCallback:(/*^block*/ id)arg2 ;
-(oneway void)cancelEmailVetUsingCallback:(/*^block*/ id)arg1 ;
-(oneway void)startListeningOnTopic:(id)arg1 usingCallback:(/*^block*/ id)arg2 ;
-(oneway void)stopListeningOnTopic:(id)arg1 usingCallback:(/*^block*/ id)arg2 ;
-(oneway void)dumpDebugInfo:(id)arg1 usingCallback:(/*^block*/ id)arg2 ;
@end

