/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableArray;

@interface ABMultiCellContentView_Rows : ABMultiCellContentView <UITextFieldDelegate> {

	NSMutableArray* _entryFields;
	NSMutableArray* _horizontalDividers;
	bool _isAttemptingFirstResponder;

}
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(bool)arg6 ;
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(bool)arg6 includeRows:(bool)arg7 ;
+(CGRect)zerothHorizontalDividerFrameForValueViewRect:(CGRect)arg1 ;
+(unsigned long long)rowsForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1 ;
-(void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(bool)arg1 ;
-(CGRect)rectForView:(id)arg1 ;
-(id)viewForFirstResponder;
-(CGRect)backgroundRectForView:(id)arg1 ;
-(id)hitTestForTouches:(id)arg1 withEvent:(id)arg2 ;
-(bool)tabToNextResponder:(bool)arg1 fromView:(id)arg2 ;
-(void)entryField:(id)arg1 didEndEditingForKey:(id)arg2 ;
-(id)keyboardSettingsForKey:(id)arg1 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)reloadFromModelIncludingRows:(bool)arg1 ;
-(void)reloadIncludingRows:(bool)arg1 ;
-(id)entryFieldForRow:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)reload;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(bool)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
@end

