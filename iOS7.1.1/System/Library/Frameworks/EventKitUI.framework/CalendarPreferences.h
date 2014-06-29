/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSNumber, NSString, NSDate;

@interface CalendarPreferences : NSObject {

	bool _hideCalendarsInNCTodayView;

}

@property (assign,nonatomic) bool showWeekNumbers; 
@property (assign,nonatomic) bool showListView; 
@property (assign,nonatomic) bool showMonthDividedListView; 
@property (assign,nonatomic) bool showDebugGridOverlay; 
@property (assign,nonatomic) bool viewedTimeZoneAutomatic; 
@property (assign,nonatomic) bool requestSyncOnApplicationLaunch; 
@property (assign,nonatomic) bool drawDebugViewColors; 
@property (assign,nonatomic) bool usePickerStyleInlineEditorMenus; 
@property (assign,nonatomic) bool hideCalendarsInNCTodayView;                               //@synthesize hideCalendarsInNCTodayView=_hideCalendarsInNCTodayView - In the implementation block
@property (assign,nonatomic) bool immediateAlarmCreation; 
@property (assign,nonatomic) bool showEventsInPhoneMonthView; 
@property (nonatomic,retain) NSArray * calendarUUIDsExcludedFromNotifications; 
@property (nonatomic,retain) NSNumber * weekStart; 
@property (nonatomic,retain) NSNumber * lastSuspendTime; 
@property (nonatomic,retain) NSNumber * lastViewedDate; 
@property (nonatomic,retain) NSNumber * lastViewMode; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSDate * simulatedCurrentDate; 
+(id)sharedPreferences;
-(bool)immediateAlarmCreation;
-(bool)viewedTimeZoneAutomatic;
-(id)weekStart;
-(id)simulatedCurrentDate;
-(bool)showWeekNumbers;
-(void)setShowWeekNumbers:(bool)arg1 ;
-(void)_synchronizePreferences;
-(id)_getNumberPreference:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)_preferenceChangedInternally:(id)arg1 ;
-(id)_getNumberPreference:(id)arg1 ;
-(void)_setPreference:(id)arg1 number:(id)arg2 notificationName:(id)arg3 ;
-(id)_getStringPreference:(id)arg1 ;
-(void)_setPreference:(id)arg1 stringValue:(id)arg2 notificationName:(id)arg3 forceSync:(bool)arg4 ;
-(bool)_getPreference:(id)arg1 defaultBoolValue:(bool)arg2 ;
-(void)_setPreference:(id)arg1 boolValue:(bool)arg2 notificationName:(id)arg3 ;
-(id)_getPreference:(id)arg1 defaultArrayValue:(id)arg2 ;
-(void)_setPreference:(id)arg1 arrayValue:(id)arg2 notificationName:(id)arg3 forceSync:(bool)arg4 ;
-(void)setCalendarUUIDsExcludedFromNotifications:(id)arg1 ;
-(id)calendarUUIDsExcludedFromNotifications;
-(void)_preferenceChangedExternally:(id)arg1 ;
-(void)setSimulatedCurrentDate:(id)arg1 ;
-(void)setWeekStart:(id)arg1 ;
-(id)lastViewMode;
-(void)setLastViewMode:(id)arg1 ;
-(id)lastViewedDate;
-(void)setLastViewedDate:(id)arg1 ;
-(id)lastSuspendTime;
-(void)setLastSuspendTime:(id)arg1 ;
-(bool)showListView;
-(void)setShowListView:(bool)arg1 ;
-(bool)showMonthDividedListView;
-(void)setShowMonthDividedListView:(bool)arg1 ;
-(bool)showDebugGridOverlay;
-(void)setShowDebugGridOverlay:(bool)arg1 ;
-(void)setImmediateAlarmCreation:(bool)arg1 ;
-(void)setViewedTimeZoneAutomatic:(bool)arg1 ;
-(bool)requestSyncOnApplicationLaunch;
-(void)setRequestSyncOnApplicationLaunch:(bool)arg1 ;
-(bool)drawDebugViewColors;
-(void)setDrawDebugViewColors:(bool)arg1 ;
-(bool)usePickerStyleInlineEditorMenus;
-(void)setUsePickerStyleInlineEditorMenus:(bool)arg1 ;
-(id)deselectedCalendarIDsFromCalendars:(id)arg1 ;
-(void)setDeselectedCalendarIDs:(id)arg1 ;
-(bool)hideCalendarsInNCTodayView;
-(bool)showEventsInPhoneMonthView;
-(void)setShowEventsInPhoneMonthView:(bool)arg1 ;
-(void)setNotificationEnabledCalendars:(id)arg1 usingEventStore:(id)arg2 entityType:(unsigned long long)arg3 ;
-(id)notificationEnabledCalendarsFromEventStore:(id)arg1 entityType:(unsigned long long)arg2 ;
-(bool)areAllCalendarsNotificationEnabledInEventStore:(id)arg1 ;
-(void)setHideCalendarsInNCTodayView:(bool)arg1 ;
-(id)init;
-(void)setSearchString:(id)arg1 ;
-(id)searchString;
@end

