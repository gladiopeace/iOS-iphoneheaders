/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@protocol ASTGestureRecorderControlsViewDelegate;
@class UIButton, ASTBiggerProgressView;

@interface ASTGestureRecorderControlsView : UIView {

	id<ASTGestureRecorderControlsViewDelegate> _delegate;
	UIButton* _leftButton;
	UIButton* _rightButton;
	ASTBiggerProgressView* _progressView;

}

@property (assign,nonatomic) id<ASTGestureRecorderControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float progress; 
@property (assign,getter=isLeftButtonEnabled,nonatomic) BOOL leftButtonEnabled; 
@property (assign,getter=isRightButtonEnabled,nonatomic) BOOL rightButtonEnabled; 
@property (nonatomic,retain) id leftButton;                                                    //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) id rightButton;                                                   //@synthesize rightButton=_rightButton - In the implementation block
+(double)defaultHeight;
-(void)setLeftButtonEnabled:(BOOL)arg1 ;
-(BOOL)isRightButtonEnabled;
-(BOOL)isLeftButtonEnabled;
-(void)setRightButtonEnabled:(BOOL)arg1 ;
-(void)setLeftButtonColor:(int)arg1 title:(id)arg2 enabled:(BOOL)arg3 rightButtonColor:(int)arg4 title:(id)arg5 enabled:(BOOL)arg6 animationDuration:(double)arg7 completion:(/*^block*/id)arg8 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ASTGestureRecorderControlsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<ASTGestureRecorderControlsViewDelegate>)delegate;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)_buttonTapped:(id)arg1 ;
-(id)leftButton;
-(id)rightButton;
-(void)setLeftButton:(id)arg1 ;
-(void)setRightButton:(id)arg1 ;
@end

