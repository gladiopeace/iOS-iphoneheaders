/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <Reminders/RemindersListModel.h>

@class NSMutableArray, NSArray;

@interface RemindersStandardListModel : RemindersListModel {

	BOOL _isToday;
	NSMutableArray* _completedReminders;
	NSMutableArray* _recentlyAddedReminders;

}

@property (nonatomic,readonly) NSArray * completedReminders; 
-(BOOL)invalidateMaintainedReminders;
-(void)checkOrUncheckReminder:(id)arg1 ;
-(int)numberOfReminders;
-(int)numberOfIncompleteReminders;
-(id)reminderAtIndex:(int)arg1 ;
-(id)completedReminders;
-(int)indexOfReminder:(id)arg1 protected:(BOOL)arg2 ;
-(void)removeReminderFromModel:(id)arg1 ;
-(void)addReminder:(id)arg1 ;
-(BOOL)willDisplayRemindersInRange:(NSRange)arg1 ;
-(void)faultReminder:(id)arg1 ;
-(int)_compareReminder:(id)arg1 toReminder:(id)arg2 ;
-(id)_fetchCompletedRemindersInCalendars:(id)arg1 ;
-(int)_fetchCountOfCompletedRemindersInCalendars:(id)arg1 ;
-(void)_fetchRemindersForTodayCardWithDueDate:(id)arg1 calendars:(id)arg2 fetchedReminders:(id*)arg3 fetchedCompletedCount:(int*)arg4 ;
-(void)_fetchRemindersWithDueDate:(id)arg1 calendars:(id)arg2 fetchedReminders:(id*)arg3 fetchedCompletedCount:(int*)arg4 ;
-(id)storeProtectedData:(id)arg1 rangeAlreadyFaulted:(NSRange)arg2 ;
-(void)protectedRemoveReminderAtIndex:(int)arg1 ;
-(BOOL)matchesReminder:(id)arg1 ;
-(id)predicateForCountingReminders;
-(id)fetchProtectedData;
-(BOOL)shouldInvalidateReminder:(id)arg1 ;
-(id)propertiesToFetch;
-(void)setDueDate:(id)arg1 ;
-(id)description;
-(void).cxx_destruct;
@end

