/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem {

	SBApplication* _app;

}
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)dismissOnLock;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(id)initWithApplication:(id)arg1 ;
@end
