/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VoiceOverBluetoothDevice, PSSpecifier, UIAlertView;

@interface VoiceOverBluetoothSSPPairingRequest : NSObject {

	VoiceOverBluetoothDevice* _device;
	PSSpecifier* _specifier;
	UIAlertView* _alert;
	id _delegate;
	int _pairingStyle;

}
-(id)_sanitizeNameForAlert:(id)arg1 ;
-(id)initWithDevice:(id)arg1 andSpecifier:(id)arg2 ;
-(void)setPairingStyle:(int)arg1 andPasskey:(id)arg2 ;
-(int)pairingStyle;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)show;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
-(void)hidPairingResult:(id)arg1 ;
@end

