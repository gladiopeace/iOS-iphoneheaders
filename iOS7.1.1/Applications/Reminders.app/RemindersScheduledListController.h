/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/RemindersStandardListController.h>

@class EKReminder, NSMutableDictionary, UITapGestureRecognizer, NSDateComponents;

@interface RemindersScheduledListController : RemindersStandardListController {

	EKReminder* _newTodayReminder;
	EKReminder* _newTomorrowReminder;
	NSMutableDictionary* _headerViews;
	UITapGestureRecognizer* _tableTapRecognizer;
	NSDateComponents* _firstVisibleDateComponentsBeforeReload;

}
+(float)headerHeight;
-(Class)classForListModel;
-(void)configureHeaderView:(id)arg1 withStatus:(int)arg2 ;
-(void)reloadChangedObjectIDs;
-(BOOL)shouldLoadOnAppearing;
-(id)dueDateStringForReminder:(id)arg1 date:(id)arg2 ;
-(id)reminderAtIndexPath:(id)arg1 ;
-(unsigned)positionOfDeadlineInCells;
-(void)setCellProperties:(id)arg1 fromReminder:(id)arg2 ignoringTitle:(BOOL)arg3 ;
-(BOOL)shouldRemoveSectionForDelete:(id)arg1 ;
-(void)modelFinishedInitialLoad:(id)arg1 ;
-(BOOL)hasReminderAtIndexPath:(id)arg1 ;
-(void)_tableTapped:(id)arg1 ;
-(void)beginEditingNewReminderInSection:(int)arg1 ;
-(id)indexPathForNewReminderInSection:(int)arg1 ;
-(void)showCompletedReminders;
-(void)updateShowCompletedButton;
-(BOOL)saveNewReminder:(id)arg1 withTitle:(id)arg2 ;
-(BOOL)matchesReminder:(id)arg1 ;
-(void)_updateTableTapRecognizer;
-(id)scheduledListModel;
-(int)modelIndexForTableSection:(int)arg1 ;
-(BOOL)isTodayUncompletedSection:(int)arg1 ;
-(BOOL)isTomorrowSection:(int)arg1 ;
-(id)timeDueToday;
-(BOOL)reminderIsDueToday:(id)arg1 ;
-(BOOL)isScheduled;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void).cxx_destruct;
-(void)setStatus:(int)arg1 animated:(BOOL)arg2 ;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

