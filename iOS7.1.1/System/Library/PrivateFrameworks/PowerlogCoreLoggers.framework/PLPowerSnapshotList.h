/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLPowerSnapshotList : NSObject {

	NSMutableArray* _snapshots;

}

@property (retain) NSMutableArray * snapshots;              //@synthesize snapshots=_snapshots - In the implementation block
-(void)addSnapshot:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)lastSnapshot;
-(double)lastTimeSinceEpoch;
-(id)snapshots;
-(double)energyInRange:(id)arg1 ;
-(void)clearUntilTime:(double)arg1 ;
-(bool)fixForInactivity;
-(void)setSnapshots:(id)arg1 ;
@end

