/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RemindersListModelDelegate
@optional
-(void)modelDidUpdateNumberOfCompletedReminders:(id)arg1;

@required
-(void)modelFinishedInitialLoad:(id)arg1;
-(void)model:(id)arg1 loadedRemindersInRange:(NSRange)arg2;
@end

