/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObjectContextPTPNotificationDelegate.h>

@protocol PhotoLibraryPTPDelegate;
@class NSObject, NSArray, NSString, NSMutableArray, PLPhotoLibrary, NSFileManager, PLManagedObjectContext;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {

	NSObject<PhotoLibraryPTPDelegate>* _delegate;
	NSArray* _albumObjectIDs;
	NSString* _firstDCIMFolderServiced;
	NSMutableArray* _inflightAssets;
	PLPhotoLibrary* _photoLibrary;
	NSFileManager* fileManager;

}

@property (readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSArray * albumObjectIDs; 
@property (assign,nonatomic) NSObject<PhotoLibraryPTPDelegate> * delegate; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain) NSFileManager * fileManager; 
-(id)managedObjectContext;
-(id)albumObjectIDs;
-(id)_ptpInformationForAllAssets;
-(void)_performBlockAndWait:(/*^block*/ id)arg1 ;
-(void)_performTransactionAndWait:(/*^block*/ id)arg1 ;
-(id)_allAssetObjectIDs;
-(bool)_isPTPAlbum:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)ptpInformationForPhotoWithObjectID:(id)arg1 ;
-(id)ptpInformationForFilesInDirectory:(id)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(NSObject*)arg1 ;
-(bool)ptpDeletePhotoWithKey:(NSObject*)arg1 andExtension:(id)arg2 ;
-(void)setPtpDelegate:(id)arg1 ;
-(id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1 ;
-(bool)ptpCanDeleteFiles;
-(bool)libraryIsAvailable;
-(void)dealloc;
-(id)init;
-(id)photoLibrary;
-(void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssets:(id)arg2 deletedAssets:(id)arg3 changedAssets:(id)arg4 ;
-(void)setFileManager:(id)arg1 ;
-(id)fileManager;
-(void)photoLibraryAvailabilityChangedNotification;
-(id)albumHandles;
-(id)infoForAlbum:(NSObject*)arg1 ;
-(id)associationsInAlbum:(NSObject*)arg1 ;
-(id)assetsInAssociation:(NSObject*)arg1 ;
-(id)infoForAsset:(NSObject*)arg1 ;
-(void)deleteAsset:(NSObject*)arg1 ;
@end

