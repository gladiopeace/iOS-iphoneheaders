/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/KeychainSyncTextEntryController.h>

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController : KeychainSyncTextEntryController {

	DevicePINController* _devicePINController;
	bool _showingBlockedMessage;
	NSString* _enterPasscodeTitle;
	NSString* _enterPasscodeReason;
	UIKeyboard* _disabledKeyboard;

}

@property (nonatomic,retain) NSString * enterPasscodeTitle;               //@synthesize enterPasscodeTitle=_enterPasscodeTitle - In the implementation block
@property (nonatomic,retain) NSString * enterPasscodeReason;              //@synthesize enterPasscodeReason=_enterPasscodeReason - In the implementation block
@property (nonatomic,retain) UIKeyboard * disabledKeyboard;               //@synthesize disabledKeyboard=_disabledKeyboard - In the implementation block
-(void)dealloc;
-(id)init;
-(long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(id)specifiers;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)setEnterPasscodeTitle:(id)arg1 ;
-(void)setEnterPasscodeReason:(id)arg1 ;
-(void)updateBlockedState:(id)arg1 ;
-(void)setDisabledKeyboard:(id)arg1 ;
-(id)enterPasscodeTitle;
-(id)enterPasscodeReason;
-(id)disabledKeyboard;
@end

