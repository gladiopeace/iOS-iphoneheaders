/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <pairedsyncd/NSCoding.h>

@class NSMutableDictionary;

@interface PSDSchedulerAggdSessionState : NSObject <NSCoding> {

	NSMutableDictionary* _stateDictionary;

}
-(void)noteActivityStarted:(id)arg1 ;
-(void)noteActivityCompletedSending:(id)arg1 ;
-(void)noteActivityFinished:(id)arg1 ;
-(char)hasDurationForActivity:(id)arg1 milestone:(unsigned)arg2 ;
-(double)durationForActivity:(id)arg1 milestone:(unsigned)arg2 ;
-(id)stateDictionaryForActivity:(id)arg1 ;
-(id)_keyForMilestone:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
@end

