/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBDisplayProtocol <NSObject>
@required
-(void)setActivationSetting:(unsigned)arg1 flag:(BOOL)arg2;
-(void)clearDisplaySettings;
-(void)clearActivationSettings;
-(void)setActivationSetting:(unsigned)arg1 value:(id)arg2;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(void)setDisplaySetting:(unsigned)arg1 flag:(BOOL)arg2;
-(void)setDeactivationSetting:(unsigned)arg1 flag:(BOOL)arg2;
-(id)effectiveStatusBarStyleRequest;
-(id)displayValue:(unsigned)arg1;
-(BOOL)activationFlag:(unsigned)arg1;
-(id)activationValue:(unsigned)arg1;
-(BOOL)deactivationFlag:(unsigned)arg1;
-(void)setDeactivationSetting:(unsigned)arg1 value:(id)arg2;
-(double)autoDimTime;
-(double)autoLockTime;
-(void)clearDeactivationSettings;
-(id)statusBarStyleRequest;
-(BOOL)allowsEventOnlySuspension;
-(id)deactivationValue:(unsigned)arg1;
-(int)starkStatusBarStyle;
-(void)setOrientationChangedEventsEnabled:(BOOL)arg1;
-(BOOL)orientationChangedEventsEnabled;
-(void)setAccelerometerSampleInterval:(double)arg1;
-(double)accelerometerSampleInterval;
-(BOOL)suppressesBanners;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(void)setDisplaySetting:(unsigned)arg1 value:(id)arg2;
-(BOOL)displayFlag:(unsigned)arg1;
-(int)statusBarStyle;
-(void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
-(void)setExpectsFaceContact:(BOOL)arg1;
-(void)deactivate;
-(void)activate;
@end

