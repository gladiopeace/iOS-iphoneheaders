/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/NSSecureCoding.h>

@class NSString;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {

	NSString* _containerID;
	int _lastErrorKind;
	double _delay;
	double _nextTry;

}

@property (nonatomic,readonly) double delay;                      //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double nextTry;                    //@synthesize nextTry=_nextTry - In the implementation block
@property (nonatomic,readonly) int lastErrorKind;                 //@synthesize lastErrorKind=_lastErrorKind - In the implementation block
@property (nonatomic,retain) NSString * containerID;              //@synthesize containerID=_containerID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)delay;
-(void)clear;
-(NSString *)containerID;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(void)updateAfterSchedulingTask;
-(char)updateForClearingOutOfQuota;
-(void)updateForError:(id)arg1 isSyncDown:(char)arg2 ;
-(double)nextTry;
-(void)setContainerID:(NSString *)arg1 ;
-(int)lastErrorKind;
@end

