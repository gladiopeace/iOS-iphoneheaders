/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol PLModalDimmingContained;
@class UIImageView, UIViewController, UIView;

@interface PLModalDimmingViewController : UIViewController {

	UIImageView* _vignetteView;
	UIViewController<PLModalDimmingContained>* _contentViewController;
	UIView* _wrapperView;

}

@property (nonatomic,retain) UIViewController<PLModalDimmingContained> * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)contentViewController;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(id)arg1 ;
-(void)_updateWrapperView:(id)arg1 toOrientation:(long long)arg2 forViewController:(id)arg3 ;
-(void)_updateVignetteToOrientation:(long long)arg1 ;
-(void)presentWithCustomAnimation;
-(void)presentModalOnViewController:(id)arg1 animated:(bool)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)dismissWithCustomAnimation:(int)arg1 completionHandler:(/*^block*/ id)arg2 ;
@end

