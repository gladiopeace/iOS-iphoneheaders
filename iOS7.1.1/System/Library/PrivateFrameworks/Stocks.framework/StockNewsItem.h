/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate, NSURL;

@interface StockNewsItem : NSObject {

	unsigned long long _ID;
	NSString* _headline;
	NSString* _summary;
	NSString* _source;
	NSDate* _date;
	NSURL* _link;
	NSString* _localizedDateString;

}

@property (assign,nonatomic) unsigned long long ID;                         //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSString * headline;                           //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) NSString * summary;                            //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSURL * link;                                  //@synthesize link=_link - In the implementation block
@property (nonatomic,readonly) NSString * localizedDateString; 
+(id)localizedStringForDate:(id)arg1 ;
-(void)setHeadline:(id)arg1 ;
-(id)headline;
-(void)dealloc;
-(id)description;
-(id)date;
-(void)setDate:(id)arg1 ;
-(id)archiveDictionary;
-(id)source;
-(void)setSource:(id)arg1 ;
-(void).cxx_destruct;
-(void)setLink:(id)arg1 ;
-(id)link;
-(unsigned long long)ID;
-(void)setID:(unsigned long long)arg1 ;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(long long)chronologicalComparisonWithNewsItem:(id)arg1 ;
-(id)localizedDateString;
-(void)resetLocale;
-(id)summary;
-(void)setSummary:(id)arg1 ;
@end

