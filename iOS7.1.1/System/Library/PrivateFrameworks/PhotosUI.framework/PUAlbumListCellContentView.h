/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PUAlbumListCellDelegate;
@class PUStackView, UIView, NSString, UITextField, UILabel, UIButton;

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate> {

	bool _combinesPhotoDecorations;
	bool _usesOpaqueLabels;
	bool _attemptsDrawingLabels;
	bool _editing;
	bool _enabled;
	bool _showsDeleteButtonWhenEditing;
	bool __showsTitleAndSubtitle;
	bool __canDrawLabels;
	<PUAlbumListCellDelegate>* _delegate;
	PUStackView* _stackView;
	UIView* _customImageView;
	NSString* _title;
	NSString* _subtitle;
	double _xInset;
	long long _layout;
	unsigned long long _editCapabilities;
	UITextField* __titleTextField;
	UILabel* __titleLabel;
	UILabel* __subtitleLabel;
	UIButton* __deleteButton;

}

@property (assign,nonatomic,__weak) <PUAlbumListCellDelegate> * delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUStackView * stackView;                                                    //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) bool combinesPhotoDecorations;                                              //@synthesize combinesPhotoDecorations=_combinesPhotoDecorations - In the implementation block
@property (nonatomic,retain) UIView * customImageView;                                                   //@synthesize customImageView=_customImageView - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) bool usesOpaqueLabels;                                                      //@synthesize usesOpaqueLabels=_usesOpaqueLabels - In the implementation block
@property (assign,nonatomic) bool attemptsDrawingLabels;                                                 //@synthesize attemptsDrawingLabels=_attemptsDrawingLabels - In the implementation block
@property (assign,nonatomic) double xInset;                                                              //@synthesize xInset=_xInset - In the implementation block
@property (assign,nonatomic) long long layout;                                                           //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) unsigned long long editCapabilities;                                        //@synthesize editCapabilities=_editCapabilities - In the implementation block
@property (assign,getter=isEditing,nonatomic) bool editing;                                              //@synthesize editing=_editing - In the implementation block
@property (assign,getter=isEnabled,nonatomic) bool enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) bool showsDeleteButtonWhenEditing;                                          //@synthesize showsDeleteButtonWhenEditing=_showsDeleteButtonWhenEditing - In the implementation block
@property (assign,setter=_setShowsTitleAndSubtitle:,nonatomic) bool _showsTitleAndSubtitle;              //@synthesize _showsTitleAndSubtitle=__showsTitleAndSubtitle - In the implementation block
@property (setter=_setTitleTextField:,nonatomic,retain) UITextField * _titleTextField;                   //@synthesize _titleTextField=__titleTextField - In the implementation block
@property (setter=_setTitleLabel:,nonatomic,retain) UILabel * _titleLabel;                               //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (setter=_setSubtitleLabel:,nonatomic,retain) UILabel * _subtitleLabel;                         //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (assign,setter=_setCanDrawLabels:,nonatomic) bool _canDrawLabels;                              //@synthesize _canDrawLabels=__canDrawLabels - In the implementation block
@property (setter=_setDeleteButton:,nonatomic,retain) UIButton * _deleteButton;                          //@synthesize _deleteButton=__deleteButton - In the implementation block
+(void)initialize;
+(void)_updateLabelGlobalCachedSizes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(bool)isEnabled;
-(void)setEnabled:(bool)arg1 ;
-(id)title;
-(bool)isEditing;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)prepareForReuse;
-(void)setEditing:(bool)arg1 ;
-(long long)layout;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(id)_titleLabel;
-(void)setLayout:(long long)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setEnabled:(bool)arg1 animated:(bool)arg2 ;
-(void).cxx_destruct;
-(void)handleTransitionFade:(bool)arg1 animate:(bool)arg2 ;
-(void)setCombinesPhotoDecorations:(bool)arg1 ;
-(void)setAttemptsDrawingLabels:(bool)arg1 ;
-(void)cancelPerformRetitleAction;
-(void)_setStackView:(id)arg1 ;
-(id)_subtitleLabel;
-(double)xInset;
-(id)stackView;
-(id)customImageView;
-(CGPoint)_deleteButtonCenter;
-(id)_deleteButton;
-(CGRect)_titleTextFieldFrameForTitleLabelFrame:(CGRect)arg1 ;
-(id)_titleTextField;
-(bool)attemptsDrawingLabels;
-(bool)_canDrawLabels;
-(bool)_showsTitleAndSubtitle;
-(void)_setShowsTitleAndSubtitle:(bool)arg1 ;
-(void)_updateTitleFieldAnimated:(bool)arg1 ;
-(void)_updateSubtitleLabelAnimated:(bool)arg1 ;
-(void)_setDeleteButton:(id)arg1 ;
-(void)_updateStackViewAnimated:(bool)arg1 ;
-(void)_setCanDrawLabels:(bool)arg1 updateLabelsNow:(bool)arg2 ;
-(void)_updateDeleteButtonAnimated:(bool)arg1 ;
-(void)_setCanDrawLabels:(bool)arg1 ;
-(bool)showsDeleteButtonWhenEditing;
-(void)_deleteAction:(id)arg1 ;
-(bool)usesOpaqueLabels;
-(void)_setTitleLabel:(id)arg1 ;
-(void)_setTitleTextField:(id)arg1 ;
-(long long)_textAlignmentForLayout:(long long)arg1 ;
-(double)_titleFieldAlpha;
-(void)_setSubtitleLabel:(id)arg1 ;
-(void)setShowsTitle:(bool)arg1 animated:(bool)arg2 ;
-(void)setCustomImageView:(id)arg1 ;
-(void)setXInset:(double)arg1 ;
-(void)setShowsDeleteButtonWhenEditing:(bool)arg1 ;
-(bool)combinesPhotoDecorations;
-(void)setUsesOpaqueLabels:(bool)arg1 ;
-(unsigned long long)editCapabilities;
-(void)setEditCapabilities:(unsigned long long)arg1 ;
@end

