/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class BRCContainerScheduler, BRCContainerMetadataSyncPersistedState, NSMutableArray, NSMutableDictionary, NSString;

@interface BRCContainerMetadataSyncDownOperation : BRCOperation <BRCOperationSubclass> {

	BRCContainerScheduler* _scheduler;
	BRCContainerMetadataSyncPersistedState* _state;
	NSMutableArray* _recordIDsForDesiredAssets;
	NSMutableArray* _desiredKeysForDesiredAssets;
	NSMutableDictionary* _recordIDsToVersionETagsForDesiredAssets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithContainerScheduler:(id)arg1 state:(id)arg2 ;
-(void)performAfterFetchingAssetContents:(/*^block*/id)arg1 ;
-(void)performAfterFetchingRecordChanges:(/*^block*/id)arg1 ;
-(void)performAfterSubscribingToZoneIfNeeded:(/*^block*/id)arg1 ;
-(void)performAfterCreatingZoneIfNeeded:(/*^block*/id)arg1 ;
@end
