/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Reminders.siriUIBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject {

	EKSource* _source;
	NSMutableArray* _array;

}

@property (readonly) NSMutableArray * calendarArray;              //@synthesize array=_array - In the implementation block
+(id)sortedGroupsOfCalendarsInEventStore:(id)arg1 ;
-(bool)canDeleteList;
-(bool)_isNonEmpty;
-(bool)canAddList;
-(id)calendarArray;
-(bool)shouldShowWhenEditingLists;
-(bool)shouldShowWhenViewingLists;
-(int)sortOrder;
-(id)initWithSource:(id)arg1 ;
-(id)title;
-(id)source;
-(void).cxx_destruct;
@end

