/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Calendar.siriUIBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface EKSnippetSection : NSObject {

	NSArray* _events;
	NSDate* _date;

}

@property (nonatomic,copy) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSDate * date;               //@synthesize date=_date - In the implementation block
+(id)sectionWithDate:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(NSArray *)events;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setEvents:(NSArray *)arg1 ;
@end

