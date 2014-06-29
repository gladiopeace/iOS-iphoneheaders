/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/safarifetcherd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@class WebBookmarksXPCListener, NSMutableArray, NSTimer, WebBookmarkCollection;

@interface SafariFetcherServer : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCListener* _listener;
	NSMutableArray* _connections;
	NSMutableArray* _readingListReplyConnections;
	NSTimer* _readingListFetcherStartTimer;
	WebBookmarkCollection* _collection;

}
+(id)sharedServer;
-(void)deliverReadingListFetchingProgress:(double)arg1 ;
-(void)deliverReadingListFetchingDidStopForItemWithUUID:(id)arg1 ;
-(void)deliverReadingListDidFinishFetching;
-(void)deliverReadingListFetchingDidStartForItemWithUUID:(id)arg1 ;
-(void)_registerConnectionForReadingListFetcherUpdates:(id)arg1 ;
-(void)_unregisterConnectionForReadingListFetcherUpdates:(id)arg1 ;
-(void)_clearAllReadingListArchivesForConnection:(id)arg1 ;
-(void)_connection:(id)arg1 clearReadingListArchiveWithMessage:(id)arg2 ;
-(void)_clearReadingListFetcherStartTimer;
-(void)_startReadingListFetcherNow;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)_startReadingListFetcher;
@end

