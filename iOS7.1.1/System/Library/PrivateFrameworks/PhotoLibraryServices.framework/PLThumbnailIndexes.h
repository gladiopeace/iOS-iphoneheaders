/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableIndexSet;

@interface PLThumbnailIndexes : NSObject {

	NSObject<OS_dispatch_queue>* isolation;
	NSMutableIndexSet* unusedIndexes;
	long long usedMax;
	unsigned long long _fetchTimestamp;

}
+(id)sharedInstance;
+(unsigned long long)nextAvailableThumbnailIndex;
+(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 handler:(/*^block*/ id)arg2 ;
+(void)getAvailableThumbnailIndexWithHandler:(/*^block*/ id)arg1 ;
+(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
+(void)recycleThumbnailIndexes:(id)arg1 ;
-(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 handler:(/*^block*/ id)arg2 ;
-(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)getAvailableThumbnailIndexesFromDatabase;
-(id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1 ;
-(id)init;
@end

