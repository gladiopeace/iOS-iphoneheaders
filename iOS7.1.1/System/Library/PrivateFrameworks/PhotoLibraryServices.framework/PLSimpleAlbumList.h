/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerList.h>

@class NSOrderedSet;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {

	NSOrderedSet* _containers;

}

@property (nonatomic,retain) NSOrderedSet * containers;                         //@synthesize containers=_containers - In the implementation block
@property (nonatomic,readonly) unsigned long long containersCount; 
-(void)dealloc;
-(bool)isEmpty;
-(id)managedObjectContext;
-(id)photoLibrary;
-(id)initWithAssetContainers:(id)arg1 ;
-(id)containers;
-(bool)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(id)initWithAssetContainer:(id)arg1 ;
-(void)setContainers:(id)arg1 ;
@end

