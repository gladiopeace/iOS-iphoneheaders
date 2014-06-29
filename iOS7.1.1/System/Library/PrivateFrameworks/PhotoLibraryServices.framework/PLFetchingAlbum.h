/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/_PLFetchingAlbum.h>

@class NSArray, NSFetchRequest, NSOrderedSet;

@interface PLFetchingAlbum : _PLFetchingAlbum {

	unsigned long long _countForDisplay;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	int _emptyState;
	NSArray* _cachedKeyAssets;

}

@property (nonatomic,retain) NSFetchRequest * fetchRequest; 
@property (nonatomic,readonly) bool hasAssetsCache; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * fetchedAssets; 
+(id)_panoramasAlbumPredicate;
+(bool)contextShouldIgnoreChangesForFetchedAssets;
+(bool)contextShouldIgnoreChangesForFetchedAssetsSet;
+(bool)contextShouldIgnoreChangesForFetchRequest;
-(void)dealloc;
-(unsigned long long)count;
-(bool)isEmpty;
-(void)batchFetchAssets:(id)arg1 ;
-(id)mutableAssets;
-(bool)canPerformEditOperation:(int)arg1 ;
-(id)assets;
-(unsigned long long)approximateCount;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(void)awakeFromInsert;
-(id)primitiveAssets;
-(void)awakeFromFetch;
-(void)updateSnapshotAndClearCaches:(id)arg1 ;
-(void)didTurnIntoFault;
-(unsigned long long)batchSize;
-(void)setupFetchRequest;
-(id)fetchRequest;
-(unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(id)_cachedKeyAssets;
-(void)setFetchRequest:(id)arg1 ;
-(void)setAssets:(id)arg1 ;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(bool)hasAssetsCache;
-(id)fastPointerAccessSetForAssets:(id)arg1 ;
-(bool)mayHaveAssetsInCommon:(id)arg1 ;
@end

