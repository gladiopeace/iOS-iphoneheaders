/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, BCLockout;

@interface BCPlistProducer : NSObject {

	NSString* _path;
	int _attemptCount;
	bool _dataUnchanged;
	BCLockout* _lockout;

}
-(id)produceData;
-(void)fileWriteFailed;
-(bool)write;
-(void)fileWasModifiedDuringDataProduction;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(bool)shouldRetry;
@end

