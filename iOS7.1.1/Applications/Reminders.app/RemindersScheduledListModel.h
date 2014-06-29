/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/RemindersListModel.h>

@class NSArray, NSMutableDictionary;

@interface RemindersScheduledListModel : RemindersListModel {

	NSArray* _days;
	int _todayIndex;
	NSMutableDictionary* _mergedReminders;

}
-(int)displayedNumberOfIncompleteReminders;
-(BOOL)invalidateMaintainedReminders;
-(id)reminderAtIndexPath:(id)arg1 ;
-(BOOL)deleteReminder:(id)arg1 ;
-(void)checkOrUncheckReminder:(id)arg1 ;
-(int)numberOfIncompleteReminders;
-(int)numberOfCompletedReminders;
-(int)displayedNumberOfCompletedReminders;
-(void)addReminder:(id)arg1 ;
-(void)faultReminder:(id)arg1 ;
-(BOOL)matchesReminder:(id)arg1 ;
-(id)predicateForCountingReminders;
-(id)fetchProtectedData;
-(BOOL)shouldInvalidateReminder:(id)arg1 ;
-(int)indexForToday;
-(int)numberOfCompletedRemindersAtDayIndex:(int)arg1 ;
-(id)dateForScheduledRemindersAtDayIndex:(int)arg1 ;
-(BOOL)containsDate:(id)arg1 atIndex:(int*)arg2 ;
-(int)numberOfUncompletedRemindersAtDayIndex:(int)arg1 ;
-(int)indexForDate:(id)arg1 ;
-(int)numberOfDaysWithScheduledReminders;
-(int)numberOfCompletedRemindersAtDayIndex:(int)arg1 forDisplay:(BOOL)arg2 ;
-(int)numberOfScheduledRemindersAtDayIndex:(int)arg1 ;
-(id)_days;
-(int)indexForToday:(BOOL)arg1 ;
-(id)remindersOnDay:(int)arg1 ;
-(id)dictionaryForDate:(id)arg1 ;
-(int)numberOfCompletedRemindersForDisplay:(BOOL)arg1 ;
-(int)numberOfIncompleteRemindersForDisplay:(BOOL)arg1 ;
-(int)numberOfUncompletedRemindersAtDayIndex:(int)arg1 forDisplay:(BOOL)arg2 ;
-(void)_scheduledTaskCacheChanged;
-(id)propertiesToFetch;
-(id)initWithEventStore:(id)arg1 ;
-(void)dealloc;
-(void)reload;
-(void).cxx_destruct;
@end

