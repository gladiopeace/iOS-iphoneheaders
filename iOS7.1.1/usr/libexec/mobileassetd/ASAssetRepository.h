/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ASAssetMetadataUpdatePolicy, OS_dispatch_queue;
@class NSURL, NSDictionary, NSMutableDictionary, NSObject, NSArray;

@interface ASAssetRepository : NSObject {

	NSURL* _repositoryURL;
	NSURL* _supplementalAssetMetadataDirectoryURL;
	<ASAssetMetadataUpdatePolicy>* _updatePolicy;
	double _automaticMetadataUpdateIntervalOverride;
	NSDictionary* _assetTypeDescriptors;
	NSMutableDictionary* _availableAssetsMetadataCache;
	NSMutableDictionary* _installedAssetsMetadataCache;
	NSObject<OS_dispatch_queue>* _queue;
	/*^block*/ id _assetUpdateAvailableHandler;

}

@property (nonatomic,copy) NSURL * repositoryURL; 
@property (nonatomic,copy) NSURL * supplementalAssetMetadataDirectoryURL; 
@property (nonatomic,retain) <ASAssetMetadataUpdatePolicy> * updatePolicy; 
@property (assign,nonatomic) double automaticMetadataUpdateIntervalOverride; 
@property (nonatomic,readonly) NSArray * assetTypeDescriptors; 
@property (nonatomic,copy) id assetUpdateAvailableHandler;                                //@synthesize assetUpdateAvailableHandler=_assetUpdateAvailableHandler - In the implementation block
-(id)installedAndDownloadingAssetsOfAssetType:(id)arg1 error:(id*)arg2 ;
-(bool)removeAsset:(id)arg1 ofAssetType:(id)arg2 error:(id*)arg3 ;
-(id)initWithRepositoryURL:(id)arg1 ;
-(void)setUpdatePolicy:(id)arg1 ;
-(void)setAssetUpdateAvailableHandler:(/*^block*/ id)arg1 ;
-(void)setSupplementalAssetMetadataDirectoryURL:(id)arg1 ;
-(id)attributeForKey:(id)arg1 onAssetType:(id)arg2 error:(id*)arg3 ;
-(bool)setAttribute:(id)arg1 forKey:(id)arg2 onAssetType:(id)arg3 error:(id*)arg4 ;
-(void)setAutomaticMetadataUpdateIntervalOverride:(double)arg1 ;
-(bool)updateAllStaleMetadata:(id*)arg1 ;
-(void)setRepositoryURL:(id)arg1 ;
-(bool)updateMetadataForAssetType:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(id)assetsOfAssetType:(id)arg1 matchingPredicate:(id)arg2 error:(id*)arg3 ;
-(double)timeUntilNextAutomaticMetadataUpdate;
-(id)attributeForKey:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id*)arg4 ;
-(bool)setAttributes:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id*)arg4 ;
-(id)attributesForKeys:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id*)arg4 ;
-(bool)performDataMigrationAndReturnError:(id*)arg1 ;
-(bool)importAssetTypeDescriptors:(id)arg1 ;
-(void)_discardCachedAssetMetadata;
-(id)_assetTypeDescriptorsURL;
-(id)_assetTypeDescriptors;
-(id)_relativePathToMetadataForAssetType:(id)arg1 extension:(id)arg2 ;
-(id)_cachedAssetMetadataForAssetType:(id)arg1 ;
-(id)_assetTypeDescriptorForAssetType:(id)arg1 ;
-(bool)_assetTypeDescriptorSupportsAutomaticAssetUpdates:(id)arg1 ;
-(void)_findUpdatesForAssets:(id)arg1 withAvailableAssets:(id)arg2 usingDescriptor:(id)arg3 ;
-(id)_lastDownloadedDateForAssetMetadataType:(id)arg1 fromURL:(id)arg2 ;
-(bool)_downloadResourceAtURL:(id)arg1 withTimeout:(double)arg2 ifNewerThan:(id)arg3 resourceData:(id*)arg4 lastModifiedDate:(id*)arg5 error:(id*)arg6 ;
-(void)_cacheAssetMetadata:(id)arg1 forAssetType:(id)arg2 ;
-(int)_verifyAssetMetadata:(id)arg1 ;
-(void)_scanAssets:(id)arg1 forUpdatesForAssetType:(id)arg2 ;
-(id)_remoteURLForAssetType:(id)arg1 relativeTo:(id)arg2 error:(id*)arg3 ;
-(BOOL)_downloadMetadataForAssetType:(id)arg1 fromURL:(id)arg2 timeout:(unsigned)arg3 error:(id*)arg4 ;
-(void)_updateMetadataForAssetType:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)updateMetadataForAssetType:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)_URLForInstalledAssetMetadataForAssetType:(id)arg1 ;
-(id)_installedAssetMetadataForAssetType:(id)arg1 ;
-(bool)_setInstalledAssetsMetadataValue:(id)arg1 forKey:(id)arg2 onAssetType:(id)arg3 error:(id*)arg4 ;
-(id)_URLForCachedAssetMetadataForAssetType:(id)arg1 ;
-(id)_supplementalAssetMetadataForAssetType:(id)arg1 ;
-(id)_metadataForAvailableAssetsOfAssetType:(id)arg1 ;
-(id)_installedAndDownloadingAssetsOfAssetType:(id)arg1 error:(id*)arg2 ;
-(id)_assetsOfAssetType:(id)arg1 matchingPredicate:(id)arg2 error:(id*)arg3 ;
-(bool)_enumerateInstalledAssetsUsingBlock:(/*^block*/ id)arg1 ;
-(bool)_setAttributes:(id)arg1 onAsset:(id)arg2 ofAssetType:(id)arg3 error:(id*)arg4 ;
-(bool)_setInstalledAssetAttributes:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3 ;
-(bool)_removeAsset:(id)arg1 ofAssetType:(id)arg2 error:(id*)arg3 ;
-(bool)_writeAssetIntoInstalledAssetMetadata:(id)arg1 assetType:(id)arg2 error:(id*)arg3 ;
-(double)_timeUntilNextAutomaticMetadataUpdateForAssetType:(id)arg1 withMetadata:(id)arg2 ;
-(void)_enumerateCachedMetadataUsingBlock:(/*^block*/ id)arg1 ;
-(double)_timeUntilNextAutomaticMetadataUpdate;
-(bool)_updateAllStaleMetadata:(id*)arg1 ;
-(id)repositoryURL;
-(id)supplementalAssetMetadataDirectoryURL;
-(id)updatePolicy;
-(double)automaticMetadataUpdateIntervalOverride;
-(id)assetTypeDescriptors;
-(/*^block*/ id)assetUpdateAvailableHandler;
-(void)dealloc;
-(bool)setAttribute:(id)arg1 forKey:(id)arg2 onAsset:(id)arg3 ofAssetType:(id)arg4 error:(id*)arg5 ;
-(id)directoryURLForAssetsOfAssetType:(id)arg1 ;
-(bool)writeAssetIntoInstalledAssetMetadata:(id)arg1 assetType:(id)arg2 error:(id*)arg3 ;
-(bool)enumerateInstalledAssetsUsingBlock:(/*^block*/ id)arg1 ;
-(bool)enumerateInstalledAssetsOfAssetType:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)resetCaches;
@end

