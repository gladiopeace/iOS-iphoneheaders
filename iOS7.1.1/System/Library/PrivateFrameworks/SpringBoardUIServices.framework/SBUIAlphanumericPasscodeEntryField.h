/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UIView, UITextInputTraits;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,readonly) UITextInputTraits * textInputTraits; 
-(void)dealloc;
-(void)layoutSubviews;
-(id)textInputTraits;
-(id)initWithDefaultSize;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)_resetForFailedPasscode:(bool)arg1 playUnlockFailedSound:(bool)arg2 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/ id)arg1 ;
-(void)notePasscodeFieldTextDidChange;
@end

