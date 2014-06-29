/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/safarifetcherd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <safarifetcherd/BackgroundTaskAgentJobDelegate.h>

@class WebBookmark, ReadingListFetcherDocument, NSMutableDictionary, NSTimer, NSDictionary, BackgroundTaskAgentJob;

@interface ReadingListFetcher : NSObject <BackgroundTaskAgentJobDelegate> {

	WebBookmark* _bookmarkToFetch;
	unsigned _completedItemCount;
	unsigned _remainingItemCount;
	int _archivingMode;
	ReadingListFetcherDocument* _document;
	NSMutableDictionary* _pendingBookmarkChanges;
	NSTimer* _retryBookmarkChangesTimer;
	NSDictionary* _connectionPropertiesAllowCellularFallback;
	NSDictionary* _connectionPropertiesForbidCellularFallback;
	BOOL _aborted;
	BOOL _readingListCellularFetchingEnabled;
	BOOL _stopLoadingAfterNextDocumentFinish;
	unsigned _powerAssertionID;
	BackgroundTaskAgentJob* _lowBackgroundTaskAgentJob;
	BackgroundTaskAgentJob* _mediumBackgroundTaskAgentJob;
	BackgroundTaskAgentJob* _highBackgroundTaskAgentJob;

}
+(id)sharedReadingListFetcher;
-(void)_setupCellularFetching;
-(void)_initBackgroundTaskAgentJobs;
-(void)updateArchivingMode;
-(id)pendingBookmarkChangesFilePath;
-(void)tryApplyPendingBookmarkChanges;
-(BOOL)_anyBackgroundTaskAgentJobIsScheduled;
-(void)_cancelFetchIfNecessary;
-(void)_refreshRemainingItemCount;
-(void)_scheduleOrRemoveBackgroundTaskAgentJobs;
-(id)_nextItemToFetch;
-(void)_stopFetchingInternal;
-(BOOL)_shouldLoadBookmarkConsideringPreviousAttempts:(id)arg1 ;
-(BOOL)_isDiskSpaceLow;
-(void)queueChangeForBookmark:(id)arg1 archiveStatus:(int)arg2 ;
-(void)didFinishFetchingDocument:(id)arg1 ;
-(void)_createOrResetPowerAssertion;
-(void)queueChangeForBookmark:(id)arg1 dateLastArchived:(id)arg2 ;
-(void)_writeChangesInMemoryToPlist;
-(void)_fetchNextItem;
-(void)applyPendingBookmarkChangesSoon;
-(void)applyPendingBookmarkChanges;
-(void)_removePendingChangesFileIfPossible;
-(BOOL)_allBackgroundTaskAgentJobsAreUnsatisfied;
-(void)abortAfterCurrentFetchCompletes;
-(void)_startFetchingInternal;
-(void)abortImmediately;
-(unsigned long long)_diskSpaceAvailable;
-(void)_queueChangeForBookmark:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)backgroundTaskAgentJobDidExpire:(id)arg1 withJobDetails:(id)arg2 ;
-(void)backgroundTaskAgentJobDidGetJobRequestError:(id)arg1 withJobDetails:(id)arg2 ;
-(void)backgroundTaskAgentJobDidBecomeSatisfied:(id)arg1 withJobDetails:(id)arg2 ;
-(void)backgroundTaskAgentJobDidBecomeUnsatisfied:(id)arg1 withJobDetails:(id)arg2 ;
-(BOOL)_shouldBeFetchingItems;
-(void)document:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)willStartFetchingReaderPage:(id)arg1 ;
-(id)currentItemUUID;
-(void)cellularFetchingToggled;
-(id)connectionPropertiesForLocallyAddedItem:(BOOL)arg1 ;
-(void)queueChangeForBookmark:(id)arg1 address:(id)arg2 ;
-(void)queueChangeForBookmark:(id)arg1 previewText:(id)arg2 ;
-(void)clearChangesForBookmark:(id)arg1 ;
-(double)currentProgress;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)_releasePowerAssertion;
@end

