/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportDownloadBatchTask;
@class NSObject, NSData, NSString;

@interface CPLPullFromTransportTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _queue;
	NSData* _initialSyncAnchor;
	id<CPLEngineTransportDownloadBatchTask> _downloadTask;
	NSString* _clientCacheIdentifier;
	BOOL _didBeginTransientRepository;
	BOOL _resetSyncAnchor;
	BOOL _didGetSomeChanges;

}

@property (retain) id<CPLPullFromTransportTaskDelegate> delegate; 
@property (nonatomic,readonly) BOOL didGetSomeChanges;                         //@synthesize didGetSomeChanges=_didGetSomeChanges - In the implementation block
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)_launch;
-(BOOL)didGetSomeChanges;
-(void)_finishTaskWithErrorAndCleanupIfNecessary:(id)arg1 ;
-(void)_handleNewBatch:(id)arg1 newSyncAnchor:(id)arg2 ;
-(id)taskIdentifier;
@end

