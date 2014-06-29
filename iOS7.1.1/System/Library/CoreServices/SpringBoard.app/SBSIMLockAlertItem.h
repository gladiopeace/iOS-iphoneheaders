/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBSIMLockAlertItem : SBAlertItem {

	int _status;
	int _okButtonIndex;
	int _unlockButtonIndex;

}
+(id)alertTitleForStatus:(int)arg1 ;
+(id)alertTitleForStatus:(int)arg1 languageCode:(id)arg2 ;
-(void)_resetButtonIndexes;
-(BOOL)canUnlock;
-(id)alertTitleForLanguageCode:(id)arg1 ;
-(id)alertTextForLanguageCode:(id)arg1 ;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)allowInSetup;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)unlock;
-(int)status;
-(id)initWithStatus:(int)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)pendInSetupIfNotAllowed;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)performUnlockAction;
@end

