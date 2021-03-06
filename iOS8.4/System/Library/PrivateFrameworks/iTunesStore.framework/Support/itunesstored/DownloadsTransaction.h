/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunesstored/DownloadsExternalTransaction.h>

@interface DownloadsTransaction : DownloadsExternalTransaction
+(double)orderKeyIncrement;
+(unsigned)orderingBucketSize;
-(id)changeset;
-(id)importDownloads:(id)arg1 initialOrderKey:(double)arg2 orderKeyIncrement:(double)arg3 ;
-(BOOL)deletePersistentDownloadManagerWithID:(long long)arg1 ;
-(BOOL)finishDownloadWithID:(long long)arg1 finalPhase:(id)arg2 updatePipeline:(BOOL)arg3 ;
-(id)_copyEffectiveBundleIDForDownload:(id)arg1 ;
-(id)_addEffectiveClientWithBundleID:(id)arg1 database:(id)arg2 ;
-(double)_orderKeyAdjacentToOrderKey:(double)arg1 comparisonType:(long long)arg2 ;
-(BOOL)_moveDownloadWithID:(long long)arg1 relativeToDownloadWithID:(long long)arg2 comparisonType:(long long)arg3 ;
-(BOOL)moveDownloadWithID:(long long)arg1 beforeDownloadWithID:(long long)arg2 ;
-(BOOL)moveDownloadWithID:(long long)arg1 afterDownloadWithID:(long long)arg2 ;
-(BOOL)finishDownloadsWithIdentifiers:(id)arg1 finalPhase:(id)arg2 ;
-(BOOL)resetDownloadsMatchingPredicate:(id)arg1 isUserInitiated:(BOOL)arg2 ;
-(BOOL)_resetDownload:(id)arg1 withValues:(const id*)arg2 isUserIntiated:(BOOL)arg3 ;
-(void)_setPolicy:(id)arg1 forDownloadWithID:(long long)arg2 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3 ;
-(BOOL)deletePersistentDownloadManagerWithClientID:(id)arg1 persistenceID:(id)arg2 ;
-(BOOL)finishDownloadWithID:(long long)arg1 finalPhase:(id)arg2 ;
-(id)insertDownloads:(id)arg1 afterDownloadWithID:(long long)arg2 ;
-(id)insertDownloads:(id)arg1 beforeDownloadWithID:(long long)arg2 ;
-(BOOL)pauseDownloadsWithIdentifiers:(id)arg1 ;
-(BOOL)prioritizeDownloadWithID:(long long)arg1 aboveDownloadWithID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)prioritizeDownloadsWithKind:(id)arg1 clientID:(id)arg2 ;
-(void)reconcileSoftwareDownloads:(id)arg1 fromITunesStore:(BOOL)arg2 ;
-(BOOL)resetDownloadsMatchingPredicate:(id)arg1 ;
-(BOOL)resetDownloadsWithIdentifiers:(id)arg1 ;
-(BOOL)retryDownloadsWithIdentifiers:(id)arg1 ;
-(BOOL)unblockDownloadsWithClientIdentifiers:(id)arg1 ;
-(BOOL)updateDownloadEntityWithIdentifier:(long long)arg1 withDownload:(id)arg2 ;
-(id)addDownloads:(id)arg1 ;
@end

