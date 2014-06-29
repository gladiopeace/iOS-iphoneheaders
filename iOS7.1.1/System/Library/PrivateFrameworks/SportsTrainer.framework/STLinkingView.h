/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>

@protocol STLinkingViewDelegate;
@class UIView, UIButton, UILabel, NSString;

@interface STLinkingView : UIView {

	<STLinkingViewDelegate>* _delegate;
	long long _linkingType;
	UIView* _pulseView;
	bool _animating;
	bool _animateLayout;
	bool _bordered;
	UIButton* _rescanButton;
	UIButton* _cancelButton;
	UIButton* _linkNewButton;
	UIButton* _doneButton;
	UIButton* _unlinkButton;
	UILabel* _instructionLabel;
	UILabel* _fgsnLabel;
	NSString* _fgsnSerialNumber;

}

@property (assign,nonatomic) long long linkingType;                           //@synthesize linkingType=_linkingType - In the implementation block
@property (nonatomic,copy) NSString * serialNumber; 
@property (assign,nonatomic) <STLinkingViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool bordered;                                   //@synthesize bordered=_bordered - In the implementation block
-(void)setBordered:(bool)arg1 ;
-(id)_sensorImageName;
-(void)_done;
-(void)_unlinkRemote;
-(id)_haloImageOfSize:(CGSize)arg1 color:(id)arg2 strokeWidth:(double)arg3 ;
-(void)setLinkingType:(long long)arg1 ;
-(long long)linkingType;
-(bool)bordered;
-(void)_rescanForRemote;
-(void)_rescanForEmped;
-(void)_receiverHideAnimationDidStop;
-(void)_sensorHideAnimationDidStop;
-(void)_linkNewRemote;
-(void)_linkNewEmped;
-(void)setLinkingType:(long long)arg1 animated:(bool)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)_newButton;
-(void)_stopAnimation;
-(void)setSerialNumber:(id)arg1 ;
-(void)_startAnimation;
-(id)serialNumber;
@end

