/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <PhotoLibraryServices/PLAssetContainerList.h>
#import <PhotoLibraryServices/PLMomentContainer.h>

@class NSOrderedSet;

@interface PLMomentLibrary : PLManagedObject <PLAssetContainerList, PLMomentContainer>

@property (nonatomic,@dynamic,retain) NSOrderedSet * moments; 
@property (nonatomic,readonly) unsigned long long containersCount; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(id)sharedMomentLibraryInManagedObjectContext:(id)arg1 ;
+(id)sharedMomentLibraryInManagedObjectContext:(id)arg1 createIfNecessary:(bool)arg2 ;
-(bool)isEmpty;
-(id)_typeDescription;
-(void)prepareForDeletion;
-(id)containers;
-(bool)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(void)removeMomentsObject:(id)arg1 ;
-(void)insertObject:(id)arg1 inMomentsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromMomentsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInMomentsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertMoments:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeMomentsAtIndexes:(id)arg1 ;
-(void)replaceMomentsAtIndexes:(id)arg1 withMoments:(id)arg2 ;
-(void)addMomentsObject:(id)arg1 ;
-(void)addMoments:(id)arg1 ;
-(void)removeMoments:(id)arg1 ;
@end

