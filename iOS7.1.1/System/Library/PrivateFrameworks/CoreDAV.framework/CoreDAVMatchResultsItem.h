/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem {

	CoreDAVLeafItem* _rank;
	CoreDAVLeafItem* _language;
	CoreDAVLeafItem* _region;
	CoreDAVLeafItem* _calendarDescription;

}

@property (retain) CoreDAVLeafItem * rank;                             //@synthesize rank=_rank - In the implementation block
@property (retain) CoreDAVLeafItem * language;                         //@synthesize language=_language - In the implementation block
@property (retain) CoreDAVLeafItem * region;                           //@synthesize region=_region - In the implementation block
@property (retain) CoreDAVLeafItem * calendarDescription;              //@synthesize calendarDescription=_calendarDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)calendarDescription;
-(void)setCalendarDescription:(id)arg1 ;
-(void)setRegion:(id)arg1 ;
-(id)region;
-(id)rank;
-(void)setRank:(id)arg1 ;
@end

