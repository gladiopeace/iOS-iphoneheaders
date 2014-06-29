/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPropertyCell.h>

@class UITextView;

@interface ABPropertyNoteCell : ABPropertyCell {

	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(void)performDefaultAction;
-(id)contentViewEditingConstraints;
-(id)contentViewConstraints;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)textViewChanged:(id)arg1 ;
-(void)textViewEditingDidEnd:(id)arg1 ;
-(void)_updateDisplayAndEditingControls;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)setTextView:(id)arg1 ;
-(void)setAllowsEditing:(bool)arg1 ;
-(id)textView;
-(bool)shouldPerformDefaultAction;
@end

