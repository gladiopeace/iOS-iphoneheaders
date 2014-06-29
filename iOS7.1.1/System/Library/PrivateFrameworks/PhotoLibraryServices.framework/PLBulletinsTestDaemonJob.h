/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, NSArray, PLPhotoLibrary;

@interface PLBulletinsTestDaemonJob : PLDaemonJob {

	long long _bulletinType;
	NSString* _albumUUID;
	NSArray* _addedAssetUUIDs;
	PLPhotoLibrary* _photoLibrary;

}

@property (assign) long long bulletinType;                               //@synthesize bulletinType=_bulletinType - In the implementation block
@property (nonatomic,retain) NSString * albumUUID;                       //@synthesize albumUUID=_albumUUID - In the implementation block
@property (nonatomic,retain) NSArray * addedAssetUUIDs;                  //@synthesize addedAssetUUIDs=_addedAssetUUIDs - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(void)notifyInvitationWasReceivedForAlbum:(id)arg1 ;
+(void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2 ;
+(void)notifyLikeWasReceivedForAssets:(id)arg1 ;
+(void)notifyCommentWasReceivedForAssets:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)photoLibrary;
-(void)setPhotoLibrary:(id)arg1 ;
-(void)setAlbumUUID:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(long long)bulletinType;
-(id)albumUUID;
-(id)addedAssetUUIDs;
-(void)setBulletinType:(long long)arg1 ;
-(void)setAddedAssetUUIDs:(id)arg1 ;
@end

