/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextContentViewDelegate <NSObject>
@optional
-(void)textContentViewDidBeginEditing:(id)arg1;
-(void)textContentViewDidEndEditing:(id)arg1;
-(bool)textContentViewShouldBeginEditing:(id)arg1;
-(bool)textContentViewShouldEndEditing:(id)arg1;
-(bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2;
-(bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2;
-(bool)textContentView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textContentViewDidChange:(id)arg1;
-(void)textContentViewDidChangeSelection:(id)arg1;
@end

