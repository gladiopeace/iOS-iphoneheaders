/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class MPMediaQueryShuffledItems, MPMediaLibraryConnectionAssertion, MPMediaQuery, NSArray, MPMediaItem;

@interface MPMediaQueryQueueFeeder : MPQueueFeeder {

	long long _ignoreShuffleTypeChangesCount;
	MPMediaQueryShuffledItems* _items;
	unsigned _itemsChanged : 1;
	MPMediaLibraryConnectionAssertion* _connectionAssertion;
	MPMediaQuery* _query;
	NSArray* _prefixMediaItems;
	MPMediaItem* _focusedItem;
	unsigned _hasPendingLibraryChanges : 1;
	bool _useAirPlayMusicMode;
	MPMediaItem* _cloudDialogAllowedMediaItem;

}

@property (nonatomic,copy) MPMediaQuery * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * prefixMediaItems;                             //@synthesize prefixMediaItems=_prefixMediaItems - In the implementation block
@property (nonatomic,retain) MPMediaItem * focusedItem;                              //@synthesize focusedItem=_focusedItem - In the implementation block
@property (nonatomic,retain) MPMediaItem * cloudDialogAllowedMediaItem;              //@synthesize cloudDialogAllowedMediaItem=_cloudDialogAllowedMediaItem - In the implementation block
@property (assign,nonatomic) bool useAirPlayMusicMode;                               //@synthesize useAirPlayMusicMode=_useAirPlayMusicMode - In the implementation block
-(void)setQuery:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(id)playbackInfoAtIndex:(unsigned long long)arg1 ;
-(Class)itemClass;
-(void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2 ;
-(unsigned long long)initialPlaybackQueueDepth;
-(void)shuffleItemsWithAnchor:(unsigned long long*)arg1 ;
-(unsigned long long)itemTypeForIndex:(unsigned long long)arg1 ;
-(bool)trackChangesCanEndPlayback;
-(void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2 ;
-(void)setAVController:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(void)_itemWillChangeNotification:(id)arg1 ;
-(void)_libraryDidChangeNotification:(id)arg1 ;
-(id)mediaItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_shuffleItemsInFeederQueryWithShuffleType:(unsigned long long)arg1 initialIndex:(unsigned long long)arg2 ;
-(void)setPrefixMediaItems:(id)arg1 ;
-(void)_performWhileIgnoringShuffleChanges:(/*^block*/ id)arg1 ;
-(void)_handleMediaLibraryDidChange;
-(void)_applyAirPlayMusicMode;
-(unsigned long long)indexOfMediaItem:(id)arg1 ;
-(void)setUseAirPlayMusicMode:(bool)arg1 ;
-(unsigned long long)unshuffledIndexOfAVItem:(id)arg1 ;
-(id)prefixMediaItems;
-(id)focusedItem;
-(void)setFocusedItem:(id)arg1 ;
-(id)cloudDialogAllowedMediaItem;
-(void)setCloudDialogAllowedMediaItem:(id)arg1 ;
-(bool)useAirPlayMusicMode;
-(void)dealloc;
-(id)init;
-(id)query;
-(id)preferredLanguages;
-(void).cxx_destruct;
-(id)pathAtIndex:(unsigned long long)arg1 ;
@end

