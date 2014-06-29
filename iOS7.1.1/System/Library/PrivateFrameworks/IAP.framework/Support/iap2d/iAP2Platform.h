/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface iAP2Platform : NSObject {

	bool _IAPLoggingEnabled;

}

@property (nonatomic,readonly) bool IAPLoggingEnabled;              //@synthesize IAPLoggingEnabled=_IAPLoggingEnabled - In the implementation block
+(id)GetInstance;
+(id)accessoryHomeDirectory;
+(bool)IsiPad;
-(bool)IAPLoggingEnabled;
-(bool)SupportsDisplayPort;
-(bool)SupportRestoreVolumeOnExit;
-(bool)SupportNestedPlaylist;
-(bool)SupportsGeniusMixes;
-(bool)SupportsITunesU;
-(bool)SupportsVideoBrowsing;
-(bool)SupportsDisplayPortToHDMI;
-(bool)SupportsApplicationAutolaunch;
-(bool)SupportsAccessibilityOverIap;
-(bool)SupportsAccessibilityPreference;
-(bool)SupportsAccessibilityAssistiveTouch;
-(bool)SupportsGeniusPlaylist;
-(bool)HasE75;
-(bool)HasVideoOut;
-(bool)HasLineIn;
-(bool)HasLineOut;
-(bool)HasUSBDigitalAudioIn;
-(bool)HasUSBDigitalAudioOut;
-(bool)SupportsUSBHostMode;
-(bool)SupportsUSBHostModeAudioOutput;
-(bool)SupportsUSBHostModeAudioInput;
-(void)dealloc;
-(id)init;
-(id)OSVersion;
@end

