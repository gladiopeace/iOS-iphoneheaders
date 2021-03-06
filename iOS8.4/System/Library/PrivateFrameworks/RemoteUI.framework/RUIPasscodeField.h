/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol RUIPasscodeFieldDelegate;
@class NSMutableArray, NSMutableString, UIColor, NSString;

@interface RUIPasscodeField : UIView <UIKeyInput> {

	NSMutableArray* _dashViews;
	NSMutableArray* _dotViews;
	NSMutableArray* _digitViews;
	NSMutableString* _stringValue;
	BOOL _securePasscodeEntry;
	id<RUIPasscodeFieldDelegate> _delegate;
	unsigned long long _numberOfEntryFields;
	UIColor* _foregroundColor;
	long long _keyboardAppearance;

}

@property (assign,nonatomic,__weak) id<RUIPasscodeFieldDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfEntryFields;                   //@synthesize numberOfEntryFields=_numberOfEntryFields - In the implementation block
@property (assign,nonatomic) BOOL securePasscodeEntry;                                   //@synthesize securePasscodeEntry=_securePasscodeEntry - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                  //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                               //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
-(void)setDelegate:(id<RUIPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<RUIPasscodeFieldDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(long long)keyboardAppearance;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(BOOL)isSecureTextEntry;
-(long long)keyboardType;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(unsigned long long)numberOfEntryFields;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setSecurePasscodeEntry:(BOOL)arg1 ;
-(id)initWithNumberOfEntryFields:(unsigned long long)arg1 ;
-(BOOL)securePasscodeEntry;
@end

