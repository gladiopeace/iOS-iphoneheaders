/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SBLockScreenActionContextFactory : NSObject
+(id)sharedInstance;
-(id)lockScreenActionContextForBulletin:(id)arg1 withOrigin:(int)arg2 pluginActionsAllowed:(BOOL)arg3 ;
-(id)lockScreenActionContextForActivityBlock:(/*^block*/id)arg1 ;
-(id)lockScreenActionContextForContinuityApp:(id)arg1 withUniqueIdentifier:(id)arg2 andActivityTypeIdentifier:(id)arg3 appSuggestion:(id)arg4 ;
-(id)lockScreenActionContextForBulletin:(id)arg1 action:(id)arg2 origin:(int)arg3 pluginActionsAllowed:(BOOL)arg4 context:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)lockScreenActionContextForAlertItem:(id)arg1 ;
-(id)lockScreenActionContextForCardItem:(id)arg1 ;
-(id)lockScreenActionContextForSnoozedAlarmItem:(id)arg1 ;
-(id)lockScreenActionContextForWidgetRequest:(/*^block*/id)arg1 ;
@end

