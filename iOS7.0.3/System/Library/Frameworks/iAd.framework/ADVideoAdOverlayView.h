/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ADVideoAdOverlayViewDelegate;
@class UIButton, UILabel, _UIBackdropView, UIStatusBar, UIActivityIndicatorView, UIImageView;

@interface ADVideoAdOverlayView : UIView <UIGestureRecognizerDelegate> {

	BOOL _fullscreen;
	BOOL _titleActivityIndicatorVisible;
	BOOL _barsVisible;
	BOOL _skipButtonCountingDown;
	<ADVideoAdOverlayViewDelegate>* _delegate;
	UIButton* _moreButton;
	UILabel* _titleLabel;
	_UIBackdropView* _topBarView;
	UIStatusBar* _statusBar;
	UIButton* _doneButton;
	UIActivityIndicatorView* _titleActivityIndicator;
	UIImageView* _bottomBarView;
	UIButton* _skipButton;
	UILabel* _skipLabel;
	UIImageView* _isolatedBrandingView;
	UIImageView* _toolbarSynchronizedBrandingView;
	double _startEnablingSkipTime;
	double _skipDuration;

}

@property (assign,nonatomic) <ADVideoAdOverlayViewDelegate> * delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL fullscreen;                                               //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) BOOL titleActivityIndicatorVisible;                            //@synthesize titleActivityIndicatorVisible=_titleActivityIndicatorVisible - In the implementation block
@property (assign,nonatomic) BOOL barsVisible;                                              //@synthesize barsVisible=_barsVisible - In the implementation block
@property (assign,nonatomic) UIButton * moreButton;                                         //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,nonatomic) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) _UIBackdropView * topBarView;                                  //@synthesize topBarView=_topBarView - In the implementation block
@property (assign,nonatomic) UIStatusBar * statusBar;                                       //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,nonatomic) UIButton * doneButton;                                         //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) UIActivityIndicatorView * titleActivityIndicator;              //@synthesize titleActivityIndicator=_titleActivityIndicator - In the implementation block
@property (assign,nonatomic) UIImageView * bottomBarView;                                   //@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (assign,nonatomic) BOOL skipButtonCountingDown;                                   //@synthesize skipButtonCountingDown=_skipButtonCountingDown - In the implementation block
@property (assign,nonatomic) UIButton * skipButton;                                         //@synthesize skipButton=_skipButton - In the implementation block
@property (assign,nonatomic) UILabel * skipLabel;                                           //@synthesize skipLabel=_skipLabel - In the implementation block
@property (assign,nonatomic) double startEnablingSkipTime;                                  //@synthesize startEnablingSkipTime=_startEnablingSkipTime - In the implementation block
@property (assign,nonatomic) double skipDuration;                                           //@synthesize skipDuration=_skipDuration - In the implementation block
@property (nonatomic,retain) UIImageView * isolatedBrandingView;                            //@synthesize isolatedBrandingView=_isolatedBrandingView - In the implementation block
@property (nonatomic,retain) UIImageView * toolbarSynchronizedBrandingView;                 //@synthesize toolbarSynchronizedBrandingView=_toolbarSynchronizedBrandingView - In the implementation block
-(void)setFullscreen:(BOOL)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(id)moreButton;
-(void)setDoneButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setStatusBar:(id)arg1 ;
-(id)statusBar;
-(id)titleLabel;
-(BOOL)accessibilityPerformEscape;
-(void)setTitleLabel:(id)arg1 ;
-(void)setTopBarView:(id)arg1 ;
-(id)topBarView;
-(void)setTitleActivityIndicator:(id)arg1 ;
-(id)titleActivityIndicator;
-(void)setBottomBarView:(id)arg1 ;
-(id)bottomBarView;
-(void)setMoreButton:(id)arg1 ;
-(void)_moreButtonTapped:(id)arg1 ;
-(void)setSkipLabel:(id)arg1 ;
-(id)skipLabel;
-(void)setSkipButton:(id)arg1 ;
-(id)skipButton;
-(void)_skipButtonTapped:(id)arg1 ;
-(void)setIsolatedBrandingView:(id)arg1 ;
-(id)isolatedBrandingView;
-(void)setToolbarSynchronizedBrandingView:(id)arg1 ;
-(id)toolbarSynchronizedBrandingView;
-(void)_singleTapGestureRecognized:(id)arg1 ;
-(void)setBarsVisible:(BOOL)arg1 ;
-(BOOL)fullscreen;
-(double)skipDuration;
-(double)startEnablingSkipTime;
-(BOOL)skipButtonCountingDown;
-(void)setSkipDuration:(double)arg1 ;
-(void)setStartEnablingSkipTime:(double)arg1 ;
-(void)updateSkipLabel;
-(void)setSkipButtonCountingDown:(BOOL)arg1 ;
-(BOOL)barsVisible;
-(void)startEnablingSkipButtonWithCountdownDuration:(double)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(BOOL)isSkipButtonCountingDownOrEnabled;
-(void)setTitleActivityIndicatorVisible:(BOOL)arg1 ;
-(BOOL)titleActivityIndicatorVisible;
-(id)doneButton;
@end

