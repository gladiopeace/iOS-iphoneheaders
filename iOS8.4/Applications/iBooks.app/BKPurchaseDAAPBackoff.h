/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface BKPurchaseDAAPBackoff : NSObject {

	NSDate* _backoffUntil;
	int _failureCount;

}

@property (nonatomic,retain) NSDate * backoffUntil;              //@synthesize backoffUntil=_backoffUntil - In the implementation block
@property (assign,nonatomic) int failureCount;                   //@synthesize failureCount=_failureCount - In the implementation block
-(char)hasBackedOff;
-(char)failureIntervals:(unsigned)arg1 ;
-(NSDate *)backoffUntil;
-(void)setBackoffUntil:(NSDate *)arg1 ;
-(void)clear;
-(int)failureCount;
-(void)setFailureCount:(int)arg1 ;
@end

