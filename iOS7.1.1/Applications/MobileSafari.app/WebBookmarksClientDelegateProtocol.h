/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebBookmarksClientDelegateProtocol <NSObject>
@optional
-(void)bookmarksServerProxyConnectionInvalidated:(id)arg1;
-(void)bookmarksServerProxy:(id)arg1 didStartFetchingReadingListItem:(id)arg2;
-(void)bookmarksServerProxy:(id)arg1 didStopFetchingReadingListItem:(id)arg2;
-(void)bookmarksServerProxy:(id)arg1 didUpdateReadingListFetchingProgress:(double)arg2;
-(void)bookmarksServerProxyDidFinishFetching:(id)arg1;
@end

