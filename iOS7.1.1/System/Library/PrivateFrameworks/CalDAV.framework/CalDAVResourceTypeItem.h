/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem {

	CoreDAVItemWithNoChildren* _calendar;
	CoreDAVItemWithNoChildren* _scheduleInbox;
	CoreDAVItemWithNoChildren* _scheduleOutbox;
	CoreDAVItemWithNoChildren* _notification;
	CoreDAVItemWithNoChildren* _subscribed;
	CoreDAVItemWithNoChildren* _sharedOwner;

}

@property (retain) CoreDAVItemWithNoChildren * calendar;                    //@synthesize calendar=_calendar - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * scheduleInbox;               //@synthesize scheduleInbox=_scheduleInbox - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * scheduleOutbox;              //@synthesize scheduleOutbox=_scheduleOutbox - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * notification;                //@synthesize notification=_notification - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * subscribed;                  //@synthesize subscribed=_subscribed - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * sharedOwner;                 //@synthesize sharedOwner=_sharedOwner - In the implementation block
-(void)setSubscribed:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setCalendar:(id)arg1 ;
-(id)calendar;
-(id)scheduleInbox;
-(id)scheduleOutbox;
-(id)sharedOwner;
-(void)setScheduleInbox:(id)arg1 ;
-(void)setScheduleOutbox:(id)arg1 ;
-(void)setSharedOwner:(id)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(void)setNotification:(id)arg1 ;
-(id)notification;
-(id)subscribed;
-(void)write:(id)arg1 ;
@end

