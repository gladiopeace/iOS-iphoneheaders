/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/SSDownloadManagerObserver.h>

@class SSDownloadManager, NSOperationQueue, NSMutableDictionary;

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _manager;
	NSOperationQueue* _queue;
	NSMutableDictionary* _downloads;
	bool _reconnectInProgress;

}
-(void)withDownload:(long long)arg1 perform:(/*^block*/ id)arg2 ;
-(void)withDownload:(long long)arg1 performAsync:(/*^block*/ id)arg2 ;
-(void)addDownloads:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_attemptReconnect;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(id)initWithDownloadManager:(id)arg1 ;
-(void)setDelegate:(id)arg1 forDownload:(long long)arg2 ;
-(void)cancelDownload:(long long)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)withDownloadMatchingIdentifier:(id)arg1 perform:(/*^block*/ id)arg2 ;
-(void)finishDownload:(long long)arg1 ;
-(void)addDownload:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)downloadHandlerDisconnected:(bool)arg1 ;
-(void)dealloc;
-(void)addOperationWithBlock:(/*^block*/ id)arg1 ;
@end

