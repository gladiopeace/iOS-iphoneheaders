/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/VictoriaSettings.bundle/VictoriaSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <VictoriaSettings/STWeightPickerDelegate.h>

@class STWeightPicker, UILabel;

@interface NikeSettingsWeightController : PSListController <STWeightPickerDelegate> {

	STWeightPicker* _weightPicker;
	UILabel* _promptLabel;

}
-(id)weight:(id)arg1 ;
-(void)weightPicker:(id)arg1 weightUnitDidChange:(int)arg2 ;
-(void)weightPicker:(id)arg1 weightDidChange:(float)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(id)specifiers;
-(void)_layoutViews;
@end

