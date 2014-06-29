/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIColor, PSListController;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {

	UIColor* _textColor;
	id _delegate;
	bool _forceFirstResponder;
	bool _delaySpecifierRelease;
	SEL _targetSetter;
	id _realTarget;
	bool _valueChanged;
	bool _returnKeyTapped;
	PSListController* _controllerDelegate;

}

@property (nonatomic,readonly) bool returnKeyTapped;                             //@synthesize returnKeyTapped=_returnKeyTapped - In the implementation block
@property (assign,nonatomic) PSListController * controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
+(long long)cellStyle;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(bool)resignFirstResponder;
-(bool)becomeFirstResponder;
-(void)setValue:(id)arg1 ;
-(bool)isFirstResponder;
-(id)value;
-(bool)canBecomeFirstResponder;
-(bool)isEditing;
-(void)prepareForReuse;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(bool)textFieldShouldClear:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(bool)canResignFirstResponder;
-(id)textField;
-(void)setPlaceholderText:(id)arg1 ;
-(bool)canReload;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)cellRemovedFromView;
-(void)setCellEnabled:(bool)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)controlChanged:(id)arg1 ;
-(bool)isTextFieldEditing;
-(void)_setValueChanged;
-(void)_saveForExit;
-(void)endEditingAndSave;
-(bool)_cellIsEditing;
-(bool)returnKeyTapped;
-(id)controllerDelegate;
-(void)setControllerDelegate:(id)arg1 ;
@end

