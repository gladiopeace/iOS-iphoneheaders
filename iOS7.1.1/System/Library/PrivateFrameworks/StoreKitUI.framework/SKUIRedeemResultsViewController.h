/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <StoreKitUI/SKUIItemStateCenterObserver.h>
#import <StoreKitUI/SKUIRedeemResultsViewDelegate.h>

@class UIButton, SKUITextLayout, SKUITextBoxView, UIImageView, UIImage, SKUIItemStateCenter, SKUIGiftItemView, SKUIRedeemResultMessageView, NSOperationQueue, SKUIRedeemITunesPassLockup, SKUIRedeem;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate> {

	UIButton* _anotherButton;
	bool _extendedMessageIsExpanded;
	SKUITextLayout* _extendedMessageTextLayout;
	SKUITextBoxView* _extendedMessageView;
	UIImageView* _headerImageView;
	UIImage* _itemImage;
	SKUIItemStateCenter* _itemStateCenter;
	SKUIGiftItemView* _itemView;
	SKUIRedeemResultMessageView* _messageView;
	NSOperationQueue* _operationQueue;
	SKUIRedeemITunesPassLockup* _passbookLockup;
	SKUIRedeem* _redeem;
	long long _redeemCategory;

}

@property (nonatomic,readonly) SKUIRedeem * redeem;                 //@synthesize redeem=_redeem - In the implementation block
@property (assign,nonatomic) long long redeemCategory;              //@synthesize redeemCategory=_redeemCategory - In the implementation block
-(id)_item;
-(void)_doneAction:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)_reloadSections;
-(id)_itemView;
-(void)_setHeaderImage:(id)arg1 ;
-(void)_setItemImage:(id)arg1 ;
-(void)_reloadResultViewMessage;
-(void)_redeemAnotherAction:(id)arg1 ;
-(void)_extendedMessageAction:(id)arg1 ;
-(void)_openAction:(id)arg1 ;
-(void)_passbookLockupAction:(id)arg1 ;
-(id)_emptySection;
-(id)_resultImageViewSection;
-(id)_itemViewSection;
-(id)_messageViewSection;
-(id)_anotherButtonSection;
-(id)_passbookLearnMoreSection;
-(id)_headerImageViewSection;
-(id)_extendedMessageViewSection;
-(id)_linksSection;
-(void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithRedeem:(id)arg1 ;
-(long long)redeemCategory;
-(void)setRedeemCategory:(long long)arg1 ;
-(id)redeem;
@end

