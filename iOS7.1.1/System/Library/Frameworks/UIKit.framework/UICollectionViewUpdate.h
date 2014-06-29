/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UICollectionView, NSArray, UICollectionViewData, NSMutableIndexSet, NSMutableArray, NSMutableDictionary;

@interface UICollectionViewUpdate : NSObject {

	UICollectionView* _collectionView;
	NSArray* _updateItems;
	UICollectionViewData* _oldModel;
	UICollectionViewData* _newModel;
	CGRect _oldVisibleBounds;
	CGRect _newVisibleBounds;
	NSMutableIndexSet* _movedItems;
	NSMutableIndexSet* _movedSections;
	NSMutableIndexSet* _deletedSections;
	NSMutableIndexSet* _insertedSections;
	long long* _oldSectionMap;
	long long* _newSectionMap;
	long long* _oldGlobalItemMap;
	long long* _newGlobalItemMap;
	NSMutableArray* _deletedSupplementaryIndexesSectionArray;
	NSMutableArray* _insertedSupplementaryIndexesSectionArray;
	NSMutableDictionary* _deletedSupplementaryTopLevelIndexesDict;
	NSMutableDictionary* _insertedSupplementaryTopLevelIndexesDict;
	id* _animatedItems;
	id* _animatedHeaders;
	id* _animatedFooters;
	NSMutableArray* _viewAnimations;
	NSMutableArray* _gaps;

}
-(void)dealloc;
-(void)_computeSectionUpdates;
-(void)_computeGaps;
-(void)_computeItemUpdates;
-(id)initWithCollectionView:(id)arg1 updateItems:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(CGRect)arg5 newVisibleBounds:(CGRect)arg6 ;
-(void)_computeSupplementaryUpdates;
-(id)newIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2 ;
-(id)oldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2 ;
@end

