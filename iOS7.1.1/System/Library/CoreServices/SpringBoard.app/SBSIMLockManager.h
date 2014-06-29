/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBSIMLockAlertItem, SBSIMLockEntryAlert, NSString;

@interface SBSIMLockManager : NSObject {

	BOOL _isInitialUpdate;
	BOOL _isBrickedDevice;
	int _status;
	SBSIMLockAlertItem* _currentAlert;
	SBSIMLockEntryAlert* _lockEntryAlert;
	NSString* _languageCode;
	BOOL _hasHadSIMWhileNotBricked;
	BOOL _wasActivated;
	BOOL _neededUIM;

}
+(id)sharedInstance;
-(int)_CTToSBSIMStatus:(CFStringRef)arg1 ;
-(int)_statusFromCT;
-(void)_updateToStatus:(int)arg1 ;
-(void)_tryToUpdateStatus;
-(void)_tearDownAlertAndUpdateStatus;
-(BOOL)_shouldSuppressAlert;
-(void)_setupAppActivationStateDidChange:(id)arg1 ;
-(void)_activationDidChange;
-(void)_telephonyDidRestart;
-(void)_postponementDidChange;
-(void)_externalSIMStatusChanged:(id)arg1 ;
-(void)_initialUpdate;
-(void)lockEntryAlertDismissed:(id)arg1 ;
-(void)alertItemDismissed:(id)arg1 ;
-(void)repopAlert;
-(void)attemptUnlock;
-(void)_handlePromptForUnlock;
-(void)_updateSIMStatus:(CFStringRef)arg1 withOptions:(CFDictionaryRef)arg2 ;
-(int)pinLockAttemptsRemaining;
-(int)pukLockAttemptsRemaining;
-(void)dealloc;
-(id)init;
-(id)languageCode;
-(int)status;
-(void)airplaneModeChanged;
-(void)registerForAlerts;
@end

