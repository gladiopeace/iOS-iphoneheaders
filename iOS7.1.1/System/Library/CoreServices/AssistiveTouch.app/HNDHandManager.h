/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:10 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDAccessibilityManagerObserver.h>

@class HNDEventManager, HNDDisplayManager, HNDAssistiveTouchServer, NSMutableArray, NSArray, HNDCustomGesture, AXDispatchTimer, HNDView, NSMutableDictionary, NSPointerArray;

@interface HNDHandManager : NSObject <HNDAccessibilityManagerObserver> {

	HNDEventManager* _eventManager;
	HNDDisplayManager* _displayManager;
	HNDAssistiveTouchServer* _assistiveTouchServer;
	int _orientation;
	BOOL _firstButtonDown;
	BOOL _secondButtonDown;
	CGPoint _currentLocation;
	NSMutableArray* _recordedFingers;
	int _fingerRecordCount;
	NSArray* _savedGestures;
	CGPoint _pinchAdjustLocation;
	BOOL _isMultiFinger;
	BOOL _isRecording;
	BOOL _finishedRecording;
	BOOL _isInternal;
	float _touchSpeed;
	int _thirdButtonMeaning;
	BOOL _openMenuWithSwaggle;
	BOOL _hardwareEnabled;
	BOOL _alwaysShowMenu;
	NSArray* _customGestures;
	HNDCustomGesture* _currentCustomGesture;
	BOOL _performingGesture;
	AXDispatchTimer* _fingerDownTimer;
	BOOL _fingerDownLock;
	BOOL _fingerDownLockSawFirstUp;
	BOOL _adjustingPinch;
	BOOL _inMultiFingerGesture;
	BOOL _resettingPinch;
	HNDView* _realSelectedPinchFinger;
	BOOL _areFingersPressedDown;
	CGPoint _pressedPinchFingerStartPoint;
	CGPoint _pressedPinchFingerFulcrum;
	float _pressedPinchFingerMovementFromStart;
	NSMutableDictionary* _avPlayers;
	BOOL _usageConfirmationResponded;
	BOOL _voiceControl;
	NSPointerArray* _eventHandlers;

}

@property (assign,nonatomic) float touchSpeed;                                   //@synthesize touchSpeed=_touchSpeed - In the implementation block
@property (nonatomic,@dynamic,readonly) float touchSpeedMultiplier; 
@property (assign,nonatomic) BOOL openMenuWithSwaggle;                           //@synthesize openMenuWithSwaggle=_openMenuWithSwaggle - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowMenu;                                //@synthesize alwaysShowMenu=_alwaysShowMenu - In the implementation block
@property (assign,nonatomic) BOOL voiceControl;                                  //@synthesize voiceControl=_voiceControl - In the implementation block
@property (assign,nonatomic) BOOL hardwareEnabled;                               //@synthesize hardwareEnabled=_hardwareEnabled - In the implementation block
@property (nonatomic,retain) NSArray * customGestures;                           //@synthesize customGestures=_customGestures - In the implementation block
@property (nonatomic,@dynamic,readonly) float volumeLevel; 
@property (nonatomic,@dynamic,readonly) BOOL isVoiceControlRunning; 
@property (nonatomic,retain) NSPointerArray * eventHandlers;                     //@synthesize eventHandlers=_eventHandlers - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(void)updateAllSettings;
-(void)systemServerConnected;
-(BOOL)hardwareEnabled;
-(float)touchSpeedMultiplier;
-(void)rotateEventToOrientation:(id)arg1 ;
-(void)hoverMoved:(CGPoint)arg1 ;
-(void)firstButtonPress:(int)arg1 ;
-(void)secondButtonPress:(int)arg1 ;
-(void)thirdButtonPress:(int)arg1 ;
-(void)performGesture:(id)arg1 ;
-(id)pointsForNumberOfFingers:(unsigned)arg1 withExistingFingerMidPoint:(CGPoint)arg2 ;
-(void)setCaptureEvents:(BOOL)arg1 ;
-(void)setNubbitMoving:(BOOL)arg1 ;
-(BOOL)inPinchMode;
-(void)showMenu:(BOOL)arg1 ;
-(BOOL)alwaysShowMenu;
-(void)moveFingersToPointInFingerCoordinateSpace:(CGPoint)arg1 allowOutOfBounds:(BOOL)arg2 ;
-(BOOL)canShowFingers;
-(void)specialToolUsageEnded;
-(void)resetPinch;
-(void)volumeChanged;
-(void)menuExited;
-(void)keyboardVisible:(BOOL)arg1 withFrame:(CGRect)arg2 ;
-(void)handleRealEvent:(id)arg1 ;
-(int)deviceOrientation;
-(void)_updateSavedGestures;
-(void)orientationChanged;
-(void)_registerForSettingsNotifications;
-(void)_homeButtonPressed:(id)arg1 ;
-(void)_handleUsageConfirmation;
-(void)setOpenMenuWithSwaggle:(BOOL)arg1 ;
-(void)setTouchSpeed:(float)arg1 ;
-(void)setCustomGestures:(id)arg1 ;
-(BOOL)_moveFingersWithoutEventsToPoints:(id)arg1 allowOutOfBounds:(BOOL)arg2 ;
-(void)_handlePinchFingerDownWithFinger:(id)arg1 ;
-(void)_resetPinchAdjust;
-(void)_movePinchToolToPoint:(CGPoint)arg1 ;
-(void)_handleRealPinchAdjust:(CGPoint)arg1 ;
-(void)_handleRealPinchToolMove:(CGPoint)arg1 ;
-(void)_moveFingersToPoint:(CGPoint)arg1 ;
-(void)_handleRealPinchToolUp:(CGPoint)arg1 ;
-(id)pressFingersDown;
-(id)liftFingersUp;
-(void)_performCustomGesture;
-(BOOL)inCustomGesture;
-(void)_handleRealCustomGestureUp:(CGPoint)arg1 ;
-(void)_handleRealMultiFingerUp:(CGPoint)arg1 ;
-(void)_handleRealCustomGestureMove:(CGPoint)arg1 ;
-(void)_handleRealMultiFingerMove:(CGPoint)arg1 ;
-(void)_handleRealPinchToolDown:(CGPoint)arg1 ;
-(void)_handleRealCustomGestureDown:(CGPoint)arg1 ;
-(void)_handleRealMultiFingerDown:(CGPoint)arg1 ;
-(void)notifyUserEventOccurred;
-(id)eventHandlers;
-(BOOL)usingSpecialTool;
-(void)_handleMultiTouchToolEvent:(id)arg1 ;
-(BOOL)_shouldHandleRealEventWithMultiTouchTool;
-(void)performHardwareButton:(int)arg1 state:(int)arg2 ;
-(CGPoint)rotateEventFromOrientation:(CGPoint)arg1 ;
-(void)setEventHandlers:(id)arg1 ;
-(void)setHardwareEnabled:(BOOL)arg1 ;
-(void)setAlwaysShowMenu:(BOOL)arg1 ;
-(void)_reallyPerformCustomGesture;
-(void)prepareCustomGesture:(id)arg1 ;
-(BOOL)openMenuWithSwaggle;
-(void)_resetMenuOpenTracker;
-(void)_menuOpenTracker:(CGPoint)arg1 ;
-(BOOL)inRockerMode;
-(void)_setFingerDownLockEnabled:(BOOL)arg1 ;
-(id)_avPlayerForSound:(id)arg1 ;
-(void)_startFingerDownTimer;
-(id)_adjustedFingersWithinBounds:(id)arg1 ;
-(void)startPinchModeWithPoint:(CGPoint)arg1 animated:(BOOL)arg2 alpha:(float)arg3 ;
-(void)accessibilityManager:(id)arg1 didReceiveEvent:(int)arg2 ;
-(id)expandPinchByDistance:(float)arg1 ;
-(id)rotatePinchByClockwiseAngle:(float)arg1 ;
-(id)liftPinchFingerUp;
-(BOOL)moveFingersToPoints:(id)arg1 ;
-(void)ringerSwitchChanged;
-(void)substantialTransitionOccurred;
-(void)systemServerDied;
-(BOOL)inMultFingerMode;
-(void)mediaControlsChanged:(BOOL)arg1 ;
-(void)screenshotWillFire;
-(void)mediaPlaybackChanged;
-(void)_handlePinchAdjust:(CGPoint)arg1 ;
-(void)addEventHandler:(id)arg1 ;
-(void)removeEventHandler:(id)arg1 ;
-(BOOL)isCapturingRealEvents;
-(void)exitedSaveState;
-(void)handleMultiTouchStandard:(int)arg1 withExistingFingerMidPoint:(CGPoint)arg2 ;
-(void)startPinchModeWithPoint:(CGPoint)arg1 ;
-(void)endPinchMode;
-(void)performTap:(int)arg1 points:(CGPoint)arg2 ;
-(float)touchSpeed;
-(id)customGestures;
-(BOOL)voiceControl;
-(void)setVoiceControl:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isVoiceControlRunning;
-(float)volumeLevel;
@end

