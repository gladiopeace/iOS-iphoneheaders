/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PDAutomaticGroup : NSObject {

	NSString* _passTypeID;
	NSString* _groupingID;
	int _passStyle;
	NSDate* _minDate;
	NSDate* _maxDate;
	NSDate* _ingestedDate;

}

@property (nonatomic,copy) NSString * passTypeID;                //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                //@synthesize groupingID=_groupingID - In the implementation block
@property (assign,nonatomic) int passStyle;                      //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) NSDate * minDate;                   //@synthesize minDate=_minDate - In the implementation block
@property (nonatomic,retain) NSDate * maxDate;                   //@synthesize maxDate=_maxDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestedDate;              //@synthesize ingestedDate=_ingestedDate - In the implementation block
+(id)automaticGroupWithGroupingProfile:(id)arg1 ;
-(void)setPassTypeID:(NSString *)arg1 ;
-(NSString *)passTypeID;
-(NSDate *)minDate;
-(NSDate *)maxDate;
-(void)addPassWithGroupingProfile:(id)arg1 ;
-(void)setMinDate:(NSDate *)arg1 ;
-(void)setMaxDate:(NSDate *)arg1 ;
-(char)_canAcceptDate:(id)arg1 withLeeway:(double)arg2 ;
-(char)_dateIsAcceptable:(id)arg1 ;
-(void)dealloc;
-(int)passStyle;
-(void)setGroupingID:(NSString *)arg1 ;
-(NSDate *)ingestedDate;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(NSString *)groupingID;
-(void)setPassStyle:(int)arg1 ;
@end

