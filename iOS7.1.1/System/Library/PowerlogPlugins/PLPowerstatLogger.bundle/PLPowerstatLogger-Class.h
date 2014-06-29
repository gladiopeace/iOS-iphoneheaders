/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PowerlogPlugins/PLPowerstatLogger.bundle/PLPowerstatLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSMutableDictionary, NSDate;

@interface PLPowerstatLogger : PLLogger {

	NSMutableDictionary* _lastSample;
	NSMutableDictionary* _currentSample;
	NSDate* _lastSampleDate;
	NSDate* _currentSampleDate;

}

@property (nonatomic,retain) NSMutableDictionary * lastSample;                 //@synthesize lastSample=_lastSample - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentSample;              //@synthesize currentSample=_currentSample - In the implementation block
@property (nonatomic,retain) NSDate * lastSampleDate;                          //@synthesize lastSampleDate=_lastSampleDate - In the implementation block
@property (nonatomic,retain) NSDate * currentSampleDate;                       //@synthesize currentSampleDate=_currentSampleDate - In the implementation block
-(void)dealloc;
-(id)init;
-(void)log;
-(void)setLastSample:(id)arg1 ;
-(void)setCurrentSample:(id)arg1 ;
-(void)setLastSampleDate:(id)arg1 ;
-(void)setCurrentSampleDate:(id)arg1 ;
-(id)sampleDelta;
-(id)currentSample;
-(id)currentSampleDate;
-(id)lastSample;
-(id)lastSampleDate;
-(id)entryForReportingGroup:(id)arg1 withGroupName:(id)arg2 withSubGroupName:(id)arg3 ;
-(void)logIOReportingWithDelta:(id)arg1 ;
@end

