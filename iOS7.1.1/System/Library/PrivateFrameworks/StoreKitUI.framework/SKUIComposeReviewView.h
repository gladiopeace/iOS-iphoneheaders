/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <StoreKitUI/SKUIComposeReviewHeaderDelegate.h>
#import <UIKit/UITextContentViewDelegate.h>

@protocol SKUIComposeReviewViewDelegate;
@class SKUIComposeReviewHeaderView, SULoadingView, SKUIReviewMetadata, UIControl, UILabel, UIScrollView, SUTextContentView;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate> {

	long long _currentBodyLength;
	<SKUIComposeReviewViewDelegate>* _delegate;
	SKUIComposeReviewHeaderView* _headerView;
	unsigned _loading : 1;
	SULoadingView* _loadingView;
	SKUIReviewMetadata* _review;
	UIControl* _reviewCountControl;
	UILabel* _reviewCountLabel;
	UIScrollView* _scrollView;
	long long _style;
	SUTextContentView* _textContentView;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) <SKUIComposeReviewViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) bool loading; 
@property (assign,nonatomic) float rating; 
@property (getter=isValid,nonatomic,readonly) bool valid; 
-(void)setLoading:(bool)arg1 ;
-(void)setRating:(float)arg1 ;
-(float)rating;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(bool)isValid;
-(void)_updateContentSize;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(bool)isLoading;
-(bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(bool)textContentView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(void).cxx_destruct;
-(id)_body;
-(void)composeHeaderViewValidityDidChange:(id)arg1 ;
-(void)composeHeaderViewValuesDidChange:(id)arg1 ;
-(long long)composeReviewStyle;
-(void)_showComposeView;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg1 ;
-(void)_layoutLoadingView;
-(void)_layoutComposeView;
-(id)_reviewCountString;
-(void)_showLoadingView;
-(id)_reviewPlaceholder;
-(void)_delayedUpdateReviewLength;
-(bool)_isReviewTextOptional;
-(void)_reviewCountAction:(id)arg1 ;
-(id)copyReview;
-(void)setReview:(id)arg1 ;
@end

