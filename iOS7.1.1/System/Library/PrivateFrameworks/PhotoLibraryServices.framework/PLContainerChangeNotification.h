/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLChangeNotification.h>

@class PLObjectSnapshot, NSArray, NSIndexSet, PLManagedObject, NSString;

@interface PLContainerChangeNotification : PLChangeNotification {

	id _object;
	PLObjectSnapshot* _snapshot;
	NSArray* _changedObjects;
	bool _didCalculateDiffs;
	bool _shouldReload;
	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movedIndexes;
	CFArrayRef _movedFromIndexes;
	NSIndexSet* _changedIndexes;
	bool _countDidChange;

}

@property (assign,setter=_setDidCalculateDiffs:,nonatomic) bool _didCalculateDiffs; 
@property (nonatomic,readonly) PLManagedObject * _managedObject; 
@property (nonatomic,readonly) NSString * _contentRelationshipName; 
@property (nonatomic,readonly) NSArray * _changedObjects; 
@property (nonatomic,readonly) PLObjectSnapshot * snapshot; 
@property (nonatomic,readonly) NSString * _diffDescription; 
@property (nonatomic,readonly) bool countDidChange; 
@property (nonatomic,readonly) bool shouldReload; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) bool hasMoves; 
@property (nonatomic,readonly) NSIndexSet * changedIndexes; 
@property (nonatomic,readonly) NSIndexSet * changedIndexesRelativeToSnapshot; 
@property (nonatomic,readonly) NSArray * deletedObjects; 
@property (nonatomic,readonly) NSArray * insertedObjects; 
@property (nonatomic,readonly) NSArray * changedObjects; 
-(id)_init;
-(id)snapshot;
-(id)_managedObject;
-(void)_calculateDiffs;
-(id)_diffDescription;
-(void)_calculateDiffsIfNecessary;
-(id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3 ;
-(bool)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(id)_contentRelationshipName;
-(bool)_didCalculateDiffs;
-(void)_setDidCalculateDiffs:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(id)name;
-(id)object;
-(bool)shouldReload;
-(id)deletedIndexes;
-(id)insertedIndexes;
-(void)enumerateMovesWithBlock:(/*^block*/ id)arg1 ;
-(id)changedIndexes;
-(bool)countDidChange;
-(bool)hasMoves;
-(id)changedIndexesRelativeToSnapshot;
-(id)deletedObjects;
-(id)insertedObjects;
-(id)changedObjects;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
@end

