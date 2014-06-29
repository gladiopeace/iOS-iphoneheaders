/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EventKitUI/EventKitUI-Structs.h>
@class NSMutableDictionary;

@interface EKStringFactory : NSObject {

	CFDateFormatterRef _dayFormatter;
	CFDateFormatterRef _abbrevDayFormatter;
	CFDateFormatterRef _timeFormatter;
	CFDateFormatterRef _standardTimeFormatter;
	CFDateFormatterRef _customFormatter;
	CFDateFormatterRef _fullStyleDateFormatter;
	NSMutableDictionary* _longFormatters;

}
+(id)sharedInstance;
-(void)_invalidateFormatters;
-(id)_stringForDay:(SCD_Struct_EK5)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(bool)arg3 lowerCase:(bool)arg4 ;
-(CFDateFormatterRef)abbreviatedDayFormatter;
-(CFDateFormatterRef)dayFormatter;
-(CFDateFormatterRef)formatterForLongFormat:(id)arg1 ;
-(CFDateFormatterRef)fullStyleDateFormatter;
-(id)stringForDay:(SCD_Struct_EK5)arg1 withLongFormatString:(id)arg2 lowercase:(bool)arg3 ;
-(id)_stringForDay:(SCD_Struct_EK5)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(bool)arg3 ;
-(id)abbreviatedStringForDay:(SCD_Struct_EK5)arg1 withLongFormatString:(id)arg2 ;
-(id)dateStringForDate:(double)arg1 allDay:(bool)arg2 standalone:(bool)arg3 shortFormat:(bool)arg4 ;
-(id)_dayStringForDate:(double)arg1 allDay:(bool)arg2 shortFormat:(bool)arg3 lowercase:(bool)arg4 ;
-(id)_timeStringForDate:(double)arg1 ;
-(CFDateFormatterRef)_customFormatter;
-(CFDateFormatterRef)standardTimeFormatter;
-(id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 ;
-(id)stringForDay:(SCD_Struct_EK5)arg1 withLongFormatString:(id)arg2 ;
-(id)_stringForDateTime:(SCD_Struct_EK5)arg1 timeZone:(CFTimeZoneRef)arg2 ;
-(id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2 ;
-(id)dateStringForDate:(double)arg1 allDay:(bool)arg2 shortFormat:(bool)arg3 ;
-(id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2 ;
-(id)_stringForTime:(SCD_Struct_EK5)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(CFDateFormatterRef)timeFormatter;
-(void)_localeChanged:(id)arg1 ;
@end

