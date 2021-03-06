/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class EKEventDetailRecurrenceCell, NSDate, NSString;

@interface EKEventRecurrenceDetailItem : EKEventDetailItem {

	EKEventDetailRecurrenceCell* _cell;
	long long _repeatType;
	long long _originalRepeatType;
	NSDate* _repeatEnd;
	NSString* _customRepeatDescription;
	bool _indent;

}
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(bool)configureWithCalendar:(id)arg1 preview:(bool)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)reset;
-(void).cxx_destruct;
@end

