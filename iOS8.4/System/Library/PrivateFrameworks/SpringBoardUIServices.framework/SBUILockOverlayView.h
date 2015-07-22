/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBInteractionPassThroughView.h>

@protocol SBUILockOverlayViewDelegate;
@class UIResizableView, UILabel, UIButton, SBLockOverlayStylePropertiesFactory, _UILegibilitySettings;

@interface SBUILockOverlayView : SBInteractionPassThroughView {

	id<SBUILockOverlayViewDelegate> _delegate;
	UIResizableView* _textContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _actionButton;
	SBLockOverlayStylePropertiesFactory* _underlayPropertiesFactory;
	unsigned long long _style;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) id<SBUILockOverlayViewDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) SBLockOverlayStylePropertiesFactory * underlayPropertiesFactory;              //@synthesize underlayPropertiesFactory=_underlayPropertiesFactory - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                                      //@synthesize actionButton=_actionButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBUILockOverlayViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SBUILockOverlayViewDelegate>)delegate;
-(unsigned long long)style;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(UILabel *)subtitleLabel;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_titleFont;
-(UIButton *)actionButton;
-(double)_maxLabelWidth;
-(id)_actionFont;
-(id)_legibilitySettingsForStyle:(unsigned long long)arg1 ;
-(void)_buttonPressed;
-(void)_sizeView:(id)arg1 forFixedWith:(BOOL)arg2 ;
-(unsigned long long)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(CGSize)arg3 ;
-(SBLockOverlayStylePropertiesFactory *)underlayPropertiesFactory;
-(id)_subtitleFont;
@end
