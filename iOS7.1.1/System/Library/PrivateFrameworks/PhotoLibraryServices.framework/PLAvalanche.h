/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAssetContainer.h>
#import <PhotoLibraryServices/PLAssetChangeObserver.h>

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate, PLPhotoLibrary, NSIndexSet, NSMutableIndexSet;

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver> {

	NSString* _uuid;
	NSOrderedSet* _assets;
	PLPhotoLibrary* _photoLibrary;
	NSIndexSet* __originalAutoPickIndexes;
	NSMutableIndexSet* __autoPickIndexes;
	NSIndexSet* __originalUserFavoriteIndexes;
	NSMutableIndexSet* __userFavoriteIndexes;
	unsigned long long __originalStackIndex;
	unsigned long long __stackIndex;
	PLManagedAsset* __aNewPick;
	PLManagedAsset* __anOldPick;
	/*^block*/ id __completionHandler;

}

@property (nonatomic,retain) NSString * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSOrderedSet * assets;                                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) NSIndexSet * _originalAutoPickIndexes;                          //@synthesize _originalAutoPickIndexes=__originalAutoPickIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * _autoPickIndexes;                           //@synthesize _autoPickIndexes=__autoPickIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * _originalUserFavoriteIndexes;                      //@synthesize _originalUserFavoriteIndexes=__originalUserFavoriteIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * _userFavoriteIndexes;                       //@synthesize _userFavoriteIndexes=__userFavoriteIndexes - In the implementation block
@property (assign,nonatomic) unsigned long long _originalStackIndex;                         //@synthesize _originalStackIndex=__originalStackIndex - In the implementation block
@property (assign,nonatomic) unsigned long long _stackIndex;                                 //@synthesize _stackIndex=__stackIndex - In the implementation block
@property (setter=_setANewPick:,nonatomic,retain) PLManagedAsset * _aNewPick;                //@synthesize _aNewPick=__aNewPick - In the implementation block
@property (setter=_setAnOldPick:,nonatomic,retain) PLManagedAsset * _anOldPick;              //@synthesize _anOldPick=__anOldPick - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;              //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) bool isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) bool canShowComments; 
@property (nonatomic,readonly) bool canShowAvalancheStacks; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(void)removeFavoriteStatus:(id)arg1 ;
+(bool)shouldHideAvalanchesFromPhotoStream;
+(void)_updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 dissolveBurst:(bool)arg5 ;
+(bool)shouldOnlyShowAvalanchePicks;
+(void)_handleUpdatesForContextWillSave:(id)arg1 ;
+(id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 dissolveBurst:(bool)arg5 ;
+(unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3 ;
+(unsigned long long)countForAvalancheUUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)avalancheStackForImage:(id)arg1 backgroundColor:(id)arg2 ;
+(id)partialAvalancheStackForImage:(id)arg1 backgroundColor:(id)arg2 ;
+(CGRect)frameOfTopImageInStackForStackFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(bool)isEmpty;
-(id)title;
-(void)_setCompletionHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)_completionHandler;
-(id)localizedTitle;
-(bool)canPerformEditOperation:(int)arg1 ;
-(id)uuid;
-(id)assets;
-(unsigned long long)approximateCount;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(bool)canShowComments;
-(bool)canShowAvalancheStacks;
-(id)localizedLocationNames;
-(id)photoLibrary;
-(id)initWithUUID:(id)arg1 photoLibrary:(id)arg2 ;
-(void)applyChangesAndDissolveBurst:(bool)arg1 currentContainer:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)setUuid:(id)arg1 ;
-(id)stackAsset;
-(id)autoPicks;
-(id)userFavorites;
-(void)setPhotoLibrary:(id)arg1 ;
-(void)setAssets:(id)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(void)_recalculateStackAsset;
-(id)_autoPickIndexes;
-(unsigned long long)_stackIndex;
-(id)_userFavoriteIndexes;
-(void)addUserFavorite:(id)arg1 ;
-(id)_originalUserFavoriteIndexes;
-(unsigned long long)_originalStackIndex;
-(void)_setAnOldPick:(id)arg1 ;
-(void)_setANewPick:(id)arg1 ;
-(id)_anOldPick;
-(id)_aNewPick;
-(id)_originalAutoPickIndexes;
-(void)removeUserFavorite:(id)arg1 ;
-(bool)isUserFavorite:(id)arg1 ;
-(bool)isAutoPick:(id)arg1 ;
-(id)proposedStackAssetAfterRemovingFavorite:(id)arg1 ;
-(void)set_originalAutoPickIndexes:(id)arg1 ;
-(void)set_autoPickIndexes:(id)arg1 ;
-(void)set_originalUserFavoriteIndexes:(id)arg1 ;
-(void)set_userFavoriteIndexes:(id)arg1 ;
-(void)set_originalStackIndex:(unsigned long long)arg1 ;
-(void)set_stackIndex:(unsigned long long)arg1 ;
@end

