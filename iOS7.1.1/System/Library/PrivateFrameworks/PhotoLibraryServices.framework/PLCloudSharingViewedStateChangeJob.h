/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSString, NSDate;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob {

	bool _albumHasUnseenContent;
	bool _assetCollectionHasUnreadComments;
	long long _jobType;
	NSString* _albumGUID;
	long long _albumUnviewedAssetCount;
	NSString* _assetCollectionGUID;
	NSDate* _assetCollectionLastViewedCommentDate;

}

@property (assign,nonatomic) long long jobType;                                          //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                                       //@synthesize albumGUID=_albumGUID - In the implementation block
@property (assign,nonatomic) bool albumHasUnseenContent;                                 //@synthesize albumHasUnseenContent=_albumHasUnseenContent - In the implementation block
@property (assign,nonatomic) long long albumUnviewedAssetCount;                          //@synthesize albumUnviewedAssetCount=_albumUnviewedAssetCount - In the implementation block
@property (nonatomic,retain) NSString * assetCollectionGUID;                             //@synthesize assetCollectionGUID=_assetCollectionGUID - In the implementation block
@property (assign,nonatomic) bool assetCollectionHasUnreadComments;                      //@synthesize assetCollectionHasUnreadComments=_assetCollectionHasUnreadComments - In the implementation block
@property (nonatomic,retain) NSDate * assetCollectionLastViewedCommentDate;              //@synthesize assetCollectionLastViewedCommentDate=_assetCollectionLastViewedCommentDate - In the implementation block
+(void)markAlbum:(id)arg1 asHavingUnseenContent:(bool)arg2 ;
+(void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2 ;
+(void)markAssetCollection:(id)arg1 asHavingUnreadComments:(bool)arg2 inAlbum:(id)arg3 ;
+(void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)albumGUID;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(void)setAlbumGUID:(id)arg1 ;
-(void)setAlbumHasUnseenContent:(bool)arg1 ;
-(void)setAlbumUnviewedAssetCount:(long long)arg1 ;
-(void)setAssetCollectionGUID:(id)arg1 ;
-(void)setAssetCollectionHasUnreadComments:(bool)arg1 ;
-(void)setAssetCollectionLastViewedCommentDate:(id)arg1 ;
-(bool)albumHasUnseenContent;
-(long long)albumUnviewedAssetCount;
-(id)assetCollectionGUID;
-(bool)assetCollectionHasUnreadComments;
-(id)assetCollectionLastViewedCommentDate;
-(void)_executeAlbumViewedStateChanged;
-(void)_executeAlbumUnviewedAssetCountChangedWithGroup;
-(void)_executeAssetCommentsReadStateChangedWithGroup;
-(void)_executeAssetLastViewedCommentDateChangedWithGroup;
@end

