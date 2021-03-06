/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject {

	char _loading;
	NSString* _subtitle;
	NSString* _styleString;
	NSString* _systemItemString;

}

@property (getter=isShowingConfirmation,nonatomic,readonly) char showingConfirmation; 
@property (nonatomic,readonly) int buttonType; 
@property (assign,getter=isLoading,nonatomic) char loading;                                        //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,readonly) NSString * systemItemString;                                        //@synthesize systemItemString=_systemItemString - In the implementation block
@property (assign,nonatomic) int tag; 
@property (nonatomic,retain) NSString * title; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) UIEdgeInsets imageInsets; 
@property (getter=isBackButton,nonatomic,readonly) char backButton; 
@property (nonatomic,readonly) NSString * styleString; 
+(id)objectWithDefaultButtonForScriptButton:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSString *)subtitle;
-(NSString *)styleString;
-(void)setSubtitle:(NSString *)arg1 ;
-(char)isLoading;
-(int)buttonType;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)setLoading:(char)arg1 ;
-(char)isShowingConfirmation;
-(void)buttonAction:(id)arg1 ;
-(id)initWithSystemItemString:(id)arg1 ;
-(void)configureFromScriptButtonNativeObject:(id)arg1 ;
-(char)isBackButton;
-(void)hideConfirmationAnimated:(char)arg1 ;
-(void)disconnectButtonAction;
-(void)connectButtonAction;
-(void)setStyleFromString:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(char)arg2 ;
-(NSString *)systemItemString;
@end

