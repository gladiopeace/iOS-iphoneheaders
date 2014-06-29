/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInputTraits_Private <NSObject,UITextInputTraits>
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) bool isSingleLineDocument; 
@property (assign,nonatomic) bool contentsIsSingleValue; 
@property (assign,nonatomic) bool acceptsEmoji; 
@property (assign,nonatomic) bool forceEnableDictation; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) bool returnKeyGoesToNextResponder; 
@property (assign,nonatomic) bool acceptsFloatingKeyboard; 
@property (assign,nonatomic) bool acceptsSplitKeyboard; 
@property (assign,nonatomic) bool displaySecureTextUsingPlainText; 
@property (assign,nonatomic) bool learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) bool suppressReturnKeyStyling; 
@property (assign,nonatomic) bool useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) bool deferBecomingResponder; 
@property (assign,nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent; 
@optional
-(int)textSelectionBehavior;
-(bool)displaySecureTextUsingPlainText;
-(CFCharacterSetRef)textTrimmingSet;
-(bool)acceptsSplitKeyboard;
-(int)shortcutConversionType;
-(bool)acceptsFloatingKeyboard;
-(bool)learnsCorrections;
-(void)setLearnsCorrections:(bool)arg1;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1;
-(id)insertionPointColor;
-(void)setInsertionPointColor:(id)arg1;
-(id)selectionBarColor;
-(void)setSelectionBarColor:(id)arg1;
-(id)selectionHighlightColor;
-(void)setSelectionHighlightColor:(id)arg1;
-(id)selectionDragDotImage;
-(void)setSelectionDragDotImage:(id)arg1;
-(unsigned long long)insertionPointWidth;
-(void)setInsertionPointWidth:(unsigned long long)arg1;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)arg1;
-(void)setTextSelectionBehavior:(int)arg1;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)arg1;
-(bool)isSingleLineDocument;
-(void)setIsSingleLineDocument:(bool)arg1;
-(bool)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(bool)arg1;
-(bool)acceptsEmoji;
-(void)setAcceptsEmoji:(bool)arg1;
-(bool)forceEnableDictation;
-(void)setForceEnableDictation:(bool)arg1;
-(int)emptyContentReturnKeyType;
-(void)setEmptyContentReturnKeyType:(int)arg1;
-(bool)returnKeyGoesToNextResponder;
-(void)setReturnKeyGoesToNextResponder:(bool)arg1;
-(void)setAcceptsFloatingKeyboard:(bool)arg1;
-(void)setAcceptsSplitKeyboard:(bool)arg1;
-(void)setDisplaySecureTextUsingPlainText:(bool)arg1;
-(void)setShortcutConversionType:(int)arg1;
-(bool)suppressReturnKeyStyling;
-(void)setSuppressReturnKeyStyling:(bool)arg1;
-(bool)useInterfaceLanguageForLocalization;
-(void)setUseInterfaceLanguageForLocalization:(bool)arg1;
-(bool)deferBecomingResponder;
-(void)setDeferBecomingResponder:(bool)arg1;
-(bool)enablesReturnKeyOnNonWhiteSpaceContent;
-(void)setEnablesReturnKeyOnNonWhiteSpaceContent:(bool)arg1;

@required
-(void)takeTraitsFrom:(id)arg1;
@end

