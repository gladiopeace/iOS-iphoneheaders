/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBDisplayProtocol.h>

@protocol SBAlertDelegate;
@class SBAlertView, NSMutableDictionary, SBActivationContext, NSMapTable, NSHashTable, UIScreen, SBAlertManager;

@interface SBAlert : UIViewController <SBDisplayProtocol> {

	<SBAlertDelegate>* _alertDelegate;
	SBAlertView* _display;
	NSMutableDictionary* _dictionary;
	SBActivationContext* _activationContext;
	BOOL _isWallpaperTunnelActive;
	BOOL _backgroundStyleIsSet;
	int _backgroundStyle;
	BOOL _suppressesBanners;
	NSMapTable* _displayValues;
	NSHashTable* _displayFlags;
	BOOL _orientationChangedEventsEnabled;
	float _accelerometerSampleInterval;
	BOOL _requestedDismissal;
	UIScreen* _targetScreen;
	NSHashTable* _observers;
	SBAlertManager* _alertManager;

}

@property (nonatomic,copy) SBActivationContext * activationContext;                                                          //@synthesize activationContext=_activationContext - In the implementation block
@property (assign,nonatomic) BOOL suppressesBanners; 
@property (assign,setter=_setRequestedDismissal:,getter=_requestedDismissal,nonatomic) BOOL requestedDismissal;              //@synthesize requestedDismissal=_requestedDismissal - In the implementation block
@property (nonatomic,retain) SBAlertManager * alertManager;                                                                  //@synthesize alertManager=_alertManager - In the implementation block
+(void)test;
+(void)registerForAlerts;
-(void)setActivationSetting:(unsigned)arg1 flag:(BOOL)arg2 ;
-(void)handleSlideshowHardwareButton;
-(void)clearDisplaySettings;
-(void)clearActivationSettings;
-(void)setActivationSetting:(unsigned)arg1 value:(id)arg2 ;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(void)setDisplaySetting:(unsigned)arg1 flag:(BOOL)arg2 ;
-(void)setDeactivationSetting:(unsigned)arg1 flag:(BOOL)arg2 ;
-(id)effectiveStatusBarStyleRequest;
-(id)displayValue:(unsigned)arg1 ;
-(BOOL)activationFlag:(unsigned)arg1 ;
-(id)alertManager;
-(id)activationValue:(unsigned)arg1 ;
-(id)_impersonatesApplicationWithBundleID;
-(BOOL)matchesRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(BOOL)deactivationFlag:(unsigned)arg1 ;
-(void)setDeactivationSetting:(unsigned)arg1 value:(id)arg2 ;
-(double)autoDimTime;
-(double)autoLockTime;
-(int)statusBarStyleOverridesToCancel;
-(void)clearDeactivationSettings;
-(BOOL)shouldPendAlertItemsWhileActive;
-(BOOL)managesOwnStatusBarAtActivation;
-(BOOL)showsSpringBoardStatusBar;
-(BOOL)_isLockAlert;
-(BOOL)undimsDisplay;
-(id)statusBarStyleRequest;
-(BOOL)wantsCustomBackgroundStyle;
-(int)customBackgroundStyle;
-(BOOL)allowsEventOnlySuspension;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(void)alertViewIsReadyToDismiss:(id)arg1 ;
-(void)_removeFromImpersonatedAppIfNecessary;
-(id)deactivationValue:(unsigned)arg1 ;
-(int)starkStatusBarStyle;
-(void)setOrientationChangedEventsEnabled:(BOOL)arg1 ;
-(BOOL)orientationChangedEventsEnabled;
-(void)setAccelerometerSampleInterval:(double)arg1 ;
-(double)accelerometerSampleInterval;
-(BOOL)suppressesBanners;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(void)_setTargetScreen:(id)arg1 ;
-(void)clearDisplay;
-(void)dismissAlert;
-(BOOL)isWallpaperTunnelActive;
-(BOOL)allowsStackingOfAlert:(id)arg1 ;
-(float)finalAlpha;
-(void)displayDidDisappear;
-(int)interfaceOrientationForActivation;
-(void)didAnimateLockKeypadIn;
-(void)didAnimateLockKeypadOut;
-(void)didFinishAnimatingIn;
-(void)didFinishAnimatingOut;
-(void)willBeginDeactivationForTransitionToApp:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)currentlyAnimatingDeactivation;
-(void)animateDeactivation;
-(void)setSuppressesBanners:(BOOL)arg1 ;
-(BOOL)_shouldDismissSwitcherOnActivation;
-(id)alertDelegate;
-(void)setAlertDelegate:(id)arg1 ;
-(BOOL)_requestedDismissal;
-(void)_setRequestedDismissal:(BOOL)arg1 ;
-(void)setAlertManager:(id)arg1 ;
-(id)effectiveViewController;
-(void)setDisplaySetting:(unsigned)arg1 value:(id)arg2 ;
-(BOOL)displayFlag:(unsigned)arg1 ;
-(int)effectiveStatusBarStyle;
-(BOOL)isRemote;
-(void)dealloc;
-(id)_screen;
-(id)init;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(int)statusBarStyle;
-(void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2 ;
-(void)setExpectsFaceContact:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)wantsFullScreenLayout;
-(void)loadView;
-(void)deactivate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)activate;
-(id)legibilitySettings;
-(id)display;
-(void)addObserver:(id)arg1 ;
-(void)removeFromView;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
-(void)setBackgroundStyle:(int)arg1 withAnimationFactory:(id)arg2 ;
-(void)removeBackgroundStyleWithAnimationFactory:(id)arg1 ;
-(id)activationContext;
-(void)setDisplay:(id)arg1 ;
-(void)setWallpaperTunnelActive:(BOOL)arg1 ;
-(void)setActivationContext:(id)arg1 ;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(void)handleAutoLock;
-(BOOL)hasTranslucentBackground;
-(BOOL)handleMenuButtonTap;
@end

