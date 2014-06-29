/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <EventKitUI/EKPickerTableViewDelegate.h>

@class NSDate, EKPickerTableView;

@interface EKReminderDueDateEditViewController : EKEditItemViewController <UITableViewDelegate, UITableViewDataSource, EKPickerTableViewDelegate> {

	NSDate* _dueDate;
	bool _hasDueDate;
	bool _isAllDay;
	bool _shouldShowAllDay;
	EKPickerTableView* _container;

}
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(bool)isAllDay;
-(id)dueDate;
-(void)setDueDate:(id)arg1 ;
-(void)_localeChanged;
-(void)_datePickerChanged:(id)arg1 ;
-(void)pickerTableViewDidChangeDatePickerInterval:(id)arg1 ;
-(void)setIsAllDay:(bool)arg1 ;
-(void)setShouldShowAllDay:(bool)arg1 ;
-(void)setHasDueDate:(bool)arg1 ;
-(bool)hasDueDate;
-(void)_updateDatePickerPresenceAnimated:(bool)arg1 ;
-(void)_updateDatePickerMode;
-(void)_updateDatePickerDate;
-(void)_updateDueDateString;
-(void)_setDueDate:(id)arg1 updateDatePicker:(bool)arg2 ;
-(void)_updateEnabledState;
-(void)_setHasDueDate:(bool)arg1 updateSwitch:(bool)arg2 updateTableAnimated:(bool)arg3 ;
-(void)_setIsAllDay:(bool)arg1 updateSwitch:(bool)arg2 ;
-(void)_updateDueDateStringForCell:(id)arg1 ;
-(void)_hasDueDateChanged:(id)arg1 ;
-(void)_isAllDayChanged:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void).cxx_destruct;
@end

