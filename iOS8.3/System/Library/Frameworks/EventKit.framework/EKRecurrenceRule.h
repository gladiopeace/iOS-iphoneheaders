/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:09 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <EventKit/NSCopying.h>

@class EKRecurrenceEnd, NSString, NSArray, EKCalendarItem, NSDate;

@interface EKRecurrenceRule : EKObject <NSCopying> {

	char _usesEndDate;
	EKRecurrenceEnd* _cachedEnd;

}

@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) EKRecurrenceEnd * recurrenceEnd; 
@property (nonatomic,readonly) int frequency; 
@property (nonatomic,readonly) int interval; 
@property (nonatomic,readonly) int firstDayOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheMonth; 
@property (nonatomic,readonly) NSArray * daysOfTheYear; 
@property (nonatomic,readonly) NSArray * weeksOfTheYear; 
@property (nonatomic,readonly) NSArray * monthsOfTheYear; 
@property (nonatomic,readonly) NSArray * setPositions; 
@property (readonly) char usesEndDate;                                              //@synthesize usesEndDate=_usesEndDate - In the implementation block
@property (readonly) SCD_Struct_EK10 gregorianUnits; 
@property (nonatomic,retain) EKCalendarItem * owner; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSDate * cachedEndDate; 
@property (nonatomic,readonly) char dirtyStateMayAffectExceptionDates; 
@property (nonatomic,readonly) char shouldPinMonthDays; 
@property (nonatomic,retain) EKRecurrenceEnd * cachedEnd;                           //@synthesize cachedEnd=_cachedEnd - In the implementation block
+(id)iCalendarValueFromRecurrenceType:(int)arg1 ;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(char)arg2 isFloating:(char)arg3 ;
+(id)recurrenceRuleWithType:(int)arg1 interval:(unsigned)arg2 end:(id)arg3 ;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned)arg1 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(char)dirtyStateMayAffectExceptionDates;
-(NSArray *)monthsOfTheYear;
-(NSArray *)daysOfTheMonth;
-(SCD_Struct_EK10)gregorianUnits;
-(EKRecurrenceEnd *)recurrenceEnd;
-(void)setRecurrenceEnd:(EKRecurrenceEnd *)arg1 ;
-(id)_persistentRule;
-(id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 end:(id)arg3 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setSetPositions:(NSArray *)arg1 ;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 ;
-(id)stringValueAsDateOnly:(char)arg1 isFloating:(char)arg2 ;
-(NSArray *)daysOfTheWeek;
-(NSArray *)setPositions;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(void)setFirstDayOfTheWeek:(int)arg1 ;
-(EKRecurrenceEnd *)cachedEnd;
-(char)usesEndDate;
-(NSDate *)cachedEndDate;
-(void)setCachedEnd:(EKRecurrenceEnd *)arg1 ;
-(char)shouldPinMonthDays;
-(int)firstDayOfTheWeek;
-(char)mayOccurAfterDate:(id)arg1 ;
-(void)pinToEndsOfMonthsWithCalendarItem:(id)arg1 ;
-(char)isWeekdayRule;
-(char)isWeekendRule;
-(char)isAnyDayRule;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(NSString *)calendarIdentifier;
-(void)setInterval:(int)arg1 ;
-(int)interval;
-(EKCalendarItem *)owner;
@end

