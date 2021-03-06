/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CAMVideoPreviewView, CAMFocusPointView, CAMFocusView, CAMFocusLockView, CAMFocusSplitAttachmentView, CAMFocusLockAttachmentView, CAMFocusAttachmentView, CAMExposureBiasSlider, NSMutableDictionary, CAMCaptureController;

@interface CAMPreviewView : UIView {

	UIView* _maskingContainerView;
	UIView* _previewContainer;
	CAMVideoPreviewView* _videoPreviewView;
	UIView* _focusContainerView;
	CAMFocusPointView* _focusView;
	CAMFocusPointView* _exposureView;
	CAMFocusView* _continuousAutoFocusView;
	CAMFocusLockView* _lockFocusView;
	CAMFocusSplitAttachmentView* _splitFocusAndExposureAttachment;
	CAMFocusLockAttachmentView* _lockFocusAttachment;
	CAMFocusAttachmentView* _dismissFocusAttachment;
	CAMExposureBiasSlider* _exposureBiasSlider;
	UIView* _facesContainerView;
	NSMutableDictionary* _faceIDsToViews;
	UIView* _dimmingView;
	float _dimmingStrength;
	unsigned _canShowFocus : 1;
	unsigned _controlsAreVisible : 1;
	char _square;
	char _showSplitFocusAndExposureAttachment;
	char _splitFocusAndExposure;
	char _showLockFocusAttachment;
	char _showExposureBiasSliderOnChange;
	char _hideExposureBiasSlider;
	char __showExposureBiasSlider;
	float _exposureBiasMin;
	float _exposureBiasMax;
	float _exposureBiasValue;
	int __exposureBiasSide;
	CAMCaptureController* __sharedCameraController;
	CGRect _lastFocusFrame;
	CGRect _lastExposureFrame;

}

@property (nonatomic,retain,readonly) CAMVideoPreviewView * videoPreviewView;                              //@synthesize videoPreviewView=_videoPreviewView - In the implementation block
@property (assign,getter=isSquare,nonatomic) char square;                                                  //@synthesize square=_square - In the implementation block
@property (assign,nonatomic) float dimmingStrength;                                                        //@synthesize dimmingStrength=_dimmingStrength - In the implementation block
@property (nonatomic,readonly) CGRect lastFocusFrame;                                                      //@synthesize lastFocusFrame=_lastFocusFrame - In the implementation block
@property (nonatomic,readonly) CGRect lastExposureFrame;                                                   //@synthesize lastExposureFrame=_lastExposureFrame - In the implementation block
@property (nonatomic,readonly) double lastFocusFadeOutTime; 
@property (nonatomic,readonly) double lastExposureFadeOutTime; 
@property (assign,nonatomic) char showSplitFocusAndExposureAttachment;                                     //@synthesize showSplitFocusAndExposureAttachment=_showSplitFocusAndExposureAttachment - In the implementation block
@property (assign,nonatomic) char splitFocusAndExposure;                                                   //@synthesize splitFocusAndExposure=_splitFocusAndExposure - In the implementation block
@property (assign,nonatomic) char showLockFocusAttachment;                                                 //@synthesize showLockFocusAttachment=_showLockFocusAttachment - In the implementation block
@property (assign,nonatomic) float exposureBiasMin;                                                        //@synthesize exposureBiasMin=_exposureBiasMin - In the implementation block
@property (assign,nonatomic) float exposureBiasMax;                                                        //@synthesize exposureBiasMax=_exposureBiasMax - In the implementation block
@property (assign,nonatomic) float exposureBiasValue;                                                      //@synthesize exposureBiasValue=_exposureBiasValue - In the implementation block
@property (assign,nonatomic) char showExposureBiasSliderOnChange;                                          //@synthesize showExposureBiasSliderOnChange=_showExposureBiasSliderOnChange - In the implementation block
@property (assign,nonatomic) char hideExposureBiasSlider;                                                  //@synthesize hideExposureBiasSlider=_hideExposureBiasSlider - In the implementation block
@property (nonatomic,readonly) int _exposureBiasSide;                                                      //@synthesize _exposureBiasSide=__exposureBiasSide - In the implementation block
@property (assign,setter=_setShowExposureBiasSlider:,nonatomic) char _showExposureBiasSlider;              //@synthesize _showExposureBiasSlider=__showExposureBiasSlider - In the implementation block
@property (assign,nonatomic,__weak) CAMCaptureController * _sharedCameraController;                        //@synthesize _sharedCameraController=__sharedCameraController - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(CAMVideoPreviewView *)videoPreviewView;
-(char)isSquare;
-(void)setSquare:(char)arg1 ;
-(void)focusDidEnd;
-(void)setDimmingStrength:(float)arg1 ;
-(void)removeAllFocusViewsLeavingActivePointViews:(char)arg1 ;
-(void)setShowSplitFocusAndExposureAttachment:(char)arg1 ;
-(void)setShowLockFocusAttachment:(char)arg1 ;
-(void)showLockFocusAtPoint:(CGPoint)arg1 ;
-(void)updateFocusPoint:(CGPoint)arg1 ;
-(void)updateExposurePoint:(CGPoint)arg1 ;
-(void)showFocusAtPoint:(CGPoint)arg1 ;
-(char)splitFocusAndExposure;
-(void)animateFocusLock;
-(void)setShouldShowFocus:(char)arg1 ;
-(void)setFocusViewsHidden:(char)arg1 animated:(char)arg2 ;
-(void)fadeOutFaceTrackingViews;
-(void)removeContinuousAutoFocusView;
-(void)showContinuousAutoFocusView;
-(void)showFaceTrackingViewsForFaces:(id)arg1 ;
-(id)splitFocusAndExposureAttachment;
-(void)updateFocusViewsLastInteractionTime;
-(void)setSplitFocusAndExposure:(char)arg1 ;
-(id)lockFocusAttachment;
-(void)dismissFocusViews;
-(id)dismissFocusAttachment;
-(void)animateFocusLockScaleDown;
-(CGPoint)currentFocusPoint;
-(id)exposurePointView;
-(CGPoint)currentExposurePoint;
-(void)suspendFocusViewFadeOut;
-(void)resumeFocusViewFadeOutResetPending:(char)arg1 ;
-(int)_exposureBiasSide;
-(void)setSquare:(char)arg1 animated:(char)arg2 ;
-(void)setExposureBiasSide:(int)arg1 animated:(char)arg2 ;
-(void)setShowExposureBiasSliderOnChange:(char)arg1 ;
-(void)setExposureBiasMin:(float)arg1 ;
-(void)setExposureBiasMax:(float)arg1 ;
-(void)setExposureBiasValue:(float)arg1 ;
-(void)setHideExposureBiasSlider:(char)arg1 ;
-(id)focusPointView;
-(double)lastFocusFadeOutTime;
-(CGRect)lastFocusFrame;
-(double)lastExposureFadeOutTime;
-(CGRect)lastExposureFrame;
-(void)setControlsAreVisible:(char)arg1 ;
-(float)exposureBiasMin;
-(float)exposureBiasMax;
-(float)exposureBiasValue;
-(char)_allowSplitFocusAndExposure;
-(void)_attachAttachment:(id)arg1 toFocusView:(id)arg2 position:(int)arg3 ;
-(void)_updateSplitFocusAndExposureAttachment;
-(char)_allowFocusLockAttachments;
-(void)_updateLockFocusAttachment;
-(char)_enableExposureBias;
-(void)_createExposureBiasSlider;
-(char)_allowDismissFocusAttachment;
-(void)_showFocusAtPoint:(CGPoint)arg1 startAnimating:(char)arg2 ;
-(void)_createFocusViewIfNeeded;
-(void)_updateFocusFrameForPoint:(CGPoint)arg1 ;
-(void)_layoutExposureBiasSlider;
-(void)_setShowExposureBiasSlider:(char)arg1 ;
-(void)_updateExposureFrameForPoint:(CGPoint)arg1 ;
-(char)_shouldDismissFocusViewsOnFocusDidEnd;
-(char)showExposureBiasSliderOnChange;
-(void)setDimmingStrength:(float)arg1 duration:(double)arg2 ;
-(char)_shouldVendAttachment:(id)arg1 ;
-(char)hideExposureBiasSlider;
-(void)_setExposureBiasSliderAlpha:(float)arg1 animationDuration:(double)arg2 ;
-(id)exposureBiasSlider;
-(void)resetFocusViewFadeOutSuspensions;
-(float)dimmingStrength;
-(char)showSplitFocusAndExposureAttachment;
-(char)showLockFocusAttachment;
-(char)_showExposureBiasSlider;
-(CAMCaptureController *)_sharedCameraController;
-(void)set_sharedCameraController:(CAMCaptureController *)arg1 ;
@end

