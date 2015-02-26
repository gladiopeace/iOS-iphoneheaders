/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol SKUIItemOfferButtonDelegate;
@class UIView, SKUIFocusedTouchGestureRecognizer, UIImage, UIColor, NSString, UIImageView, SKUICircleProgressIndicator, UILabel;

@interface SKUIItemOfferButton : UIControl {

	UIView* _borderView;
	SKUIFocusedTouchGestureRecognizer* _cancelGestureRecognizer;
	UIImage* _cloudImage;
	UIColor* _confirmationColor;
	NSString* _confirmationTitle;
	<SKUIItemOfferButtonDelegate>* _delegate;
	UIView* _emphasisView;
	int _fillStyle;
	UIImageView* _imageView;
	UIColor* _originalBackgroundColor;
	float _progress;
	SKUICircleProgressIndicator* _progressIndicator;
	int _progressType;
	BOOL _showsConfirmationState;
	unsigned _state;
	NSString* _title;
	CGSize _titleFitSize;
	UILabel* _titleLabel;
	BOOL _universal;
	UIImageView* _universalImageView;

}

@property (assign,nonatomic,__weak) <SKUIItemOfferButtonDelegate> * delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * confirmationTitle;                                           //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int fillStyle;                                                        //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) float progress;                                                       //@synthesize progress=_progress - In the implementation block
@property (getter=isShowingConfirmation,nonatomic,readonly) BOOL showingConfirmation; 
@property (assign,nonatomic) BOOL showsConfirmationState;                                          //@synthesize showsConfirmationState=_showsConfirmationState - In the implementation block
@property (assign,nonatomic) int progressType;                                                     //@synthesize progressType=_progressType - In the implementation block
@property (assign,getter=isUniversal,nonatomic) BOOL universal;                                    //@synthesize universal=_universal - In the implementation block
+(id)_cloudBackgroundImage;
+(id)itemOfferButtonWithAppearance:(id)arg1 ;
+(id)_cloudImageForTint:(id)arg1 ;
+(id)_universalPlusImageWithTintColor:(id)arg1 ;
+(id)_cloudArrowImage;
+(id)_imageForProgressType:(int)arg1 ;
+(UIEdgeInsets)_imageInsetsForProgressType:(int)arg1 ;
-(void)setConfirmationTitle:(id)arg1 ;
-(BOOL)isShowingConfirmation;
-(id)confirmationTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
-(id)image;
-(void)tintColorDidChange;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)title;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(float)progress;
-(int)progressType;
-(void)_removeCancelGestureRecognizer;
-(BOOL)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4 ;
-(void)setColoringWithAppearance:(id)arg1 ;
-(void)removeButtonStateAnimations;
-(void)setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)layoutSizeThatFits:(CGSize)arg1 ;
-(void)setUniversal:(BOOL)arg1 ;
-(void)_sendWillAnimate;
-(void)_reloadForCurrentState;
-(void)setProgressType:(int)arg1 animated:(BOOL)arg2 ;
-(void)_updateForProgressFinished:(BOOL)arg1 ;
-(void)_setProgressVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_activeTintColor;
-(BOOL)_shouldHideUniversalIndicator;
-(void)_cancelGestureAction:(id)arg1 ;
-(void)setShowsConfirmationState:(BOOL)arg1 ;
-(void)showCloudImage;
-(id)_emphasisView;
-(void)_animateToCancelTracking;
-(BOOL)showsConfirmationState;
-(void)setProgressType:(int)arg1 ;
-(BOOL)isUniversal;
-(void).cxx_destruct;
-(int)fillStyle;
-(void)setFillStyle:(int)arg1 ;
-(void)_setImage:(id)arg1 ;
@end
