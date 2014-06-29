/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField;

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate> {

	UITextField* _textField;
	unsigned _delegateRespondsToTextChange : 1;

}

@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)refreshPreferredContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(bool)becomeFirstResponder;
-(id)text;
-(void)setText:(id)arg1 ;
-(bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3 ;
-(bool)endEditing:(bool)arg1 ;
-(bool)_canBecomeFirstResponder;
-(void)textChanged:(id)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(id)textField;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
@end

