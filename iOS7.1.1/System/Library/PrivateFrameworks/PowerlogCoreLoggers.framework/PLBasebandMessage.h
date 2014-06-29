/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
@class NSData, NSDate, PLLogger;

@interface PLBasebandMessage : NSObject {

	NSData* rawData;
	unsigned ticksInGoodState;
	unsigned ticksInGPSONState;
	double timeCalibration;
	NSDate* _apTimestamp;
	PLLogger* _logger;

}

@property (nonatomic,readonly) NSData * rawData; 
@property (nonatomic,readonly) unsigned ticksInGoodState; 
@property (nonatomic,readonly) unsigned ticksInGPSONState; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSDate * apTimestamp;                      //@synthesize apTimestamp=_apTimestamp - In the implementation block
@property (nonatomic,readonly) NSDate * calibratedTimestamp; 
@property (assign,nonatomic) double timeCalibration; 
@property (retain) PLLogger * logger;                                     //@synthesize logger=_logger - In the implementation block
+(id)messageWithData:(id)arg1 ;
-(id)logger;
-(void)setLogger:(id)arg1 ;
-(void)dealloc;
-(id)timestamp;
-(id)initWithData:(id)arg1 ;
-(id)rawData;
-(void)logEntry:(id)arg1 withBody:(id)arg2 ;
-(void)setTimeCalibration:(double)arg1 ;
-(double)timeCalibration;
-(void)logWithLogger:(id)arg1 ;
-(unsigned)ticksInGoodState;
-(unsigned)ticksInGPSONState;
-(bool)isTimestampValid:(SCD_Struct_PL16*)arg1 ;
-(id)calibratedTimestamp;
-(id)apTimestamp;
-(bool)isCalibratedDateGood;
@end

