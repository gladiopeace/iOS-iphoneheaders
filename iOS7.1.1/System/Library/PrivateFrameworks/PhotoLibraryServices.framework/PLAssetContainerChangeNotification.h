/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {

	bool _titleDidChange;
	bool _keyAssetDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) <PLAssetContainer> * container; 
@property (nonatomic,readonly) NSObject<PLAlbumProtocol> * album; 
@property (nonatomic,readonly) bool titleDidChange; 
@property (nonatomic,readonly) bool keyAssetDidChange; 
+(id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(id)name;
-(id)container;
-(void)_calculateDiffs;
-(id)assetContainer;
-(bool)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(NSObject*)album;
-(bool)titleDidChange;
-(bool)keyAssetDidChange;
-(id)_contentRelationshipName;
@end

