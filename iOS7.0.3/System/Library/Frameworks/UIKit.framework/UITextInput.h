/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInput <UIKeyInput>
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic) <UITextInputDelegate> * inputDelegate; 
@property (nonatomic,readonly) <UITextInputTokenizer> * tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
@optional
-(id)textInputView;
-(id)insertDictationResultPlaceholder;
-(CGRect*)frameForDictationResultPlaceholder:(id)arg1;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
-(BOOL)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;
-(id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
-(id)positionWithinRange:(id)arg1 atCharacterOffset:(int)arg2;
-(int)characterOffsetOfPosition:(id)arg1 withinRange:(id)arg2;
-(void)insertDictationResult:(id)arg1;
-(void)dictationRecordingDidEnd;
-(void)dictationRecognitionFailed;
-(int)selectionAffinity;
-(void)setSelectionAffinity:(int)arg1;

@required
-(id)beginningOfDocument;
-(id)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
-(id)textInRange:(id)arg1;
-(id)inputDelegate;
-(CGRect*)caretRectForPosition:(id)arg1;
-(void)replaceRange:(id)arg1 withText:(id)arg2;
-(id)selectedTextRange;
-(void)setSelectedTextRange:(id)arg1;
-(id)markedTextRange;
-(id)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
-(void)setInputDelegate:(id)arg1;
-(id)tokenizer;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
-(CGRect*)firstRectForRange:(id)arg1;
-(id)selectionRectsForRange:(id)arg1;
-(id)closestPositionToPoint:(CGPoint)arg1;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2;
-(id)characterRangeAtPoint:(CGPoint)arg1;
@end

