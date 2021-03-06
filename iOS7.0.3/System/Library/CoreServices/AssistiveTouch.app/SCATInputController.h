/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATCameraInputSourceDelegate.h>
#import <assistivetouchd/SCATHardwareInputSourceDelegate.h>
#import <assistivetouchd/SCATScreenInputSourceDelegate.h>

@protocol SCATInputControllerDelegate;
@class AXUIClient, AXAccessQueue, SCATCameraInputSource, SCATKeyboardInputSource, SCATMFIInputSource, SCATScreenInputSource, AXTimer;

@interface SCATInputController : NSObject <SCATCameraInputSourceDelegate, SCATHardwareInputSourceDelegate, SCATScreenInputSourceDelegate> {

	BOOL _available;
	BOOL _valid;
	BOOL _isInputHoldEnabled;
	BOOL _isInputRepeatEnabled;
	BOOL _isInputCoalesceEnabled;
	AXUIClient* _userInterfaceClient;
	<SCATInputControllerDelegate>* _delegate;
	AXAccessQueue* _queue;
	SCATCameraInputSource* _cameraInputSource;
	SCATKeyboardInputSource* _keyboardInputSource;
	SCATMFIInputSource* _mfiInputSource;
	SCATScreenInputSource* _screenInputSource;
	AXTimer* _inputHoldTimer;
	AXTimer* _inputRepeatTimer;
	double _timeIntervalBeforeSendAction;
	double _timeIntervalBeforeSendRepeatAction;
	double _timeIntervalBetweenDidSendActions;
	double _timeIntervalSinceDidSendAction;

}

@property (assign,getter=isAvailable,nonatomic) BOOL available;                          //@synthesize available=_available - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                                  //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) AXUIClient * userInterfaceClient;                           //@synthesize userInterfaceClient=_userInterfaceClient - In the implementation block
@property (assign,nonatomic) <SCATInputControllerDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AXAccessQueue * queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) SCATCameraInputSource * cameraInputSource;                  //@synthesize cameraInputSource=_cameraInputSource - In the implementation block
@property (nonatomic,retain) SCATKeyboardInputSource * keyboardInputSource;              //@synthesize keyboardInputSource=_keyboardInputSource - In the implementation block
@property (nonatomic,retain) SCATMFIInputSource * mfiInputSource;                        //@synthesize mfiInputSource=_mfiInputSource - In the implementation block
@property (nonatomic,retain) SCATScreenInputSource * screenInputSource;                  //@synthesize screenInputSource=_screenInputSource - In the implementation block
@property (assign,nonatomic) double timeIntervalBeforeSendAction;                        //@synthesize timeIntervalBeforeSendAction=_timeIntervalBeforeSendAction - In the implementation block
@property (assign,nonatomic) double timeIntervalBeforeSendRepeatAction;                  //@synthesize timeIntervalBeforeSendRepeatAction=_timeIntervalBeforeSendRepeatAction - In the implementation block
@property (assign,nonatomic) double timeIntervalBetweenDidSendActions;                   //@synthesize timeIntervalBetweenDidSendActions=_timeIntervalBetweenDidSendActions - In the implementation block
@property (assign,nonatomic) double timeIntervalSinceDidSendAction;                      //@synthesize timeIntervalSinceDidSendAction=_timeIntervalSinceDidSendAction - In the implementation block
@property (assign,nonatomic) BOOL isInputHoldEnabled;                                    //@synthesize isInputHoldEnabled=_isInputHoldEnabled - In the implementation block
@property (assign,nonatomic) BOOL isInputRepeatEnabled;                                  //@synthesize isInputRepeatEnabled=_isInputRepeatEnabled - In the implementation block
@property (assign,nonatomic) BOOL isInputCoalesceEnabled;                                //@synthesize isInputCoalesceEnabled=_isInputCoalesceEnabled - In the implementation block
@property (nonatomic,retain) AXTimer * inputHoldTimer;                                   //@synthesize inputHoldTimer=_inputHoldTimer - In the implementation block
@property (nonatomic,retain) AXTimer * inputRepeatTimer;                                 //@synthesize inputRepeatTimer=_inputRepeatTimer - In the implementation block
+(BOOL)isSwitchWithAction:(int)arg1 ;
+(BOOL)isSwitchWithSource:(NSString*)arg1 ;
-(BOOL)isInputCoalesceEnabled;
-(double)timeIntervalBetweenDidSendActions;
-(double)timeIntervalSinceDidSendAction;
-(void)setTimeIntervalSinceDidSendAction:(double)arg1 ;
-(void)_sendAction:(int)arg1 ;
-(BOOL)isInputHoldEnabled;
-(id)inputHoldTimer;
-(double)timeIntervalBeforeSendAction;
-(void)_endAction;
-(id)cameraInputSource;
-(id)keyboardInputSource;
-(id)mfiInputSource;
-(id)screenInputSource;
-(id)inputRepeatTimer;
-(BOOL)isInputRepeatEnabled;
-(double)timeIntervalBeforeSendRepeatAction;
-(void)setTimeIntervalBeforeSendAction:(double)arg1 ;
-(void)setTimeIntervalBeforeSendRepeatAction:(double)arg1 ;
-(void)setTimeIntervalBetweenDidSendActions:(double)arg1 ;
-(void)setIsInputHoldEnabled:(BOOL)arg1 ;
-(void)setIsInputRepeatEnabled:(BOOL)arg1 ;
-(void)setIsInputCoalesceEnabled:(BOOL)arg1 ;
-(void)_didReceiveAction:(int)arg1 start:(BOOL)arg2 ;
-(void)_hideAlertForSource:(unsigned)arg1 ;
-(void)_showAlert:(id)arg1 forSource:(unsigned)arg2 ;
-(void)_didUpdateAvailability;
-(void)_showState:(id)arg1 forSource:(unsigned)arg2 ;
-(void)_configureMFIAccessoryIfNecessary:(id)arg1 ;
-(void)setCameraInputSource:(id)arg1 ;
-(void)_hideStateForSource:(unsigned)arg1 ;
-(void)setKeyboardInputSource:(id)arg1 ;
-(void)setMfiInputSource:(id)arg1 ;
-(void)setScreenInputSource:(id)arg1 ;
-(id)_actionsForSource:(NSString*)arg1 ;
-(void)_updateCameraInputSource;
-(void)_updateKeyboardInputSource;
-(void)_updateMFIInputSource;
-(void)_updateScreenInputSource;
-(void)setInputHoldTimer:(id)arg1 ;
-(void)setInputRepeatTimer:(id)arg1 ;
-(void)_cleanupUserInterface;
-(void)_removeInputSources;
-(void)_removeInputTimers;
-(void)_updateTimeIntervalBeforeSendAction;
-(void)_updateIsInputHoldEnabled;
-(void)_updateTimeIntervalBeforeSendRepeatAction;
-(void)_updateIsInputRepeatEnabled;
-(void)_updateTimeIntervalBetweenDidSendActions;
-(void)_updateIsInputCoalesceEnabled;
-(void)_setupUserInterface;
-(void)_updateInputSources;
-(void)_setupInputTimers;
-(void)cameraInputSource:(id)arg1 didReceiveAction:(int)arg2 start:(BOOL)arg3 ;
-(void)cameraInputSource:(id)arg1 didUpdateAvailability:(BOOL)arg2 withDetail:(unsigned)arg3 ;
-(void)cameraInputSource:(id)arg1 didUpdateState:(CGPoint)arg2 ;
-(void)hardwareInputSource:(id)arg1 didReceiveAction:(int)arg2 start:(BOOL)arg3 ;
-(void)hardwareInputSource:(id)arg1 didUpdateAvailability:(BOOL)arg2 withDetail:(unsigned)arg3 ;
-(void)screenInputSource:(id)arg1 didReceiveAction:(int)arg2 start:(BOOL)arg3 ;
-(void)setUserInterfaceClient:(id)arg1 ;
-(id)userInterfaceClient;
-(BOOL)isAvailable;
-(void)setValid:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)isValid;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
@end

