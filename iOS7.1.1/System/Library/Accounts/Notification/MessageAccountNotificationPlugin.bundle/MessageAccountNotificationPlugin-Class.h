/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Accounts/Notification/MessageAccountNotificationPlugin.bundle/MessageAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsDaemon/ACDAccountNotificationPlugin.h>

@interface MessageAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	int _updateAutoFetchSettingsRequestCount;

}
+(bool)_accountHasMailAccountParentType:(id)arg1 ;
+(id)_childMailAccountWithParentAccount:(id)arg1 ;
+(bool)_accountHasLeafDeliveryAccountType:(id)arg1 ;
+(bool)_accountHasLeafMailAccountType:(id)arg1 ;
-(void)_mailAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(bool)_addMailChildAccountToAppleAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_updateAutoFetchSettingsAsynchronously;
-(void)_deliveryAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_deleteDataWithMailAccount:(id)arg1 ;
-(bool)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

