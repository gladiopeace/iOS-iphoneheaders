/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPMediaDownloadObserver : NSObject {

	/*^block*/ id _progressHandler;
	NSObject<OS_dispatch_queue>* _queue;
	bool _hasPendingProgressHandlerExecution;
	bool _invalidated;
	long long _pid;

}

@property (readonly) double downloadProgress; 
@property (getter=isCurrentlyPlayable,readonly) bool currentlyPlayable; 
@property (copy) id progressHandler; 
@property (readonly) bool canCancel; 
@property (getter=isPurchasing,nonatomic,readonly) bool purchasing; 
@property (getter=isRestoreDownload,readonly) bool restoreDownload; 
@property (nonatomic,readonly) long long persistentID;                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) double rawDownloadProgress; 
@property (nonatomic,readonly) double rawDownloadTotal; 
+(id)newObserverForMediaItemPersistentID:(unsigned long long)arg1 isPendingSync:(bool)arg2 storeID:(long long)arg3 ;
+(id)newObserverForMediaItem:(id)arg1 ;
+(id)newObserverForMediaCollection:(id)arg1 ;
+(id)newObserverForRadioTrackStoreID:(long long)arg1 ;
+(id)sharedITunesStoreDownloadManager;
-(void)cancelDownload;
-(double)downloadProgress;
-(bool)isRestoreDownload;
-(bool)canCancel;
-(void)_onQueue_invalidate;
-(void)_onQueue_setShouldFireProgressHandler;
-(bool)isCurrentlyPlayable;
-(void)pauseDownload;
-(/*^block*/ id)progressHandler;
-(bool)isPurchasing;
-(double)rawDownloadProgress;
-(double)rawDownloadTotal;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void).cxx_destruct;
-(void)setProgressHandler:(/*^block*/ id)arg1 ;
-(long long)persistentID;
@end

