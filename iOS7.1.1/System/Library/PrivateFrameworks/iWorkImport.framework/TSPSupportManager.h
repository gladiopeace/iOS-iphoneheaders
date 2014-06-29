/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFilePresenter.h>
#import <iWorkImport/TSPFileCoordinatorDelegate.h>

@protocol OS_dispatch_group;
@class NSURL, NSOperationQueue, TSPObjectContext, NSRecursiveLock, TSPSupportSaveOperationState, NSObject;

@interface TSPSupportManager : NSObject <NSFilePresenter, TSPFileCoordinatorDelegate> {

	TSPObjectContext* _context;
	NSOperationQueue* _presentedItemQueue;
	NSRecursiveLock* _presentedSupportURLLock;
	NSURL* _presentedSupportURL;
	TSPSupportSaveOperationState* _saveOperationState;
	NSObject<OS_dispatch_group>* _pendingEndSaveGroup;

}

@property (copy) NSURL * presentedSupportURL; 
@property (readonly) NSURL * presentedItemURL; 
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (readonly) NSURL * primaryPresentedItemURL; 
+(id)defaultSupportDirectoryURL;
+(id)supportBundleURLForUUID:(id)arg1 delegate:(id)arg2 ;
+(void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2 ;
+(bool)isSupportAtURLValid:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3 ;
+(id)updateDocumentUUIDForDocumentURL:(id)arg1 preserveOriginalDocumentSupport:(bool)arg2 coordinateWrite:(bool)arg3 filePresenter:(id)arg4 delegate:(id)arg5 error:(id*)arg6 ;
+(bool)copyOrMoveSupportAtURL:(id)arg1 originalDocumentProperties:(id)arg2 toURL:(id)arg3 isCopying:(bool)arg4 newDocumentProperties:(id)arg5 filePresenter:(id)arg6 error:(id*)arg7 ;
+(id)supportDirectoryURLWithDelegate:(id)arg1 ;
-(void)removeFilePresenter;
-(void)beginSaveWithDocumentUUID:(id)arg1 versionUUID:(id)arg2 originalURL:(id)arg3 updateType:(unsigned long long)arg4 ;
-(bool)writeSupportForDocumentUUID:(id)arg1 error:(id*)arg2 writer:(/*^block*/ id)arg3 ;
-(bool)endSaveWithSuccess:(bool)arg1 newURL:(id*)arg2 ;
-(void)performReadUsingAccessor:(/*^block*/ id)arg1 ;
-(void)updatePresentedItemURL:(id)arg1 ;
-(bool)didUpdateDocumentUUIDWithOriginalDocumentProperties:(id)arg1 newDocumentProperties:(id)arg2 preserveOriginalDocumentSupport:(bool)arg3 originalURL:(id)arg4 newURL:(id*)arg5 error:(id*)arg6 ;
-(id)supportURLWithDocumentUUID:(id)arg1 ;
-(void)setPresentedSupportURL:(id)arg1 ;
-(id)presentedSupportURL;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(void).cxx_destruct;
-(void)relinquishPresentedItemToWriter:(/*^block*/ id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(id)presentedItemURL;
-(id)presentedItemOperationQueue;
@end

