/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <AddressBookUI/ABSwellTextViewDelegate.h>

@class ABSwellTextView;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate> {

	ABSwellTextView* _textView;

}
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(bool)arg6 ;
+(void)setupTextView:(id)arg1 withStyleProvider:(id)arg2 whenEditing:(bool)arg3 ;
+(id)swellTextViewForReuse;
+(id)labelTextForPropertyGroup:(id)arg1 info:(id)arg2 styleProvider:(id)arg3 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(bool)arg1 ;
-(id)viewForFirstResponder;
-(bool)canBeginEditingAnytime;
-(bool)tabToNextResponder:(bool)arg1 fromView:(id)arg2 ;
-(CGRect)focusRectForView:(id)arg1 ;
-(bool)shouldUseTwoLineLabels;
-(bool)swellTextViewShouldBeginEditing:(id)arg1 ;
-(bool)swellTextViewShouldEndEditing:(id)arg1 ;
-(void)swellTextViewDidBeginEditing:(id)arg1 ;
-(void)swellTextViewDidEndEditing:(id)arg1 ;
-(void)swellTextViewTextDidChange:(id)arg1 ;
-(void)swellTextView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(CGRect)frameForLabel;
-(void)dealloc;
-(void)reload;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setLabelText:(id)arg1 ;
@end

