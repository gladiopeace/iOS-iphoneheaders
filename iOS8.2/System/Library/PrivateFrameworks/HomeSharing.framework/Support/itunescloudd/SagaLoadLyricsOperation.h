/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface SagaLoadLyricsOperation : CloudLibraryOperation {

	NSArray* _sagaIDs;
	NSObject*<OS_dispatch_queue> _backgroundQueue;

}
-(id)initWithSagaIDs:(id)arg1 ;
-(void)_performSingleLyricsRequestForEachSagaID:(id)arg1 ;
-(void)main;
@end

