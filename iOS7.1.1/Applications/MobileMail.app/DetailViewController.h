/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIToolbarDelegate.h>
#import <MobileMail/MFFreezableContent.h>

@class UIViewController, UIView, UIToolbar, UIWindow;

@interface DetailViewController : UIViewController <UIToolbarDelegate, MFFreezableContent> {

	UIViewController* _contentViewController;
	UIView* _contentContainerView;
	UIToolbar* _toolbar;
	UIView* _frozenContentSnapshotView;
	UIWindow* _snapshotWindow;

}

@property (nonatomic,retain) UIViewController * contentViewController; 
@property (nonatomic,readonly) UIToolbar * toolbar;                                 //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,readonly) UIView * contentContainerView;                       //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (assign,nonatomic) BOOL contentScrollEnabled; 
-(void)freezeContent;
-(void)unfreezeContent;
-(void)_getFrameForToolbar:(CGRect*)arg1 contentView:(CGRect*)arg2 ;
-(BOOL)contentScrollEnabled;
-(void)setContentScrollEnabled:(BOOL)arg1 ;
-(id)rasterizableContentSubviews;
-(void)dealloc;
-(id)init;
-(int)positionForBar:(id)arg1 ;
-(void)loadView;
-(id)contentViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)toolbar;
-(void)setContentViewController:(id)arg1 ;
-(id)contentContainerView;
@end

