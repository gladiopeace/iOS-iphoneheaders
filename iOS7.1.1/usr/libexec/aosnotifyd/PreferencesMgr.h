/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PreferencesMgr : NSObject
+(void)setFMIPWipeLostModeInfo:(id)arg1 ;
+(id)lastLaunchVersion;
+(void)setLastLaunchVersion:(id)arg1 ;
+(id)errorForUnregister;
+(int)wipeState;
+(BOOL)bccOnFenceTrigger;
+(id)fenceVersion;
+(id)deviceInfoOverrides;
+(id)locationDeviceInfoOverrides;
+(BOOL)overriddenTrackNotifyEnabled;
+(void)setFenceVersion:(id)arg1 ;
+(BOOL)dontUseSLC;
+(void)setTrackingInfo:(id)arg1 forType:(id)arg2 ;
+(id)trackingInfoForType:(id)arg1 ;
+(BOOL)playSlcSounds;
+(BOOL)playLocSounds;
+(BOOL)simulateWipe;
+(id)overriddenOSVersion;
+(id)overriddenBuildVersion;
+(BOOL)flashLightDuringSound;
+(BOOL)showInternalNotifications;
+(id)lockScreenDefaultMessage;
+(id)lockScreenDefaultOwnerNumber;
+(void)setWipeState:(int)arg1 ;
+(id)wipeInfo;
+(void)setWipeInfo:(id)arg1 ;
+(void)setLostModeInfo:(id)arg1 ;
+(void)setClientLostModeInfo:(id)arg1 ;
+(id)pushAccountsData;
+(void)setPushAccountsData:(id)arg1 ;
+(id)lostModeInfo;
+(id)httpRequestHeaders;
@end

