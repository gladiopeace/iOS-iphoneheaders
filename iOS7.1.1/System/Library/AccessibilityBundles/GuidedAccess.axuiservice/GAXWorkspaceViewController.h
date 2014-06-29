/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>
#import <GuidedAccess/GAXInterestAreaViewControllerDelegate.h>
#import <GuidedAccess/GAXFeatureViewControllerDelegate.h>
#import <GuidedAccess/GAXEventStealerViewDelegate.h>

@class GAXUIServer, GAXStyleProvider, UIImage, GAXScreenshotViewController, GAXFeatureViewController, UIStatusBar, GAXPassthroughNavigationBar, _UIBackdropView, UILabel, NSMutableArray, GAXInterestAreaViewController;

@interface GAXWorkspaceViewController : GAXViewController <GAXInterestAreaViewControllerDelegate, GAXFeatureViewControllerDelegate, GAXEventStealerViewDelegate> {

	bool _usesResumeNavigationTitles;
	bool _transitionInProgress;
	int _layoutMode;
	GAXUIServer* _userInterfaceServer;
	GAXStyleProvider* _styleProvider;
	UIImage* _clientApplicationScreenshotImage;
	GAXScreenshotViewController* _screenshotViewController;
	GAXFeatureViewController* _featureViewController;
	UIStatusBar* _statusBar;
	GAXPassthroughNavigationBar* _navigationBar;
	_UIBackdropView* _statusAndNavigationBarBackgroundView;
	UILabel* _instructionsLabel;
	NSMutableArray* _transitionContextQueue;

}

@property (assign,nonatomic) GAXUIServer * userInterfaceServer;                                         //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                          //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIImage * clientApplicationScreenshotImage;                                //@synthesize clientApplicationScreenshotImage=_clientApplicationScreenshotImage - In the implementation block
@property (assign,nonatomic) bool usesResumeNavigationTitles;                                           //@synthesize usesResumeNavigationTitles=_usesResumeNavigationTitles - In the implementation block
@property (nonatomic,readonly) GAXInterestAreaViewController * interestAreaViewController; 
@property (nonatomic,readonly) double statusBarHeight; 
@property (nonatomic,retain) GAXScreenshotViewController * screenshotViewController;                    //@synthesize screenshotViewController=_screenshotViewController - In the implementation block
@property (nonatomic,retain) GAXFeatureViewController * featureViewController;                          //@synthesize featureViewController=_featureViewController - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                                   //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) GAXPassthroughNavigationBar * navigationBar;                               //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) _UIBackdropView * statusAndNavigationBarBackgroundView;                    //@synthesize statusAndNavigationBarBackgroundView=_statusAndNavigationBarBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                               //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (assign,nonatomic) int layoutMode;                                                            //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitionContextQueue;                                   //@synthesize transitionContextQueue=_transitionContextQueue - In the implementation block
@property (assign,getter=isTransitionInProgress,nonatomic) bool transitionInProgress;                   //@synthesize transitionInProgress=_transitionInProgress - In the implementation block
@property (nonatomic,readonly) long long applicationInterfaceOrientation; 
@property (nonatomic,readonly) bool navigationBarNeedsMiniMetricsInitialized; 
@property (getter=isTouchEnabled,nonatomic,readonly) bool touchEnabled; 
-(bool)isTouchEnabled;
-(void)setClientApplicationScreenshotImage:(id)arg1 ;
-(bool)eventStealerView:(id)arg1 shouldStealEventAtPoint:(CGPoint)arg2 ;
-(void)releaseOutlets;
-(void)setLayoutMode:(int)arg1 ;
-(id)interestAreaViewController;
-(bool)usesResumeNavigationTitles;
-(void)setUsesResumeNavigationTitles:(bool)arg1 ;
-(void)interestAreaViewController:(id)arg1 didFinishDrawingFingerPath:(id)arg2 interestAreaPath:(id*)arg3 ;
-(CGRect)boundsForConstrainingFingerPathInInterestAreaViewController:(id)arg1 ;
-(id)referenceViewForConvertingFromAndToWindowCoordinateSystemForInterestAreaViewController:(id)arg1 ;
-(id)viewToCoverWithOutOfBoundsDrawingForInterestAreaViewWithController:(id)arg1 edgeInsets:(UIEdgeInsets*)arg2 ;
-(double)scaleForSpecialControlsInInterestAreaViewController:(id)arg1 ;
-(void)setScreenshotViewController:(id)arg1 ;
-(id)screenshotViewController;
-(void)setTransitionContextQueue:(id)arg1 ;
-(id)featureViewController;
-(long long)applicationInterfaceOrientation;
-(void)_loadNavigationBarWithContainerView:(id)arg1 ;
-(void)_loadStatusAndNavigationBarBackgroundViewWithContainerView:(id)arg1 ;
-(void)_loadInstructionsLabelWithContainerView:(id)arg1 ;
-(void)_loadSystemFeatureViewWithContainerView:(id)arg1 ;
-(void)_loadStatusBarWithContainerView:(id)arg1 ;
-(void)_loadScreenshotViewWithContainerView:(id)arg1 ;
-(void)_updateEverythingForLayoutMode:(int)arg1 ;
-(void)setFeatureViewController:(id)arg1 ;
-(void)setStatusAndNavigationBarBackgroundView:(id)arg1 ;
-(void)setInstructionsLabel:(id)arg1 ;
-(id)instructionsLabel;
-(id)_instructionsLabelTextWhenTouchEnabled:(bool)arg1 ;
-(CGSize)_instructionsLabelMaximumSize;
-(UIEdgeInsets)_screenshotViewEdgeInsetsForLayoutMode:(int)arg1 ;
-(bool)_clientApplicationScreenshotImageIsTranslucent;
-(id)clientApplicationScreenshotImage;
-(void)_handleDismissButtonTapped:(id)arg1 ;
-(void)_handleStartButtonTapped:(id)arg1 ;
-(id)_instructionsLabelWithText:(id)arg1 ;
-(CGRect)_adjustedTopChromeViewFrame:(CGRect)arg1 ;
-(id)statusAndNavigationBarBackgroundView;
-(void)_getScreenshotViewParametersForLayoutMode:(int)arg1 scaleFactor:(double*)arg2 frame:(CGRect*)arg3 ;
-(CGRect)_adjustedBottomChromeViewFrame:(CGRect)arg1 ;
-(void)_updateStatusBar;
-(void)_updateStatusAndNavigationBarBackgroundView;
-(void)_updateScreenshotView;
-(void)_updateInterestAreaView;
-(void)_updateInstructionsLabel;
-(void)_updateSystemFeatureView;
-(void)_willBeginTransitionWithType:(int)arg1 ;
-(double)_transitionDuration;
-(void)_didFinishTransitionWithType:(int)arg1 ;
-(bool)isTransitionInProgress;
-(void)setTransitionInProgress:(bool)arg1 ;
-(id)transitionContextQueue;
-(void)_performOrScheduleTransitionWithType:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_performTransitionWithType:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(bool)navigationBarNeedsMiniMetricsInitialized;
-(bool)shouldDisplayMiniToolbarForController:(id)arg1 ;
-(void)featureViewController:(id)arg1 touchSystemFeatureDidChange:(bool)arg2 ;
-(void)setUserInterfaceServer:(id)arg1 ;
-(id)userInterfaceServer;
-(bool)isInterestAreaViewAccessibilityElementWithController:(id)arg1 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)navigationBar;
-(void)setStatusBar:(id)arg1 ;
-(id)statusBar;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(double)statusBarHeight;
-(void)_commonInit;
-(void)setNavigationBar:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)transitionInWithContext:(void*)arg1 completion:(/*^block*/ id)arg2 ;
-(void)transitionOutWithContext:(void*)arg1 completion:(/*^block*/ id)arg2 ;
-(int)layoutMode;
-(void)_updateNavigationBar;
@end

