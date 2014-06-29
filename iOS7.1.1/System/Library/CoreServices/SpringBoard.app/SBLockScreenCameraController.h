/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLockScreenSlideUpController.h>

@protocol OS_dispatch_queue, SBLockScreenCameraControllerDelegate;
@class UIView, UIImageView, DeferredPUApplicationCameraViewController, NSDate, SBPasscodeLockDisableAssertion, NSObject, UIWindow;

@interface SBLockScreenCameraController : SBLockScreenSlideUpController {

	UIView* _cameraClippingView;
	UIImageView* _cameraDefaultImageView;
	UIImageView* _cameraLandscapeDefaultImageView;
	UIView* _cameraBackgroundView;
	UIView* _cameraContainerView;
	UIView* _cameraFakeStatusBar;
	DeferredPUApplicationCameraViewController* _cameraViewController;
	BOOL _animatingCameraIn;
	BOOL _cancelCameraAnimation;
	BOOL _cameraModeActive;
	BOOL _cameraVisible;
	NSDate* _lastCameraSessionID;
	BOOL _exitedCameraForAlert;
	BOOL _exitedCameraToHomescreen;
	BOOL _restartCameraAfterCall;
	BOOL _disableGracePeriodForCamera;
	SBPasscodeLockDisableAssertion* _disableGracePeriodForCameraAssertion;
	NSObject<OS_dispatch_queue>* _prewarmQueue;
	UIWindow* _lockScreenWindow;
	id _savedWindowDelegate;
	BOOL _prewarming;
	<SBLockScreenCameraControllerDelegate>* _delegate;

}

@property (nonatomic,readonly) UIView * cameraView;                                          //@synthesize cameraClippingView=_cameraClippingView - In the implementation block
@property (assign,nonatomic) <SBLockScreenCameraControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)shouldReturnToCameraAfterCall;
-(void)noteStartingPhoneCallWhileUILocked;
-(void)activateCamera;
-(void)setLockScreenView:(id)arg1 ;
-(void)abortAnimatedTransition;
-(void)_tearDownCameraPreview;
-(BOOL)isCameraActive;
-(void)_createCameraViewControllerWithNewSessionID:(BOOL)arg1 andStartPreview:(BOOL)arg2 ;
-(void)cleanupFromGesture;
-(void)_didDeactivate;
-(BOOL)isCameraVisible;
-(void)_enableRotationForCamera;
-(void)_didActivate;
-(void)_disableRotationForCamera;
-(void)_dismissCameraAnimated:(BOOL)arg1 ;
-(void)_setupCameraSlideDownAnimation;
-(void)_cleanupFromDismissal;
-(void)prepareForSlideUpAnimation;
-(void)_prewarmCamera;
-(void)_cancelCameraPrewarm;
-(void)setDisableGracePeriodForCamera:(BOOL)arg1 ;
-(void)_removeCameraPreviewViews;
-(void)_removeLockScreenViewFakeStatusBar;
-(void)finalizeGesture;
-(void)_setCameraSessionID:(id)arg1 ;
-(void)_createCameraViewControllerWithNewSessionID;
-(void)_createCameraViewControllerWithOldSessionID;
-(void)cancelReturnToCameraAfterCall;
-(void)_activateCameraWithNewSessionID:(BOOL)arg1 afterCall:(BOOL)arg2 ;
-(void)_activateCameraAfterCall;
-(void)abortDynamicAnimationForScreenOff;
-(void)tearDownCameraUIImmediately;
-(void)setGrabberOnLockScreen:(id)arg1 ;
-(BOOL)wantsStatusBar;
-(void)presentCameraAnimated:(BOOL)arg1 ;
-(void)prepareToReturnToCameraFromCall;
-(void)translateSlidingViewByY:(float)arg1 ;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)deactivate;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)activate;
-(id)cameraView;
-(id)grabberView;
-(BOOL)handleMenuButtonTap;
@end
