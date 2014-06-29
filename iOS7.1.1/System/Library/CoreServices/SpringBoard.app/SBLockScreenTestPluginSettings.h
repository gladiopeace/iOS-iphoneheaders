/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBLockScreenTestPluginSettings : _UISettings {

	BOOL _enablePlugin;
	BOOL _enableLostModePlugin;
	BOOL _showDateView;
	BOOL _showDate;
	BOOL _disableOnUnlock;
	BOOL _showCamera;
	BOOL _showBackgroundView;
	unsigned _overlayStyle;
	unsigned _notificationBehavior;

}

@property (assign) BOOL enablePlugin;                          //@synthesize enablePlugin=_enablePlugin - In the implementation block
@property (assign) BOOL enableLostModePlugin;                  //@synthesize enableLostModePlugin=_enableLostModePlugin - In the implementation block
@property (assign) unsigned overlayStyle;                      //@synthesize overlayStyle=_overlayStyle - In the implementation block
@property (assign) unsigned notificationBehavior;              //@synthesize notificationBehavior=_notificationBehavior - In the implementation block
@property (assign) BOOL showDateView;                          //@synthesize showDateView=_showDateView - In the implementation block
@property (assign) BOOL showDate;                              //@synthesize showDate=_showDate - In the implementation block
@property (assign) BOOL disableOnUnlock;                       //@synthesize disableOnUnlock=_disableOnUnlock - In the implementation block
@property (assign) BOOL showCamera;                            //@synthesize showCamera=_showCamera - In the implementation block
@property (assign) BOOL showBackgroundView;                    //@synthesize showBackgroundView=_showBackgroundView - In the implementation block
+(id)settingsControllerModule;
-(void)setOverlayStyle:(unsigned)arg1 ;
-(void)setNotificationBehavior:(unsigned)arg1 ;
-(void)setEnablePlugin:(BOOL)arg1 ;
-(void)setEnableLostModePlugin:(BOOL)arg1 ;
-(void)setShowDateView:(BOOL)arg1 ;
-(void)setShowDate:(BOOL)arg1 ;
-(void)setDisableOnUnlock:(BOOL)arg1 ;
-(void)setShowBackgroundView:(BOOL)arg1 ;
-(void)setShowCamera:(BOOL)arg1 ;
-(BOOL)enablePlugin;
-(BOOL)enableLostModePlugin;
-(BOOL)disableOnUnlock;
-(BOOL)showCamera;
-(BOOL)showBackgroundView;
-(void)setDefaultValues;
-(BOOL)showDateView;
-(unsigned)notificationBehavior;
-(BOOL)showDate;
-(unsigned)overlayStyle;
@end

