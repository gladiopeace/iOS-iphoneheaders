/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBBulletinViewControllerDelegate.h>
#import <SpringBoard/SBSizeObservingViewDelegate.h>
#import <SpringBoard/SBNotificationCenterWidgetHost.h>
#import <SpringBoard/SBBulletinActionHandler.h>

@protocol SBNotificationCenterViewControllerDelegate;
@class UIView, SBNotificationCenterSeparatorView, SBModeViewController, SBBulletinObserverViewController, UIStatusBar, SBChevronView, _UIBackdropView;

@interface SBNotificationCenterViewController : UIViewController <SBBulletinViewControllerDelegate, SBSizeObservingViewDelegate, SBNotificationCenterWidgetHost, SBBulletinActionHandler> {

	<SBNotificationCenterViewControllerDelegate>* _delegate;
	UIView* _clippingView;
	UIView* _containerView;
	UIView* _contentView;
	UIView* _backgroundView;
	SBNotificationCenterSeparatorView* _bottomSeparator;
	SBModeViewController* _modeController;
	SBBulletinObserverViewController* _todayViewController;
	SBBulletinObserverViewController* _allModeViewController;
	SBBulletinObserverViewController* _missedModeViewController;
	UIStatusBar* _statusBar;
	SBChevronView* _grabberView;
	UIView* _grabberContentView;
	UIView* _grabberBackgroundView;
	SBChevronView* _registeredGrabberView;
	CGRect _grabberContentViewFrameForRegisteredGrabber;
	/*^block*/ id _registeredGrabberHideBlock;
	struct {
		unsigned blursBackground : 1;
		unsigned showsBackground : 1;
		unsigned isBackgroundValid : 1;
		unsigned isGrabberEnabled : 1;
		unsigned isGrabberLockEngaged : 1;
		unsigned viewHitTestsAsOpaque : 1;
		unsigned isViewHitTestingValid : 1;
	}  _notificationCenterViewControllerFlags;

}

@property (assign,nonatomic) <SBNotificationCenterViewControllerDelegate> * delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSuppressingNotificationUpdates,nonatomic) BOOL suppressesNotificationUpdates; 
@property (assign,nonatomic) float contentViewAlpha; 
@property (assign,nonatomic) UIEdgeInsets clippingInsets; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (assign,getter=isGrabberViewEnabled,nonatomic) BOOL grabberViewEnabled; 
@property (assign,nonatomic) BOOL showsBackground; 
@property (assign,nonatomic) BOOL blursBackground; 
@property (nonatomic,readonly) _UIBackdropView * backdropView; 
@property (nonatomic,readonly) SBChevronView * grabberView;                                                           //@synthesize grabberView=_grabberView - In the implementation block
@property (nonatomic,readonly) int layoutMode; 
@property (assign,nonatomic) <SBWidgetViewControllerHostDelegate> * widgetDelegate; 
+(id)_localizableTitleForBulletinViewControllerOfClass:(Class)arg1 ;
+(id)grayControlInteractionTintColor;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)runScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 ;
-(void)_loadContentView;
-(BOOL)handleActionForBulletin:(id)arg1 ;
-(id)widgetDelegate;
-(void)setWidgetDelegate:(id)arg1 ;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)setContentViewAlpha:(float)arg1 ;
-(void)setClippingInsets:(UIEdgeInsets)arg1 ;
-(void)setShowsBackground:(BOOL)arg1 ;
-(id)colorForElement:(int)arg1 ;
-(void)prepareLayoutForPresentationFromBanner;
-(void)setSuppressesNotificationUpdates:(BOOL)arg1 ;
-(CGRect)revealRectForBulletin:(id)arg1 ;
-(id)_grabberColor;
-(id)_relevanceDateColor;
-(UIEdgeInsets)clippingInsets;
-(id)unregisterSharedGrabberView;
-(void)_loadContentViewControllersForCurrentState;
-(void)_updateContrastSettingsForGrabberView;
-(void)_updateContrastSettingsForBottomSeparator;
-(id)_newBulletinObserverViewControllerOfClass:(Class)arg1 ;
-(id)_todayViewControllerCreateIfNecessary:(BOOL)arg1 ;
-(id)_allModeViewControllerCreateIfNecessary:(BOOL)arg1 ;
-(id)_missedModeViewControllerCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)showsBackground;
-(id)_newBackgroundView;
-(void)_setViewHitTestAsOpaque:(BOOL)arg1 ;
-(void)_validateBackgroundViewIfNecessary;
-(id)_newGrabberView;
-(BOOL)isGrabberViewEnabled;
-(void)_configureGrabberForSoloMode:(BOOL)arg1 ;
-(void)_configureView;
-(void)_loadClippingView;
-(void)_loadContainerView;
-(void)_loadStatusBar;
-(void)_loadGrabberContentView;
-(void)_loadBottomSeparator;
-(void)_configureModeControllerView;
-(void)loadInitialViewState;
-(CGRect)_containerFrame;
-(void)setGrabberViewEnabled:(BOOL)arg1 ;
-(void)disableGrabberLock;
-(void)_register:(BOOL)arg1 grabberView:(id)arg2 withHideBlock:(/*^block*/ id)arg3 ;
-(BOOL)isGrabberLocked;
-(CGRect)_grabberContentViewFrameForDefaultGrabberPresentation;
-(void)_setContainerFrame:(CGRect)arg1 ;
-(CGRect)_grabberContentViewFrameForRegisteredGrabber;
-(CGRect)_containerFrame:(BOOL)arg1 ;
-(CGRect)positionContentForTouchAtLocation:(CGPoint)arg1 ;
-(void)updateForChangeInMessagePrivacy;
-(BOOL)isSuppressingNotificationUpdates;
-(void)registerSharedGrabberView:(id)arg1 withHideBlock:(/*^block*/ id)arg2 ;
-(void)_reloadAllWidgets;
-(void)abortAnimatedPositionChange;
-(void)presentGrabberView;
-(void)dismissGrabberView;
-(float)contentViewAlpha;
-(CGRect)grabberContentRect;
-(CGRect)contentFrame;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)backdropView;
-(BOOL)blursBackground;
-(void)setBlursBackground:(BOOL)arg1 ;
-(int)layoutMode;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
-(id)grabberView;
@end

