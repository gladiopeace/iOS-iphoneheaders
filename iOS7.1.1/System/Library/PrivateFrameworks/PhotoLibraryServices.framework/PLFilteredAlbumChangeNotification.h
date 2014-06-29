/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>
#import <PhotoLibraryServices/PLDerivedNotification.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource.h>

@class PLFilteredAlbum, NSIndexSet, PLIndexMapper, PLAssetContainerChangeNotification;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLDerivedNotification, PLIndexMapperDataSource> {

	PLFilteredAlbum* _album;
	NSIndexSet* _oldFilteredIndexes;
	NSIndexSet* _filteredIndexes;
	PLIndexMapper* _indexMapper;
	PLAssetContainerChangeNotification* _backingNotification;

}

@property (nonatomic,readonly) NSIndexSet * updatedFilteredIndexes; 
@property (nonatomic,copy) NSIndexSet * filteredIndexes; 
@property (nonatomic,readonly) PLIndexMapper * indexMapper; 
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(id)filteredIndexes;
-(bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(id)indexMapper;
-(id)updatedFilteredIndexes;
-(void)setFilteredIndexes:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)object;
-(bool)shouldReload;
-(id)_diffDescription;
-(bool)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(id)album;
-(bool)titleDidChange;
-(bool)keyAssetDidChange;
-(id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3 ;
-(bool)countDidChange;
@end

