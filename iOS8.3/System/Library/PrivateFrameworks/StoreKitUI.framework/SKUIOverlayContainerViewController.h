/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIControl, UITapGestureRecognizer, NSMutableArray, NSArray, NSString;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {

	UIControl* _backstopView;
	char _isAdjustingViewsForDismiss;
	int _popViewControllerCount;
	int _selectedViewControllerIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMutableArray* _viewControllers;

}

@property (nonatomic,readonly) UIControl * backstopControl; 
@property (nonatomic,copy,readonly) NSArray * viewControllers; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)popViewControllerAnimated:(char)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(NSArray *)viewControllers;
-(void)_tapAction:(id)arg1 ;
-(void)showViewControllers:(id)arg1 ;
-(void)showViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dismissWithFadeTransitionCompletionBlock:(/*^block*/id)arg1 ;
-(void)dismissWithFlipTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(UIControl *)backstopControl;
-(void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_frameAction:(id)arg1 ;
-(void)_removeChildren;
-(void)_positionViewControllersForOrientation:(int)arg1 ;
-(void)_popViewControllers;
-(void)_fadeInViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_slideInViewController:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_pushViewController:(id)arg1 ;
-(CGRect)_frameToCenterViewController:(id)arg1 ;
-(id)_selectedViewController;
-(id)_viewControllerForPoint:(CGPoint)arg1 ;
-(int)_indexOfViewControllerForPoint:(CGPoint)arg1 ;
-(float)_overlaySpacingForOrientation:(int)arg1 ;
-(void)replaceViewController:(id)arg1 withViewController:(id)arg2 ;
@end

