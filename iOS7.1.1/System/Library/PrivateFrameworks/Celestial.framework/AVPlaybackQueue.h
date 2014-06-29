/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class AVQueue, NSMutableArray;

@interface AVPlaybackQueue : NSObject {

	id _delegate;
	AVQueue* _avItemQueue;
	NSMutableArray* _pbItemQueue;
	OpaqueFigPlayerRef _figPlayer;
	int _ignoreAVQueueModifications;
	bool _hasBuiltPlaybackQueue;
	bool _waitingToAddFirstItem;
	int _avQueueTransactionCount;
	long long _repeatMode;

}
-(void)setRepeatMode:(long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)beginAVQueueTransaction;
-(void)endAVQueueTransaction;
-(id)initWithDelegate:(id)arg1 figPlayer:(OpaqueFigPlayerRef)arg2 ;
-(void)setAVItemQueue:(id)arg1 ;
-(void)ensurePlaybackQueue;
-(void)ensurePlaybackQueueImmed;
-(id)currentPlaybackItem;
-(void)playbackItemWasRemovedFromPlayQueue:(id)arg1 ;
-(void)updateBookmarkTimesIncludeFirst:(bool)arg1 updateFirst:(bool)arg2 ;
-(void)playbackItemInspectionComplete:(id)arg1 ;
-(void)checkQueueConsistency;
-(void)scheduleRemoveItemsNoLongerInPlayQueue;
-(void)clearPBItemQueueFromIndex:(int)arg1 ;
-(void)queueItemWasAddedNotification:(id)arg1 ;
-(void)queueItemWillBeRemovedNotification:(id)arg1 ;
-(void)fillInPBItemQueue;
-(void)removeItemsNoLongerInPlayQueue;
@end

