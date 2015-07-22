/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@class NSString, NSDate, NSArray;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification {

	BOOL _allDay;
	BOOL _hasRecurrenceRules;
	BOOL _timeChanged;
	BOOL _dateChanged;
	BOOL _locationChanged;
	BOOL _attendeeReplyChanged;
	int _participationStatus;
	int _status;
	NSString* _location;
	NSDate* _startDate;
	NSDate* _startDateForNextOccurrence;
	NSDate* _endDate;
	NSDate* _participationStatusModifiedDate;
	NSArray* _attendees;

}

@property (nonatomic,retain) NSString * location;                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * startDateForNextOccurrence;                   //@synthesize startDateForNextOccurrence=_startDateForNextOccurrence - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSDate * participationStatusModifiedDate;              //@synthesize participationStatusModifiedDate=_participationStatusModifiedDate - In the implementation block
@property (assign,nonatomic) int participationStatus;                               //@synthesize participationStatus=_participationStatus - In the implementation block
@property (assign,nonatomic) int status;                                            //@synthesize status=_status - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) BOOL hasRecurrenceRules;                               //@synthesize hasRecurrenceRules=_hasRecurrenceRules - In the implementation block
@property (assign,nonatomic) BOOL timeChanged;                                      //@synthesize timeChanged=_timeChanged - In the implementation block
@property (assign,nonatomic) BOOL dateChanged;                                      //@synthesize dateChanged=_dateChanged - In the implementation block
@property (assign,nonatomic) BOOL locationChanged;                                  //@synthesize locationChanged=_locationChanged - In the implementation block
@property (assign,nonatomic) BOOL attendeeReplyChanged;                             //@synthesize attendeeReplyChanged=_attendeeReplyChanged - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                   //@synthesize attendees=_attendees - In the implementation block
-(BOOL)isAllDay;
-(id)eventFromEventStore:(id)arg1 ;
-(int)participationStatus;
-(BOOL)hasRecurrenceRules;
-(NSDate *)participationStatusModifiedDate;
-(NSArray *)attendees;
-(void)setParticipationStatus:(int)arg1 ;
-(BOOL)dateChanged;
-(BOOL)timeChanged;
-(BOOL)locationChanged;
-(BOOL)attendeeReplyChanged;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setParticipationStatusModifiedDate:(NSDate *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)setDateChanged:(BOOL)arg1 ;
-(void)setTimeChanged:(BOOL)arg1 ;
-(void)setLocationChanged:(BOOL)arg1 ;
-(void)setStartDateForNextOccurrence:(NSDate *)arg1 ;
-(void)setHasRecurrenceRules:(BOOL)arg1 ;
-(void)setAttendeeReplyChanged:(BOOL)arg1 ;
-(NSDate *)startDateForNextOccurrence;
-(void)dealloc;
-(NSString *)location;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end
