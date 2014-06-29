/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <Message/MFLibraryStore.h>
#import <IMAP/MFIMAPSequenceIdentifierProvider.h>

@class NSString, MFIMAPDownloadCache, MFIMAPCommandPipeline, NSArray, MFIMAPConnection, NSLock;

@interface MFLibraryIMAPStore : MFLibraryStore <MFIMAPSequenceIdentifierProvider> {

	unsigned _supportsCustomPermanentFlags : 1;
	unsigned _supportsJunkFlag : 1;
	unsigned _supportsDollarJunkFlag : 1;
	unsigned _supportsNotJunkFlag : 1;
	unsigned _supportsDollarNotJunkFlag : 1;
	unsigned _supportsForwardedFlag : 1;
	unsigned _supportsDollarForwardedFlag : 1;
	unsigned _updatingCache : 1;
	unsigned _updateMetadata : 1;
	unsigned _readyToDealloc : 1;
	unsigned _didSynchronizeOldMessages : 1;
	unsigned _recentsExist : 1;
	unsigned _settingServerCount : 1;
	unsigned _reserved : 16;
	NSString* _mailboxName;
	MFIMAPDownloadCache* _downloadCache;
	MFIMAPCommandPipeline* _fetchPipeline;
	unsigned long long _serverDeletedCount;
	unsigned long long _serverUidNext;
	unsigned long long _lastHighestModSequence;
	unsigned long long _highestModSequence;
	NSString* _selectedUID;
	unsigned _currentFetchUid;
	NSString* _relativePath;
	NSArray* _additionalSynchronizationSearchArguments;
	NSArray* _additionalFetchHeaders;
	id _downloadDelegate;
	MFIMAPConnection* _cachedConnection;
	NSLock* _cachedConnectionLock;

}
+(id)copyRemoteIDForTemporaryUid:(unsigned)arg1 ;
+(void)setHandlerForTemporaryUidToRemoteIDMapping:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)close;
-(void)willRemoveDelegation:(id)arg1 ;
-(bool)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(SCD_Struct_MF2*)arg3 ;
-(void)connectionDidDisconnect:(id)arg1 ;
-(void)connection:(id)arg1 didBeginBodyLoad:(id)arg2 ;
-(void)connection:(id)arg1 didLoadMoreBodyData:(id)arg2 ;
-(void)connection:(id)arg1 didFinishLoadingBodyData:(id)arg2 ;
-(void)setServerMessageCount:(unsigned long long)arg1 ;
-(void)setHighestModSequence:(unsigned long long)arg1 ;
-(id)sequenceIdentifierForUIDs:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg1 forUIDs:(id)arg2 ;
-(bool)hasValidCacheFileForMessage:(id)arg1 ;
-(void)setUid:(unsigned)arg1 forMessageWithTemporaryUid:(unsigned)arg2 ;
-(void)focusedMessageDidChange:(id)arg1 ;
-(unsigned long long)fetchMessagesWithUIDs:(id)arg1 connection:(id)arg2 newCount:(unsigned long long)arg3 flagsToSet:(unsigned long long)arg4 queueClass:(Class)arg5 ;
-(unsigned long long)syncMessagesWithUIDs:(id)arg1 connection:(id)arg2 libraryDetails:(id)arg3 flagSearchResults:(id)arg4 ;
-(void)_updateSelectedUID:(unsigned long long*)arg1 ;
-(id)_searchFlagsForUIDs:(id)arg1 usingConnection:(id)arg2 ;
-(void)_performActionsOnConnection:(id)arg1 uidsToFetch:(id*)arg2 uidsToSync:(id*)arg3 messagesToCompact:(id*)arg4 libraryDetails:(id)arg5 flagSearchResults:(id)arg6 shouldForce:(bool)arg7 newUIDsToFetch:(unsigned*)arg8 ;
-(bool)performOperationRequiringConnection:(bool)arg1 withOptions:(int)arg2 operation:(/*^block*/ id)arg3 ;
-(void)updateDeletedCountWithNotDeletedCount:(unsigned long long)arg1 ;
-(bool)_shouldContinueToPreservedUID:(unsigned long long)arg1 ;
-(id)_searchArgumentsForSynchronize;
-(unsigned long long)_fetchMessagesWithArguments:(id)arg1 idRange:(id)arg2 onConnection:(id)arg3 synchronize:(bool)arg4 limit:(unsigned long long)arg5 topUIDToCompact:(unsigned long long)arg6 topKnownUID:(unsigned long long)arg7 success:(bool*)arg8 examinedRange:(NSRange*)arg9 fetchableUIDsFound:(unsigned long long*)arg10 preserveUID:(unsigned long long*)arg11 ;
-(void)_fetchServerUnreadCountWithConnection:(id)arg1 ;
-(void)_updateServerUnreadCount:(unsigned long long)arg1 ;
-(void)_fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 handler:(/*^block*/ id)arg3 ;
-(id)offlineCacheIfOffline;
-(id)deletedMessages;
-(id)addMessages:(id)arg1 newMessagesByOldMessage:(id)arg2 ;
-(id)_uidsForMessages:(id)arg1 ;
-(id)offlineCache;
-(void)setMailboxUidValidity:(unsigned)arg1 ;
-(bool)_doUidCopy:(SCD_Struct_MF21*)arg1 toStore:(id)arg2 newMessages:(id)arg3 ;
-(bool)canPerformOfflineAppend;
-(unsigned long long)_doAppend:(SCD_Struct_MF21*)arg1 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 customIMAPFlagsToSet:(id)arg6 ;
-(void)_synchronouslySetFlags:(id)arg1 clearFlags:(id)arg2 forMessages:(id)arg3 originalChanges:(id)arg4 ;
-(void)addFlagChanges:(id)arg1 forMessages:(id)arg2 ;
-(void)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)_dataForMessage:(id)arg1 readHeadersOnly:(bool)arg2 ;
-(id)_downloadForMessageBodyData:(id)arg1 ;
-(id)_performBodyDataDownload:(id)arg1 usingConnection:(id)arg2 isPartial:(bool*)arg3 ;
-(bool)shouldRetryEmptyBodyDownloadForMessage:(id)arg1 ;
-(void)updateDeletedCount;
-(void)setAdditionalFetchHeaders:(id)arg1 ;
-(void)setAdditionalSynchronizationSearchArguments:(id)arg1 ;
-(void)removeAllLocalMessages;
-(void)_addOfflineTransferMessages:(id)arg1 ;
-(id)newDictionaryForLocalFlags:(unsigned long long)arg1 serverFlags:(unsigned long long)arg2 existingDictionary:(id)arg3 ;
-(void)reselectMailbox;
-(bool)_changedFlagsForMessage:(id)arg1 fetchResponse:(id)arg2 newFlags:(unsigned long long*)arg3 ;
-(id)fetchPipeline;
-(id)downloadCache;
-(void)setDownloadDelegate:(id)arg1 ;
-(unsigned long long)serverMessageCount;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_setFlagsForMessages:(id)arg1 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(bool)arg2 ;
-(unsigned long long)growFetchWindow;
-(bool)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)remoteIDsFromUniqueRemoteIDs:(id)arg1 ;
-(bool)canFetchMessageIDs;
-(long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(bool)canCompact;
-(void)doCompact;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2 ;
-(bool)allowsAppend;
-(id)messageForRemoteID:(id)arg1 ;
-(id)uniqueRemoteIDsForMessages:(id)arg1 ;
-(id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2 ;
-(bool)setPreferredEncoding:(unsigned)arg1 forMessage:(id)arg2 ;
-(id)mailboxName;
-(void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(bool)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(bool*)arg3 consumer:(id)arg4 ;
-(id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4 ;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)relativePath;
@end

