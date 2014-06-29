/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <CommunicationsSetupUI/CNFRegFirstRunExperience.h>

@protocol CNFRegFirstRunDelegate;
@class UIButton, CNFRegController, UIBarButtonItem;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {

	UIButton* _learnMoreButton;
	<CNFRegFirstRunDelegate>* _delegate;
	CNFRegController* _regController;

}

@property (nonatomic,retain) CNFRegController * regController;                          //@synthesize regController=_regController - In the implementation block
@property (assign,nonatomic) <CNFRegFirstRunDelegate> * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,@dynamic,readonly) long long currentAppearanceStyle; 
@property (nonatomic,@dynamic,retain) UIBarButtonItem * customLeftButton; 
@property (nonatomic,@dynamic,retain) UIBarButtonItem * customRightButton; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)regController;
-(id)userInteractionColor;
-(void)setRegController:(id)arg1 ;
-(long long)currentAppearanceStyle;
-(id)initWithRegController:(id)arg1 account:(id)arg2 ;
-(void)setCustomLeftButton:(id)arg1 ;
-(void)setCustomRightButton:(id)arg1 ;
-(id)customLeftButton;
-(id)customRightButton;
-(void)_learnMorePressed:(id)arg1 ;
-(void)_getStartedPressed:(id)arg1 ;
-(void)willBecomeActive;
@end

