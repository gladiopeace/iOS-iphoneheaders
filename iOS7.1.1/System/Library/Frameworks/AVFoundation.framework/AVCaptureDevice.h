/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceInternal, NSString, NSArray, AVCaptureDeviceFormat;

@interface AVCaptureDevice : NSObject {

	AVCaptureDeviceInternal* _internal;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (getter=isConnected,nonatomic,readonly) bool connected; 
@property (nonatomic,readonly) NSArray * formats; 
@property (nonatomic,retain) AVCaptureDeviceFormat * activeFormat; 
@property (assign,nonatomic) SCD_Struct_CM4 activeVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_CM4 activeVideoMaxFrameDuration; 
+(id)devicesWithMediaType:(id)arg1 ;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
+(id)deviceWithUniqueID:(id)arg1 ;
+(id)_devices;
+(long long)authorizationStatusForMediaType:(id)arg1 ;
+(void)requestAccessForMediaType:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
+(void)initialize;
+(id)devices;
-(bool)addInput:(id)arg1 ;
-(id)session;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(SCD_Struct_CM4)activeVideoMinFrameDuration;
-(id)activeFormat;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)activeVideoMaxFrameDuration;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_CM4)arg1 ;
-(bool)isConnected;
-(id)activeInput;
-(void)setActiveInput:(id)arg1 ;
-(bool)_startUsingDevice:(id*)arg1 ;
-(void)_stopUsingDevice;
-(bool)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(id)modelID;
-(bool)hasMediaType:(id)arg1 ;
-(bool)supportsAVCaptureSessionPreset:(id)arg1 ;
-(void)removeInput:(id)arg1 ;
-(void)_sessionWillStart;
-(void)_sessionDidStart;
-(bool)isSubjectAreaChangeMonitoringEnabled;
-(void)setSubjectAreaChangeMonitoringEnabled:(bool)arg1 ;
-(bool)isFaceDetectionSupported;
-(bool)isFaceDetectionDuringVideoPreviewSupported;
-(bool)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1 ;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(bool)isFaceDetectionDebugMetadataReportingEnabled;
-(void)setFaceDetectionDebugMetadataReportingEnabled:(bool)arg1 ;
-(bool)isHighDynamicRangeSceneDetectionSupported;
-(bool)isHighDynamicRangeSceneDetectionEnabled;
-(void)setHighDynamicRangeSceneDetectionEnabled:(bool)arg1 ;
-(bool)isHighDynamicRangeScene;
-(bool)isMachineReadableCodeDetectionSupported;
-(bool)isInUseByAnotherApplication;
-(id)formats;
-(void)setActiveFormat:(id)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_CM4)arg1 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_CM4)arg1 ;
-(bool)isActiveVideoMinFrameDurationSet;
-(bool)isActiveVideoMaxFrameDurationSet;
-(void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(bool)arg2 ;
-(OpaqueCMClockRef)deviceClock;
-(bool)isLockedForConfiguration;
-(bool)lockForConfiguration:(id*)arg1 ;
-(void)unlockForConfiguration;
-(bool)open:(id*)arg1 ;
-(bool)hasFlash;
-(bool)isFlashAvailable;
-(bool)isFlashActive;
-(bool)isFlashModeSupported:(long long)arg1 ;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(bool)hasTorch;
-(float)torchLevel;
-(bool)isTorchModeSupported:(long long)arg1 ;
-(bool)isTorchAvailable;
-(bool)isTorchActive;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1 ;
-(bool)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(bool)isFocusModeSupported:(long long)arg1 ;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(bool)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(bool)isAdjustingFocus;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(bool)isAutoFocusRangeRestrictionSupported;
-(long long)autoFocusRangeRestriction;
-(void)setAutoFocusRangeRestriction:(long long)arg1 ;
-(float)focusPosition;
-(void)setFocusPosition:(float)arg1 ;
-(bool)isManualFocusSupportEnabled;
-(void)setManualFocusSupportEnabled:(bool)arg1 ;
-(bool)isSmoothAutoFocusSupported;
-(bool)isSmoothAutoFocusEnabled;
-(void)setSmoothAutoFocusEnabled:(bool)arg1 ;
-(bool)isExposureModeSupported:(long long)arg1 ;
-(long long)exposureMode;
-(void)setExposureMode:(long long)arg1 ;
-(SCD_Struct_CM4)exposureDuration;
-(void)setExposureDuration:(SCD_Struct_CM4)arg1 ;
-(float)exposureGain;
-(void)setExposureGain:(float)arg1 ;
-(bool)isManualExposureSupportEnabled;
-(void)setManualExposureSupportEnabled:(bool)arg1 ;
-(float)autoExposureBias;
-(void)setAutoExposureBias:(float)arg1 ;
-(bool)isExposurePointOfInterestSupported;
-(CGPoint)exposurePointOfInterest;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(bool)isAdjustingExposure;
-(bool)isWhiteBalanceModeSupported:(long long)arg1 ;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(float)whiteBalanceTemperature;
-(void)setWhiteBalanceTemperature:(float)arg1 ;
-(bool)isAdjustingWhiteBalance;
-(bool)isImageControlModeSupported:(long long)arg1 ;
-(bool)automaticallyAdjustsImageControlMode;
-(void)setAutomaticallyAdjustsImageControlMode:(bool)arg1 ;
-(long long)imageControlMode;
-(void)setImageControlMode:(long long)arg1 ;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(double)videoZoomFactor;
-(void)setVideoZoomFactor:(double)arg1 ;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(bool)isRampingVideoZoom;
-(void)cancelVideoZoomRamp;
-(bool)isHDRSupported;
-(bool)HDRUsesPreBracketedFrameAsEV0;
-(bool)isSISSupported;
-(bool)isLowLightBoostSupported;
-(bool)isLowLightBoostEnabled;
-(bool)automaticallyEnablesLowLightBoostWhenAvailable;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1 ;
-(void*)copyFigCaptureStreamFactoryTestProperty:(CFStringRef)arg1 error:(id*)arg2 ;
-(void)setFigCaptureStreamFactoryTestProperty:(CFStringRef)arg1 withValue:(void*)arg2 error:(id*)arg3 ;
-(bool)doesHandleNotification:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(bool)isOpen;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setContrast:(float)arg1 ;
-(long long)position;
-(void)close;
-(id)localizedName;
-(float)contrast;
-(id)uniqueID;
@end

