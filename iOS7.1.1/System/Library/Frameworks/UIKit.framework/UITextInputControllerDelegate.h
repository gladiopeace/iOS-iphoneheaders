/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInputControllerDelegate <NSObject>
@optional
-(bool)textInputShouldBeginEditing:(id)arg1;
-(bool)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
-(void)textInputDidChange:(id)arg1;
-(NSRange*)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3;
-(void)textInputDidChangeSelection:(id)arg1;
@end

