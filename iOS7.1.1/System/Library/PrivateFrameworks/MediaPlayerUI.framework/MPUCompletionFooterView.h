/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate.h>

@protocol MPUCompletionFooterViewDelegate;
@class UITapGestureRecognizer, NSString, MPStoreCompletionOffering, MPUItemOfferButton, UIView, UILabel, UISegmentedControl;

@interface MPUCompletionFooterView : UITableViewHeaderFooterView <SKUIItemOfferButtonDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	bool _showsVariants;
	bool _purchasing;
	long long _style;
	<MPUCompletionFooterViewDelegate>* _delegate;
	NSString* _title;
	NSString* _completeTitleFormat;
	NSString* _completeSubtitleFormat;
	NSString* _completeMyCollectionTitle;
	NSString* _completionTotalFormat;
	MPStoreCompletionOffering* _completionOffering;
	long long _preferredVariant;
	MPUItemOfferButton* _itemOfferButton;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UISegmentedControl* _variantSegmentedControl;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) long long style;                                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) <MPUCompletionFooterViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * completeTitleFormat;                                     //@synthesize completeTitleFormat=_completeTitleFormat - In the implementation block
@property (nonatomic,copy) NSString * completeSubtitleFormat;                                  //@synthesize completeSubtitleFormat=_completeSubtitleFormat - In the implementation block
@property (nonatomic,copy) NSString * completeMyCollectionTitle;                               //@synthesize completeMyCollectionTitle=_completeMyCollectionTitle - In the implementation block
@property (nonatomic,copy) NSString * completionTotalFormat;                                   //@synthesize completionTotalFormat=_completionTotalFormat - In the implementation block
@property (nonatomic,retain) MPStoreCompletionOffering * completionOffering;                   //@synthesize completionOffering=_completionOffering - In the implementation block
@property (assign,nonatomic) long long preferredVariant;                                       //@synthesize preferredVariant=_preferredVariant - In the implementation block
@property (assign,nonatomic) bool showsVariants;                                               //@synthesize showsVariants=_showsVariants - In the implementation block
@property (assign,getter=isPurchasing,nonatomic) bool purchasing;                              //@synthesize purchasing=_purchasing - In the implementation block
@property (nonatomic,retain) MPUItemOfferButton * itemOfferButton;                             //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UIView * topSeparatorView;                                        //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparatorView;                                     //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UISegmentedControl * variantSegmentedControl;                     //@synthesize variantSegmentedControl=_variantSegmentedControl - In the implementation block
+(double)defaultHeight;
-(id)bottomSeparatorView;
-(void)setSubtitleLabel:(id)arg1 ;
-(bool)isPurchasing;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id)title;
-(id)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)topSeparatorView;
-(id)subtitleLabel;
-(void).cxx_destruct;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setTitleLabel:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)_configureViewsForCompletionOffering;
-(id)_createItemOfferButton;
-(void)_changedVariants:(id)arg1 ;
-(void)layoutSeparatorsWithInset:(UIEdgeInsets)arg1 ;
-(id)completionOffering;
-(id)completeTitleFormat;
-(id)completeSubtitleFormat;
-(id)completionTotalFormat;
-(id)completeMyCollectionTitle;
-(void)_buttonShowConfirmationAction:(id)arg1 ;
-(void)_buttonCancelConfirmationAction:(id)arg1 ;
-(void)_buttonPurchaseAction:(id)arg1 ;
-(void)setPreferredVariant:(long long)arg1 ;
-(void)setCompletionTotalFormat:(id)arg1 ;
-(long long)preferredVariant;
-(bool)showsVariants;
-(void)setShowsVariants:(bool)arg1 ;
-(void)setTopSeparatorView:(id)arg1 ;
-(void)setBottomSeparatorView:(id)arg1 ;
-(id)variantSegmentedControl;
-(void)setVariantSegmentedControl:(id)arg1 ;
-(void)setCompleteTitleFormat:(id)arg1 ;
-(void)setCompleteSubtitleFormat:(id)arg1 ;
-(void)setCompleteMyCollectionTitle:(id)arg1 ;
-(void)setPurchasing:(bool)arg1 ;
-(void)setCompletionOffering:(id)arg1 ;
-(void)setItemOfferButton:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(id)itemOfferButton;
@end

