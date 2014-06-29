/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPredicate.h>

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate {

	NSDate* _day;

}

@property (nonatomic,retain) NSDate * day;              //@synthesize day=_day - In the implementation block
+(id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setDay:(id)arg1 ;
-(id)day;
@end

