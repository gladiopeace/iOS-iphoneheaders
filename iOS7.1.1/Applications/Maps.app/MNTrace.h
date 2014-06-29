/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNTraceDelegate, OS_dispatch_queue, OS_dispatch_group;
#import <Maps/Maps-Structs.h>
@class NSString, NSObject, NSArray;

@interface MNTrace : NSObject {

	<MNTraceDelegate>* _traceDelegate;
	NSString* _path;
	sqlite3Ref _db;
	int _dbResult;
	NSObject<OS_dispatch_queue>* _writeQueue;
	NSObject<OS_dispatch_group>* _writeGroup;
	NSArray* _bookmarks;
	unsigned _bookmarkCount;

}

@property (assign,nonatomic,__weak) <MNTraceDelegate> * traceDelegate;              //@synthesize traceDelegate=_traceDelegate - In the implementation block
@property (nonatomic,retain) NSString * path;                                       //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) sqlite3Ref db;                                         //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * writeQueue;              //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_group> * writeGroup;              //@synthesize writeGroup=_writeGroup - In the implementation block
@property (nonatomic,retain) NSArray * bookmarks;                                   //@synthesize bookmarks=_bookmarks - In the implementation block
-(void)setBookmarks:(id)arg1 ;
-(BOOL)closeTrace;
-(void)_logSqliteErrorWithFile:(const char*)arg1 line:(int)arg2 ;
-(id)writeGroup;
-(id)writeQueue;
-(BOOL)openTraceReadOnly:(BOOL)arg1 ;
-(unsigned)recordBookmarkAtTime:(double)arg1 ;
-(void)setWriteQueue:(id)arg1 ;
-(void)setWriteGroup:(id)arg1 ;
-(id)traceDelegate;
-(void)setTraceDelegate:(id)arg1 ;
-(void)dealloc;
-(id)path;
-(void)setPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void).cxx_destruct;
-(void)setDb:(sqlite3Ref)arg1 ;
-(sqlite3Ref)db;
-(id)bookmarks;
@end

