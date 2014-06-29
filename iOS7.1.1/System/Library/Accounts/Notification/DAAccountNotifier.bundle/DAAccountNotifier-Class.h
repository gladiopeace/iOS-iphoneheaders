/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Accounts/Notification/DAAccountNotifier.bundle/DAAccountNotifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsDaemon/ACDAccountNotificationPlugin.h>

@interface DAAccountNotifier : NSObject <ACDAccountNotificationPlugin>
-(bool)_sanityCheckChildDAVAccount:(id)arg1 withParent:(id)arg2 modifiedDataClasses:(id)arg3 ;
-(id)_parentAccountTypes;
-(id)_leafAccountTypesToCheckForEquality;
-(bool)_sanityCheckCalDAVAccount:(id)arg1 modifiedDataClasses:(id)arg2 ;
-(id)_dataclassesWeCareAbout;
-(id)_modifiedDataclassesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(bool)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)arg1 ;
-(id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2 ;
-(bool)_sanityCheckChildAccountOfType:(id)arg1 withParent:(id)arg2 oldParentAccount:(id)arg3 inStore:(id)arg4 modifiedDataClasses:(id)arg5 ;
-(bool)_sanityCheckChildSubCalAccountsWithParent:(id)arg1 inStore:(id)arg2 ;
-(bool)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(bool)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2 ;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2 ;
@end

