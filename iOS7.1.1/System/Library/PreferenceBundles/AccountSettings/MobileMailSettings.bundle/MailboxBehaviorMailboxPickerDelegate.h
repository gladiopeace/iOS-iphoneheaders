/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MailboxBehaviorMailboxPickerDelegate
@required
-(id)mailboxUidForType:(int)arg1;
-(void)pickerDidChooseMailbox:(id)arg1 forType:(int)arg2;
-(bool)storeMailboxTypeOnServer:(int)arg1;
-(id)account;
@end

