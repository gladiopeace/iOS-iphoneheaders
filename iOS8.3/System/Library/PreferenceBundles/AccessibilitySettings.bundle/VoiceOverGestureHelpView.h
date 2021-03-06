/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:33:51 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, VoiceOverGestureHelpViewController, UINavigationBar;

@interface VoiceOverGestureHelpView : UIView {

	UILabel* _titleLabel;
	UILabel* _infoLabel;
	VoiceOverGestureHelpViewController* _delegate;
	UINavigationBar* _navBar;

}

@property (assign,nonatomic) VoiceOverGestureHelpViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UINavigationBar * navBar;                                   //@synthesize navBar=_navBar - In the implementation block
-(void)setTitleText:(id)arg1 infoText:(id)arg2 ;
-(UINavigationBar *)navBar;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(void)setDelegate:(VoiceOverGestureHelpViewController *)arg1 ;
-(void)layoutSubviews;
-(VoiceOverGestureHelpViewController *)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_accessibilitySetCurrentGesture:(id)arg1 ;
@end

