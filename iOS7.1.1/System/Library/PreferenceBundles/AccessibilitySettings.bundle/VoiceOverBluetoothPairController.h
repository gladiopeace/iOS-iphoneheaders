/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class VoiceOverBluetoothDevice, NSString;

@interface VoiceOverBluetoothPairController : PSListController <UITextFieldDelegate> {

	VoiceOverBluetoothDevice* _device;
	NSString* _promptFormat;
	bool _dismissed;

}
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)textDidChange:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)updatePrompt:(id)arg1 ;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(id)specifiers;
-(void)keyboardWillShow:(id)arg1 ;
@end

