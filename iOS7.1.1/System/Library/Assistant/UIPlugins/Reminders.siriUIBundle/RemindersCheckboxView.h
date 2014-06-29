/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Reminders.siriUIBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@protocol RemindersCheckboxViewDelegate;
@class UIButton, UIColor;

@interface RemindersCheckboxView : UIView {

	UIButton* _button;
	bool _checked;
	bool _overdue;
	bool _enabled;
	bool _useDarkBGAppearance;
	<RemindersCheckboxViewDelegate>* _delegate;
	UIColor* _buttonColor;

}

@property (assign,nonatomic,__weak) <RemindersCheckboxViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * buttonColor;                                          //@synthesize buttonColor=_buttonColor - In the implementation block
@property (assign,getter=isChecked,nonatomic) bool checked;                                  //@synthesize checked=_checked - In the implementation block
@property (assign,getter=isOverdue,nonatomic) bool overdue;                                  //@synthesize overdue=_overdue - In the implementation block
@property (assign,getter=isEnabled,nonatomic) bool enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) bool useDarkBGAppearance;                                       //@synthesize useDarkBGAppearance=_useDarkBGAppearance - In the implementation block
-(void)setUseDarkBGAppearance:(bool)arg1 ;
-(void)_updateImage;
-(bool)useDarkBGAppearance;
-(id)flatUncompletedImageForColor:(id)arg1 ;
-(id)flatCompletedImage;
-(void)buttonDown;
-(void)setOverdue:(bool)arg1 ;
-(void)buttonPressed;
-(bool)isOverdue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setChecked:(bool)arg1 ;
-(id)delegate;
-(bool)isEnabled;
-(void)setEnabled:(bool)arg1 ;
-(void).cxx_destruct;
-(bool)isChecked;
-(id)buttonColor;
-(void)setButtonColor:(id)arg1 ;
@end

