/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITextView.h>

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView {

	MFComposeRecipientTextView* _hostRecipientView;

}

@property (readonly) NSArray * atoms; 
@property (assign) MFComposeRecipientTextView * hostRecipientView;              //@synthesize hostRecipientView=_hostRecipientView - In the implementation block
-(void)setHostRecipientView:(id)arg1 ;
-(void)enumerateAtoms:(/*^block*/ id)arg1 ;
-(void)enumerateAtomAttachments:(/*^block*/ id)arg1 ;
-(id)atoms;
-(void)enumerateAtomsInCharacterRange:(NSRange)arg1 withBlock:(/*^block*/ id)arg2 ;
-(CGRect)convertGlyphRect:(CGRect)arg1 ;
-(id)hostRecipientView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(bool)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(bool)becomeFirstResponder;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(long long)baseWritingDirection;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
@end

