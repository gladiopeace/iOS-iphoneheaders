/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate.h>

@class NSString;

@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate> {

	char _attemptingUnlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(char)arg2 ;
-(void)animatePasscodeViewsToVisible:(char)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)deactivate;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(char)hasTranslucentBackground;
@end

