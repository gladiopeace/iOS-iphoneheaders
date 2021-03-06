/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicQueryDataSource.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface MusicPlaylistsDataSource : MusicQueryDataSource {

	bool _hasParentPlaylist;
	NSCache* _cachedDurations;
	NSCache* _cachedCounts;
	NSCache* _cachedRepresentativeItems;
	NSObject<OS_dispatch_queue>* _cacheQueue;

}
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(void)_invalidateCalculatedEntities;
-(id)entityCountFormat;
-(bool)showsEntityCountFooter;
-(bool)showsIndexBar;
-(double)cachedDurationForEntityAtIndex:(unsigned long long)arg1 ;
-(bool)isFolderForEntityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedCountForEntityAtIndex:(unsigned long long)arg1 ;
-(id)cachedRepresentativeItemForEntityAtIndex:(unsigned long long)arg1 ;
-(id)_representativePlaylistForEntityAtIndex:(unsigned long long)arg1 ;
-(void)_breadthFirstVisitNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitor:(/*^block*/ id)arg2 ;
-(void)_bfsNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitedPlaylistPIDs:(id)arg2 stop:(bool*)arg3 visitor:(/*^block*/ id)arg4 ;
-(double)durationForEntityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countForEntityAtIndex:(unsigned long long)arg1 ;
-(id)representativeItemForEntityAtIndex:(unsigned long long)arg1 ;
-(bool)canEditEntityAtIndex:(unsigned long long)arg1 ;
-(void)deleteEntityAtIndex:(unsigned long long)arg1 ;
-(void)resetCaches;
@end

