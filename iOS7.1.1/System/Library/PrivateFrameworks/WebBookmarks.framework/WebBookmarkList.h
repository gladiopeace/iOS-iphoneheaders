/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, WebBookmarkCollection;

@interface WebBookmarkList : NSObject {

	NSMutableArray* _bookmarks;
	unsigned _bookmarkCount;
	unsigned _skipOffset;
	bool _customQuery;
	NSString* _query;
	unsigned _folderID;
	WebBookmarkCollection* _collection;

}

@property (nonatomic,readonly) unsigned folderID;              //@synthesize folderID=_folderID - In the implementation block
-(void)dealloc;
-(unsigned)_reverseOrderIndex:(unsigned)arg1 ;
-(id)initWithBookmarksWhere:(id)arg1 collection:(id)arg2 bookmarkCount:(unsigned)arg3 skipOffset:(unsigned)arg4 ;
-(id)initWithFolderID:(unsigned)arg1 inCollection:(id)arg2 bookmarkCount:(unsigned)arg3 skipOffset:(unsigned)arg4 includeHidden:(bool)arg5 ;
-(void)_moveBookmarkAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(unsigned)folderID;
-(id)bookmarkArray;
-(id)bookmarkAtIndex:(unsigned)arg1 ;
-(unsigned)bookmarkCount;
-(id)bookmarkArrayRequestingCount:(unsigned)arg1 ;
@end

