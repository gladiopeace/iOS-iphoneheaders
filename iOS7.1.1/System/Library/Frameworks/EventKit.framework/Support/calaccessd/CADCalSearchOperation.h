/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:16:41 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <calaccessd/calaccessd-Structs.h>
#import <Foundation/NSOperation.h>
#import <calaccessd/CalSearchDataSink.h>

@protocol OS_dispatch_semaphore;
@class ClientConnection, CalSearch, NSObject;

@interface CADCalSearchOperation : NSOperation <CalSearchDataSink> {

	ClientConnection* _connection;
	CalSearch* _search;
	NSObject<OS_dispatch_semaphore>* _finishedSemaphore;
	unsigned _replyID;
	long _lastIndex;

}
+(id)operationWithConnection:(id)arg1 filter:(CalFilterRef)arg2 replyID:(unsigned)arg3 ;
-(unsigned)replyID;
-(id)initWithConnection:(id)arg1 filter:(CalFilterRef)arg2 replyID:(unsigned)arg3 ;
-(bool)calSearchShouldStopSearching:(id)arg1 ;
-(void)calSearchComplete:(id)arg1 ;
-(void)calSearch:(id)arg1 foundOccurrences:(CFArrayRef)arg2 cachedDays:(CFArrayRef)arg3 cachedDaysIndexes:(CFArrayRef)arg4 ;
-(void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2 ;
-(void)dealloc;
-(void)main;
@end

