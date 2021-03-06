/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/NSSecureCoding.h>

@class NSString;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {

	int _lastErrorKind;
	double _delay;
	double _nextTry;
	NSString* _containerID;

}

@property (nonatomic,readonly) double delay;                      //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double nextTry;                    //@synthesize nextTry=_nextTry - In the implementation block
@property (nonatomic,readonly) int lastErrorKind;                 //@synthesize lastErrorKind=_lastErrorKind - In the implementation block
@property (nonatomic,retain) NSString * containerID;              //@synthesize containerID=_containerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)delay;
-(void)clear;
-(NSString *)containerID;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(void)updateAfterSchedulingTask;
-(BOOL)updateForClearingOutOfQuota;
-(void)updateForError:(id)arg1 isSyncDown:(BOOL)arg2 ;
-(double)nextTry;
-(void)setContainerID:(NSString *)arg1 ;
-(int)lastErrorKind;
@end

