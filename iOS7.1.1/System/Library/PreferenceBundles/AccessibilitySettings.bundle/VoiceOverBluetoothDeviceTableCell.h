/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface VoiceOverBluetoothDeviceTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	int _state;

}
+(id)selectedCheckedImage;
+(id)checkedImage;
+(id)spacerImage;
-(void)_updateCheckMarkIcon;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(bool)arg1 ;
-(void)setDeviceState:(int)arg1 ;
-(void)setDeviceStatePaired:(bool)arg1 andConnected:(bool)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)accessibilityTableViewCellText;
@end

