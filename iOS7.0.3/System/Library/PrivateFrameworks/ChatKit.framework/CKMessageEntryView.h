/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <ChatKit/CKMessageEntryContentViewDelegate.h>

@protocol CKMessageEntryViewDelegate;
@class UIView, CKMessageEntryContentView, UIButton, UILabel, _UITextFieldRoundedRectBackgroundViewNeue, _UIBackdropView, CKComposition, NSString;

@interface CKMessageEntryView : UIView <CKMessageEntryContentViewDelegate> {

	UIView* _dimmingView;
	int _animationState;
	BOOL _shouldShowSubject;
	BOOL _shouldShowPhotoButton;
	BOOL _shouldShowCharacterCount;
	BOOL _sendButtonColor;
	BOOL _dimmed;
	BOOL _characterCountHidden;
	<CKMessageEntryViewDelegate>* _delegate;
	CKMessageEntryContentView* _contentView;
	UIButton* _photoButton;
	UIButton* _sendButton;
	UILabel* _characterCountLabel;
	_UITextFieldRoundedRectBackgroundViewNeue* _coverView;
	_UIBackdropView* _backdropView;
	UIView* _knockoutCoverView;
	CGSize _photoButtonSize;
	CGSize _sendButtonSize;
	CGSize _characterCountSize;
	UIEdgeInsets _sendTextAlignmentInsets;

}

@property (assign,nonatomic) BOOL shouldShowSubject;                                               //@synthesize shouldShowSubject=_shouldShowSubject - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPhotoButton;                                           //@synthesize shouldShowPhotoButton=_shouldShowPhotoButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCharacterCount;                                        //@synthesize shouldShowCharacterCount=_shouldShowCharacterCount - In the implementation block
@property (assign,nonatomic) <CKMessageEntryViewDelegate> * delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKMessageEntryContentView * contentView;                              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CKComposition * composition; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,retain) UIButton * photoButton;                                               //@synthesize photoButton=_photoButton - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                //@synthesize sendButton=_sendButton - In the implementation block
@property (assign,nonatomic) BOOL sendButtonColor;                                                 //@synthesize sendButtonColor=_sendButtonColor - In the implementation block
@property (assign,nonatomic) int animationState;                                                   //@synthesize animationState=_animationState - In the implementation block
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;                                          //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,getter=isCharacterCountHidden,nonatomic) BOOL characterCountHidden;              //@synthesize characterCountHidden=_characterCountHidden - In the implementation block
@property (nonatomic,retain) UILabel * characterCountLabel;                                        //@synthesize characterCountLabel=_characterCountLabel - In the implementation block
@property (assign,nonatomic) CGSize photoButtonSize;                                               //@synthesize photoButtonSize=_photoButtonSize - In the implementation block
@property (assign,nonatomic) CGSize sendButtonSize;                                                //@synthesize sendButtonSize=_sendButtonSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sendTextAlignmentInsets;                                 //@synthesize sendTextAlignmentInsets=_sendTextAlignmentInsets - In the implementation block
@property (assign,nonatomic) CGSize characterCountSize;                                            //@synthesize characterCountSize=_characterCountSize - In the implementation block
@property (nonatomic,retain) _UITextFieldRoundedRectBackgroundViewNeue * coverView;                //@synthesize coverView=_coverView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                       //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * knockoutCoverView;                                           //@synthesize knockoutCoverView=_knockoutCoverView - In the implementation block
+(float)contentViewPortraitWidth;
-(void)send:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(int)animationState;
-(float)_accessoryViewFadeDuration;
-(void)setAnimationState:(int)arg1 ;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
-(id)photoButton;
-(BOOL)shouldShowPhotoButton;
-(CGSize)photoButtonSize;
-(id)sendButton;
-(UIEdgeInsets)sendTextAlignmentInsets;
-(CGSize)sendButtonSize;
-(id)characterCountLabel;
-(BOOL)shouldShowCharacterCount;
-(CGSize)characterCountSize;
-(id)coverView;
-(UIEdgeInsets)contentTextAlignmentInsets;
-(BOOL)isCharacterCountHidden;
-(float)placeholderHeight;
-(void)setShouldShowSubject:(BOOL)arg1 ;
-(void)setShouldShowPhotoButton:(BOOL)arg1 ;
-(void)setShouldShowCharacterCount:(BOOL)arg1 ;
-(void)setSendButton:(id)arg1 ;
-(void)setSendButtonSize:(CGSize)arg1 ;
-(void)setSendTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(void)setPhotoButton:(id)arg1 ;
-(void)setPhotoButtonSize:(CGSize)arg1 ;
-(void)setCharacterCountLabel:(id)arg1 ;
-(void)setCharacterCountSize:(CGSize)arg1 ;
-(void)setCoverView:(id)arg1 ;
-(void)setComposition:(id)arg1 ;
-(id)knockoutCoverView;
-(void)messageEntryContentViewDidChange:(id)arg1 ;
-(BOOL)messageEntryContentViewShouldBeginEditing:(id)arg1 ;
-(void)messageEntryContentViewDidBeginEditing:(id)arg1 ;
-(BOOL)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 shouldShowSubject:(BOOL)arg2 shouldShowPhotoButton:(BOOL)arg3 shouldShowCharacterCount:(BOOL)arg4 ;
-(void)setSendButtonColor:(BOOL)arg1 ;
-(void)setCharacterCountHidden:(BOOL)arg1 ;
-(void)animateKnockedOutTextField;
-(void)setKnocksOutTextField:(BOOL)arg1 ;
-(BOOL)shouldShowSubject;
-(BOOL)sendButtonColor;
-(void)setKnockoutCoverView:(id)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)isDimmed;
-(id)composition;
-(id)placeholderText;
-(void)setPlaceholderText:(id)arg1 ;
@end

