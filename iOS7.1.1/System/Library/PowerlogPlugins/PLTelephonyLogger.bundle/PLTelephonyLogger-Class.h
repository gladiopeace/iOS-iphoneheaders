/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PowerlogPlugins/PLTelephonyLogger.bundle/PLTelephonyLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLTelephonyConnectedLogger.h>

@class NSNumber, NSString;

@interface PLTelephonyLogger : PLTelephonyConnectedLogger {

	long long lastReportedSignal;
	NSNumber* inDCH;
	NSNumber* inUTBF;
	NSString* simStatus;
	bool changed;
	NSString* _operatorName;

}

@property (assign,getter=isChanged,nonatomic) bool changed; 
@property (assign,nonatomic) long long lastReportedSignal; 
@property (nonatomic,retain) NSNumber * inDCH; 
@property (nonatomic,retain) NSNumber * inUTBF; 
@property (nonatomic,retain) NSString * simStatus; 
@property (nonatomic,retain) NSString * operatorName;                    //@synthesize operatorName=_operatorName - In the implementation block
-(void)dealloc;
-(void)log;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setSimStatus:(id)arg1 ;
-(void)setLastReportedSignal:(long long)arg1 ;
-(void)setInDCH:(id)arg1 ;
-(void)setInUTBF:(id)arg1 ;
-(void)setChanged:(bool)arg1 ;
-(id)humanReadableDataActiveString;
-(id)humanReadableSimStatusString;
-(id)operatorName;
-(void)setOperatorName:(id)arg1 ;
-(bool)isChanged;
-(void)logOperatorName;
-(id)inDCH;
-(id)inUTBF;
-(id)simStatus;
-(void)logMessage:(id)arg1 andState:(id)arg2 ;
-(long long)lastReportedSignal;
@end

