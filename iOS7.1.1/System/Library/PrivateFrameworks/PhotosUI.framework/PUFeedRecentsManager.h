/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PLCloudFeedEntriesObserver.h>
#import <PhotoLibraryServices/PLAssetChangeObserver.h>
#import <PhotosUI/PLPhotoLibraryShouldReloadObserver.h>

@protocol PUFeedRecentsManagerDelegate;
@class NSMutableArray, PLPhotoLibrary, NSOrderedSet;

@interface PUFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver> {

	NSMutableArray* _pendingFeedEntriesChangeNotifications;
	NSMutableArray* _pendingAssetsChangeNotifications;
	PLPhotoLibrary* _photoLibrary;
	long long _count;
	<PUFeedRecentsManagerDelegate>* _delegate;
	NSOrderedSet* __cachedRecentAssets;

}

@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) long long count;                                                              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic,__weak) <PUFeedRecentsManagerDelegate> * delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * recentAssets; 
@property (setter=_setCachedRecentAssets:,nonatomic,copy) NSOrderedSet * _cachedRecentAssets;              //@synthesize _cachedRecentAssets=__cachedRecentAssets - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(long long)count;
-(id)delegate;
-(void).cxx_destruct;
-(id)photoLibrary;
-(void)cloudFeedEntriesDidChange:(id)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(void)shouldReload:(id)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(void)_setPhotoLibrary:(id)arg1 ;
-(void)_setCount:(long long)arg1 ;
-(void)_invalidateCachedRecentAssets;
-(id)_cachedRecentAssets;
-(bool)_updateCachedRecentAssets;
-(void)_setCachedRecentAssets:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 count:(long long)arg2 ;
-(id)recentAssets;
@end

