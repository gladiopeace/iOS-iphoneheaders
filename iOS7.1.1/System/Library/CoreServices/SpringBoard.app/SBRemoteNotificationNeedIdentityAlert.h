/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBRemoteNotificationNeedIdentityAlert : SBAlertItem {

	SBApplication* _app;

}
-(void)dealloc;
-(BOOL)dismissOnModalDisplayActivation;
-(BOOL)dismissOnLock;
-(id)initWithApplication:(id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end

