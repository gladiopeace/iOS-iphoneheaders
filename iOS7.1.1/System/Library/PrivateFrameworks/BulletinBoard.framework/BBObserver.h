/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/BBXPCConnectionDelegate.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@protocol OS_dispatch_queue, BBObserverDelegate;
@class NSObject, BBServerConnection, NSMutableDictionary, NSMutableSet;

@interface BBObserver : NSObject <BBXPCConnectionDelegate, XPCProxyTarget> {

	NSObject<OS_dispatch_queue>* _queue;
	BBServerConnection* _connection;
	struct {
		unsigned addBulletin : 1;
		unsigned modifyBulletin : 1;
		unsigned modifyBulletinDEPRECATED : 1;
		unsigned removeBulletin : 1;
		unsigned removeBulletinFinal : 1;
		unsigned sectionOrderRule : 1;
		unsigned sectionOrder : 1;
		unsigned sectionOrderDefault : 1;
		unsigned sectionInfo : 1;
		unsigned sectionInfoDefault : 1;
		unsigned sectionParameters : 1;
		unsigned fetchImage : 1;
		unsigned fetchSize : 1;
		unsigned sizeConstraints : 1;
		unsigned multiSizeConstraints : 1;
		unsigned imageForThumbData : 1;
		unsigned sizeForThumbSize : 1;
		unsigned purgeReferences : 1;
		unsigned alertBehaviorOverrides : 1;
		unsigned alertBehaviorOverrideState : 1;
		unsigned invalidatedBulletinIDs : 1;
		unsigned serverConnectionChanged : 1;
		unsigned serverReceivedResponse : 1;
	}  _delegateFlags;
	NSMutableDictionary* _bulletinLifeAssertions;
	NSMutableDictionary* _sectionParameters;
	NSMutableDictionary* _attachmentInfoByBulletinID;
	NSMutableDictionary* _remainingFeedsByBulletinID;
	unsigned long long _numberOfBulletinFetchesUnderway;
	NSMutableSet* _sectionIDsWithUpdatesUnderway;
	NSMutableDictionary* _bulletinUpdateQueuesBySectionID;
	<BBObserverDelegate>* _delegate;
	unsigned long long _observerFeed;

}

@property (assign,nonatomic) <BBObserverDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long observerFeed;              //@synthesize observerFeed=_observerFeed - In the implementation block
+(void)initialize;
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)invalidate;
-(bool)isValid;
-(void)_invalidate;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)getSectionInfoForCategory:(long long)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)requestNoticesBulletinsForSectionID:(id)arg1 ;
-(void)_getAttachmentImagesIfPossibleForBulletin:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned long long)arg3 ;
-(void)_getParametersIfNecessaryForSectionID:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)_attachmentInfoForBulletinID:(id)arg1 create:(bool)arg2 ;
-(void)_setAttachmentImage:(id)arg1 forKey:(id)arg2 forBulletinID:(id)arg3 ;
-(bool)_attachmentImagesFetchedForBulletinID:(id)arg1 ;
-(id)_reasonableConstraintsForAttachmentType:(long long)arg1 ;
-(void)_fetchAndProcessImageForBulletinID:(id)arg1 withKey:(id)arg2 constraints:(id)arg3 attachmentType:(long long)arg4 completion:(/*^block*/ id)arg5 ;
-(void)_noteAttachmentImagesFetchedForBulletinID:(id)arg1 ;
-(bool)_attachmentSizesFetchedForBulletinID:(id)arg1 ;
-(void)_setAttachmentSize:(CGSize)arg1 forKey:(id)arg2 forBulletinID:(id)arg3 ;
-(void)_noteAttachmentSizesFetchedForBulletinID:(id)arg1 ;
-(void)_getAttachmentSizesIfPossibleForBulletin:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_getAttachmentImagesIfPossibleForBulletins:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_getAttachmentSizesIfPossibleForBulletins:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)_lifeAssertionForBulletinID:(id)arg1 ;
-(void)setObserverFeed:(unsigned long long)arg1 ;
-(void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 ;
-(void)updateSectionOrderRule:(id)arg1 ;
-(void)updateSectionOrder:(id)arg1 forCategory:(long long)arg2 ;
-(void)updateSectionInfo:(id)arg1 inCategory:(long long)arg2 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)noteAlertBehaviorOverridesChanged:(id)arg1 ;
-(void)noteAlertBehaviorOverrideStateChanged:(id)arg1 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg1 ;
-(void)_dequeueBulletinUpdateIfPossibleForSection:(id)arg1 ;
-(void)_registerBulletin:(id)arg1 withTransactionID:(unsigned long long)arg2 ;
-(void)_noteCompletedBulletinUpdateForSection:(id)arg1 ;
-(void)_preFetchAttachmentInfoIfNecessaryForBulletin:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_performOrEnqueueBulletinUpdate:(/*^block*/ id)arg1 forSection:(id)arg2 ;
-(void)connection:(id)arg1 connectionStateDidChange:(bool)arg2 ;
-(void)getSectionOrderRuleWithCompletion:(/*^block*/ id)arg1 ;
-(void)requestListBulletinsForSectionID:(id)arg1 ;
-(void)requestTodayBulletinsForSectionID:(id)arg1 ;
-(void)requestFutureBulletinsForSectionID:(id)arg1 ;
-(void)getSortDescriptorsForSectionID:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)getAlertBehaviorOverridesWithCompletion:(/*^block*/ id)arg1 ;
-(void)getPrivilegedSenderTypesWithCompletion:(/*^block*/ id)arg1 ;
-(void)getPrivilegedAddressBookGroupRecordIDAndNameWithCompletion:(/*^block*/ id)arg1 ;
-(void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)clearSection:(id)arg1 ;
-(void)clearBulletins:(id)arg1 inSection:(id)arg2 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 ;
-(void)_getParametersIfNecessaryForSectionIDs:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)parametersForSectionID:(id)arg1 ;
-(id)attachmentImageForKey:(id)arg1 forBulletinID:(id)arg2 ;
-(CGSize)attachmentSizeForKey:(id)arg1 forBulletinID:(id)arg2 ;
-(void)_preFetchAttachmentInfoIfNecessaryForBulletins:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)assertionExpired:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)_performBulletinFetch:(/*^block*/ id)arg1 ;
-(void)_noteCompletedBulletinFetch;
-(unsigned long long)observerFeed;
-(void)sendResponse:(id)arg1 ;
-(void)getSectionInfoWithCompletion:(/*^block*/ id)arg1 ;
@end

