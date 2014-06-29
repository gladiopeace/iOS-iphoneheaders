/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLDuetEvent, NSMutableArray;

@interface PLDuetSnapshotList : NSObject {

	PLDuetEvent* _lastDuetEvent;
	NSMutableArray* _snapshots;
	unsigned long long _sequenceId;

}

@property (retain) PLDuetEvent * lastDuetEvent;                //@synthesize lastDuetEvent=_lastDuetEvent - In the implementation block
@property (retain) NSMutableArray * snapshots;                 //@synthesize snapshots=_snapshots - In the implementation block
@property (assign) unsigned long long sequenceId;              //@synthesize sequenceId=_sequenceId - In the implementation block
@property (nonatomic,readonly) bool isDuetActive; 
-(id)rangeAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)lastSnapshot;
-(void)resetEventsAtNow;
-(bool)isDuetActive;
-(void)newSnapshotAtNowWithDuetEvent:(id)arg1 ;
-(id)entryForLastSnapshot;
-(id)snapshots;
-(unsigned long long)currentEventCount;
-(unsigned long long)nextEventCountWithDuetEvent:(id)arg1 ;
-(void)clearUntilIndex:(unsigned long long)arg1 ;
-(id)activitiesInRange:(id)arg1 ;
-(bool)carryDuetSnapshotWithTime:(double)arg1 ;
-(unsigned long long)sequenceId;
-(void)setSnapshots:(id)arg1 ;
-(void)setSequenceId:(unsigned long long)arg1 ;
-(void)setLastDuetEvent:(id)arg1 ;
-(id)copyOfLastEvents;
-(id)lastDuetEvent;
-(id)lastEvents;
-(void)newSnapshotWithDuetEvents:(id)arg1 atTime:(double)arg2 ;
-(id)copyOfNextEventSetWithDuetEvent:(id)arg1 ;
-(void)ADDataforDuetBackgroundUpdate:(id)arg1 ;
-(id)entryForSnapshotAtIndex:(unsigned long long)arg1 ;
@end

