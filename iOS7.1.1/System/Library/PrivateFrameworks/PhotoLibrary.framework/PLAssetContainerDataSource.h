/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAssetContainerList;
@interface PLAssetContainerDataSource : NSObject {

	<PLAssetContainerList>* _assetContainerList;
	unsigned long long _allAssetsCount;
	unsigned long long* _containerCounts;
	bool _cachedValuesNeedUpdate;

}

@property (nonatomic,readonly) <PLAssetContainerList> * assetContainerList;              //@synthesize assetContainerList=_assetContainerList - In the implementation block
+(id)assetInAssetContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)shuffleAssets:(bool)arg1 startingAsset:(id)arg2 ;
-(id)indexPathOfAsset:(id)arg1 ;
-(unsigned long long)indexOfContainer:(id)arg1 ;
-(void)assetContainerDidChange:(id)arg1 updateIndexPaths:(id)arg2 preferNextAssetOnDeleteForKeys:(id)arg3 ;
-(id)assetContainerWithUUID:(id)arg1 ;
-(id)assetWithObjectID:(id)arg1 ;
-(id)firstAssetIndexPath;
-(unsigned long long)globalIndexOfAsset:(id)arg1 ;
-(unsigned long long)incrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3 ;
-(unsigned long long)decrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3 ;
-(id)assetContainerAtIndex:(unsigned long long)arg1 ;
-(id)initWithAssetContainerList:(id)arg1 ;
-(id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3 ;
-(id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3 ;
-(unsigned long long)assetCountForContainerAtIndex:(unsigned long long)arg1 ;
-(id)fetchAllAssets;
-(id)assetContainerForAsset:(id)arg1 ;
-(id)assetContainerForAssetGlobalIndex:(unsigned long long)arg1 ;
-(void)_updateCachedCount:(unsigned long long)arg1 forContainerAtContainerIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOffsetForAssetContainerAtAssetIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned long long)arg1 wrap:(bool)arg2 ;
-(unsigned long long)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned long long)arg1 wrap:(bool)arg2 ;
-(void)_updateCachedValues;
-(unsigned long long)containerAssetCountForAssetIndex:(unsigned long long)arg1 ;
-(id)assetContainerWithObjectID:(id)arg1 ;
-(unsigned long long)assetCountForContainer:(id)arg1 ;
-(id)assetWithUUID:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)assetContainerList;
-(id)assetAtIndexPath:(id)arg1 ;
-(bool)hasAssetAtIndexPath:(id)arg1 ;
-(unsigned long long)globalIndexForIndexPath:(id)arg1 ;
-(id)assetAtGlobalIndex:(unsigned long long)arg1 ;
-(unsigned long long)allAssetsCount;
-(id)indexPathForGlobalIndex:(unsigned long long)arg1 ;
@end

