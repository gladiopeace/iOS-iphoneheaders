/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/webbookmarksd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol OS_xpc_object;
@class WebBookmarksXPCListener, NSMutableArray, NSObject, NSTimer, WebBookmarkCollection;

@interface WebBookmarksServer : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCListener* _listener;
	NSMutableArray* _connections;
	NSMutableArray* _readingListReplyConnections;
	unsigned _readingListQueueRetryCount;
	NSObject<OS_xpc_object>* _readingListQueue;
	NSTimer* _readingListQueueTimer;
	WebBookmarkCollection* _collection;

}
+(id)sharedServer;
-(void)_restoreReadingListQueue;
-(void)_addToReadingListWithMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)_clearAllCloudTabDevicesForConnection:(id)arg1 ;
-(void)_clearCloudTabsForCurrentDeviceForConnection:(id)arg1 ;
-(void)_connection:(id)arg1 didToggleCloudTabsWithMessage:(id)arg2 ;
-(void)_connection:(id)arg1 didTogglePrivateBrowsingWithMessage:(id)arg2 ;
-(void)_connection:(id)arg1 getCellularReadingListAllowedWithMessage:(id)arg2 ;
-(void)_connection:(id)arg1 setCellularReadingListAllowedWithMessage:(id)arg2 ;
-(void)_connection:(id)arg1 getSafariWebDataUsageWithMessage:(id)arg2 ;
-(void)_connection:(id)arg1 deleteSafariAllWebSecurityOriginWithMessage:(id)arg2 ;
-(void)_connection:(id)arg1 deleteSafariWebSecurityOriginWithMessage:(id)arg2 ;
-(void)_connection:(id)arg1 deleteSafariPersistentURLCacheStorage:(id)arg2 ;
-(void)_connection:(id)arg1 getSafariDataUsageSummaryWithMessage:(id)arg2 ;
-(void)_clearReadingListQueueTimer;
-(void)_addReadingListItemWithAddress:(id)arg1 title:(id)arg2 previewText:(id)arg3 clientBundle:(id)arg4 clientName:(id)arg5 ;
-(id)_readingListQueueBackupPath;
-(void)_queueReadingListItems:(id)arg1 ;
-(void)_readingListQueueTimerDidFire:(id)arg1 ;
-(void)_commitReadingListQueue;
-(void)_addItemsToReadingList:(id)arg1 ;
-(id)_localizedAppNameForPID:(int)arg1 ;
-(void)_initializeSafariWebDataIfNeeded;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
@end

