/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconIndexNode.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class SBIconIndexMutableList, NSHashTable, SBFolder;

@interface SBIconListModel : NSObject <SBIconIndexNode, NSFastEnumeration> {

	SBIconIndexMutableList* _icons;
	unsigned _maxIconCount;
	NSHashTable* _nodeObservers;
	NSHashTable* _listObservers;
	BOOL _iconStateIsDirty;
	SBFolder* _folder;

}
-(BOOL)needsCompacting;
-(unsigned)compactIcons;
-(unsigned)firstFreeSlotIndexForType:(int)arg1 ;
-(id)placeIcon:(id)arg1 atIndex:(unsigned*)arg2 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned*)arg2 ;
-(void)removeIconAtIndex:(unsigned)arg1 ;
-(unsigned)firstFreeSlotIndex;
-(void)removeIcon:(id)arg1 ;
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(id)iconsOfClass:(Class)arg1 ;
-(unsigned)numberOfIcons;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(void)markIconStateClean;
-(BOOL)isIconStateDirty;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(void)removeListObserver:(id)arg1 ;
-(void)addListObserver:(id)arg1 ;
-(id)initWithFolder:(id)arg1 maxIconCount:(unsigned)arg2 ;
-(unsigned)maxNumberOfIcons;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(unsigned)indexForLeafIconWithIdentifier:(id)arg1 ;
-(BOOL)addIcon:(id)arg1 asDirty:(BOOL)arg2 ;
-(BOOL)allowsAddingIcon:(id)arg1 ;
-(void)_notifyListObservers:(/*^block*/ id)arg1 ;
-(void)warmUpIconImagesForLocation:(int)arg1 ;
-(unsigned)indexForIcon:(id)arg1 ;
-(BOOL)containsLeafIconWithIdentifier:(id)arg1 ;
-(BOOL)containsIcon:(id)arg1 ;
-(BOOL)isFull;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SB27*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)icons;
-(id)folder;
-(BOOL)addIcon:(id)arg1 ;
-(id)iconAtIndex:(unsigned)arg1 ;
@end

