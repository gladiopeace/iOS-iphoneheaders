/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol UICollectionViewDataSource;
@class UICollectionViewLayout, UIView, NSMutableSet, NSMutableDictionary, UICollectionReusableView, NSString, NSIndexPath, UICollectionViewData, UICollectionViewUpdate, NSMutableArray, NSArray, UITouch, UICollectionViewLayoutAttributes, _UIDynamicAnimationGroup;

@interface UICollectionView : UIScrollView {

	UICollectionViewLayout* _layout;
	<UICollectionViewDataSource>* _dataSource;
	UIView* _backgroundView;
	NSMutableSet* _indexPathsForSelectedItems;
	NSMutableDictionary* _cellReuseQueues;
	NSMutableDictionary* _supplementaryViewReuseQueues;
	NSMutableSet* _indexPathsForHighlightedItems;
	long long _reloadingSuspendedCount;
	long long _updateAnimationCount;
	UICollectionReusableView* _firstResponderView;
	UIView* _newContentView;
	long long _firstResponderViewType;
	NSString* _firstResponderViewKind;
	NSIndexPath* _firstResponderIndexPath;
	NSMutableDictionary* _visibleCellsDict;
	NSMutableDictionary* _visibleSupplementaryViewsDict;
	NSMutableDictionary* _visibleDecorationViewsDict;
	NSMutableDictionary* _clonedCellsDict;
	NSMutableDictionary* _clonedSupplementaryViewsDict;
	NSMutableDictionary* _clonedDecorationViewsDict;
	NSIndexPath* _pendingSelectionIndexPath;
	NSMutableSet* _pendingDeselectionIndexPaths;
	UICollectionViewData* _collectionViewData;
	UICollectionViewUpdate* _currentUpdate;
	CGRect _visibleBounds;
	CGRect _preRotationBounds;
	CGPoint _rotationBoundsOffset;
	long long _rotationAnimationCount;
	long long _updateCount;
	NSMutableArray* _insertItems;
	NSMutableArray* _deleteItems;
	NSMutableArray* _reloadItems;
	NSMutableArray* _moveItems;
	NSArray* _originalInsertItems;
	NSArray* _originalDeleteItems;
	UITouch* _currentTouch;
	id _updateCompletionHandler;
	NSMutableDictionary* _cellClassDict;
	NSMutableDictionary* _cellNibDict;
	NSMutableDictionary* _supplementaryViewClassDict;
	NSMutableDictionary* _supplementaryViewNibDict;
	NSMutableDictionary* _cellNibExternalObjectsTables;
	NSMutableDictionary* _supplementaryViewNibExternalObjectsTables;
	UICollectionViewLayoutAttributes* _transitionLayoutAttributes;
	bool _isInInteractiveTransition;
	bool _shouldAccumulateTrackedLayoutValues;
	NSMutableDictionary* _interactiveTransitionInfos;
	/*^block*/ id _interactiveCompletionHandler;
	double _currentInteractiveTransitionTimeStamp;
	double _previousInteractiveTransitionTimeStamp;
	double _startTimeStamp;
	CGPoint _currentCenterOffset;
	CGPoint _previousCenterOffset;
	double _currentInteractiveTransitionProgress;
	double _previousInteractiveTransitionProgress;
	_UIDynamicAnimationGroup* _endInteractiveTransitionAnimationGroup;
	UICollectionViewLayout* _nextLayoutForInteractiveTranstion;
	NSMutableDictionary* _interactiveTransitionValueTrackingDict;
	NSMutableArray* _trackedValuesKeys;
	NSMutableDictionary* _invalidatedAttributes;
	struct {
		unsigned delegateShouldHighlightItemAtIndexPath : 1;
		unsigned delegateDidHighlightItemAtIndexPath : 1;
		unsigned delegateDidUnhighlightItemAtIndexPath : 1;
		unsigned delegateShouldSelectItemAtIndexPath : 1;
		unsigned delegateShouldDeselectItemAtIndexPath : 1;
		unsigned delegateDidSelectItemAtIndexPath : 1;
		unsigned delegateDidDeselectItemAtIndexPath : 1;
		unsigned delegateSupportsMenus : 1;
		unsigned delegateDidEndDisplayingCell : 1;
		unsigned delegateDidEndDisplayingSupplementaryView : 1;
		unsigned delegateIndexForReferenceItemDuringLayoutTransition : 1;
		unsigned delegateOverrideForTransitionOffsetSize : 1;
		unsigned delegateTargetContentOffsetForProposedContentOffset : 1;
		unsigned dataSourceNumberOfSections : 1;
		unsigned dataSourceViewForSupplementaryElement : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned scheduledUpdateVisibleCellLayoutAttributes : 1;
		unsigned allowsSelection : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned fadeCellsForBoundsChange : 1;
		unsigned updatingLayout : 1;
		unsigned needsReload : 1;
		unsigned reloading : 1;
		unsigned skipLayoutDuringSnapshotting : 1;
		unsigned layoutInvalidatedSinceLastCellUpdate : 1;
		unsigned doneFirstLayout : 1;
		unsigned loadingOffscreenViews : 1;
		unsigned updating : 1;
	}  _collectionViewFlags;
	CGPoint _lastLayoutOffset;
	/*^block*/ id _navigationCompletion;

}

@property (nonatomic,retain) UICollectionViewLayout * collectionViewLayout;                                                    //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic,@dynamic) <UICollectionViewDelegate> * delegate; 
@property (assign,nonatomic) <UICollectionViewDataSource> * dataSource;                                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) bool allowsSelection; 
@property (assign,nonatomic) bool allowsMultipleSelection; 
@property (getter=_currentUpdate,nonatomic,readonly) UICollectionViewUpdate * currentUpdate; 
@property (getter=_collectionViewData,nonatomic,readonly) UICollectionViewData * collectionViewData; 
@property (getter=_visibleViews,nonatomic,readonly) NSArray * visibleViews; 
@property (setter=_setNavigationCompletion:,getter=_navigationCompletion,nonatomic,copy) id navigationCompletion;              //@synthesize navigationCompletion=_navigationCompletion - In the implementation block
@property (setter=_setCurrentTouch:,getter=_currentTouch,nonatomic,retain) UITouch * currentTouch;                             //@synthesize currentTouch=_currentTouch - In the implementation block
+(id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(id)_gkVisibleCellForIndexPath:(id)arg1 ;
-(void)_gkRegisterCellClass:(Class)arg1 ;
-(id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2 ;
-(void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 ;
-(id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(id)_gkReuseIdentifierForClass:(Class)arg1 ;
-(long long)MPU_globalRowForRowAtIndexPath:(id)arg1 ;
-(CGSize)__ck_contentSize;
-(id)__ck_indexPathForLastItem;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(bool)_indexPathIsValid:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAllowsMultipleSelection:(bool)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(bool)allowsMultipleSelection;
-(id)dataSource;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_moveWithEvent:(id)arg1 ;
-(void)_ensureViewsAreLoadedInRect:(CGRect)arg1 ;
-(bool)canBecomeFirstResponder;
-(void)_setIsAncestorOfFirstResponder:(bool)arg1 ;
-(id)_viewControllerToNotifyOnLayoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(bool)arg2 ;
-(void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(long long)numberOfSections;
-(void)_updateVisibleCellsNow:(bool)arg1 ;
-(void)_suspendReloads;
-(id)_arrayForUpdateAction:(int)arg1 ;
-(void)_resumeReloads;
-(CGRect)_visibleBounds;
-(id)indexPathForCell:(id)arg1 ;
-(void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_updateBackgroundView;
-(id)visibleCells;
-(void)setAllowsSelection:(bool)arg1 ;
-(void)_setupCellAnimations;
-(bool)allowsSelection;
-(void)_reloadDataIfNeeded;
-(void)setBackgroundView:(id)arg1 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(id)backgroundView;
-(void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2 ;
-(bool)_shouldShowMenuForCell:(id)arg1 ;
-(bool)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3 ;
-(void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3 ;
-(id)_currentTouch;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(id)indexPathsForSelectedItems;
-(void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3 ;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(bool)arg3 ;
-(id)indexPathsForVisibleItems;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(id)collectionViewLayout;
-(void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)_visibleSupplementaryViewsOfKind:(id)arg1 ;
-(bool)_visible;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/ id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4 ;
-(void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3 ;
-(id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_invalidateLayoutIfNecessary;
-(void)_deselectAllAnimated:(bool)arg1 notifyDelegate:(bool)arg2 ;
-(void)_selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(bool)arg4 ;
-(void)_unhighlightAllItemsAndHighlightGlobalItem:(long long)arg1 ;
-(void)_deselectItemAtIndexPath:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3 ;
-(void)deselectItemAtIndexPath:(id)arg1 animated:(bool)arg2 ;
-(bool)_highlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3 notifyDelegate:(bool)arg4 ;
-(void)_reuseCell:(id)arg1 ;
-(void)_reuseSupplementaryView:(id)arg1 ;
-(void)_setNeedsVisibleCellsUpdate:(bool)arg1 withLayoutAttributes:(bool)arg2 ;
-(id)indexPathForSupplementaryView:(id)arg1 ;
-(id)_visibleViews;
-(CGPoint)_contentOffsetForNewFrame:(CGRect)arg1 oldFrame:(CGRect)arg2 newContentSize:(CGSize)arg3 andOldContentSize:(CGSize)arg4 ;
-(void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2 ;
-(void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2 ;
-(id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4 ;
-(bool)_shouldFadeCellsForBoundChangeWhileRotating;
-(id)_visibleViewForLayoutAttributes:(id)arg1 ;
-(id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2 ;
-(id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(bool)arg3 ;
-(id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(bool)arg4 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(/*^block*/ id)arg6 animationCompletion:(/*^block*/ id)arg7 enableCustomAnimations:(bool)arg8 customAnimationsType:(unsigned long long)arg9 ;
-(void)_highlightFirstVisibleItemIfAppropriate;
-(void)_setCollectionViewLayout:(id)arg1 animated:(bool)arg2 isInteractive:(bool)arg3 completion:(/*^block*/ id)arg4 ;
-(void)_setNavigationCompletion:(/*^block*/ id)arg1 ;
-(void)setCollectionViewLayout:(id)arg1 ;
-(void)_cleanUpAfterInteractiveTransitionDidFinish:(bool)arg1 ;
-(void)_updateTransitionWithProgress:(double)arg1 ;
-(void)_updateTrackedLayoutValuesWith:(id)arg1 ;
-(id)_dynamicAnimationsForTrackValues;
-(void)_finishInteractiveTransitionShouldFinish:(bool)arg1 finalAnimation:(bool)arg2 ;
-(id)_indexPathForView:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(bool)arg2 ;
-(id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(bool)arg2 ;
-(void)_endItemAnimations;
-(void)_updateSections:(id)arg1 updateAction:(int)arg2 ;
-(void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2 ;
-(void)_updateWithItems:(id)arg1 ;
-(id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(bool)arg3 ;
-(void)_prepareLayoutForUpdates;
-(id)_viewAnimationsForCurrentUpdate;
-(void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2 ;
-(void)_beginUpdates;
-(void)_endUpdates;
-(void)_unhighlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3 ;
-(void)_setCurrentTouch:(id)arg1 ;
-(id)_selectableIndexPathForItemContainingHitView:(id)arg1 ;
-(void)_unhighlightAllItems;
-(void)_userSelectItemAtIndexPath:(id)arg1 ;
-(void)_selectAllSelectedItems;
-(void)_cancelTouches;
-(long long)maximumGlobalItemIndex;
-(long long)highlightedGlobalItem;
-(id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3 ;
-(void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 ;
-(id)_keysForObject:(id)arg1 inDictionary:(id)arg2 ;
-(bool)_dataSourceImplementsNumberOfSections;
-(id)_collectionViewData;
-(bool)_highlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3 ;
-(id)_visibleCellForIndexPath:(id)arg1 ;
-(void)setCollectionViewLayout:(id)arg1 animated:(bool)arg2 ;
-(void)setCollectionViewLayout:(id)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(id)startInteractiveTransitionToCollectionViewLayout:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_finishInteractiveTransitionWithFinalAnimation:(bool)arg1 ;
-(void)_cancelInteractiveTransitionWithFinalAnimation:(bool)arg1 ;
-(id)_pivotForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(id)_visibleDecorationViewsOfKind:(id)arg1 ;
-(id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 ;
-(id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1 ;
-(void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3 ;
-(void)_setExternalObjectTable:(id)arg1 forNibLoadingOfSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3 ;
-(id)_currentUpdate;
-(void)insertSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)_invalidateLayoutWithContext:(id)arg1 ;
-(void)_cellMenuDismissed;
-(void)_trackLayoutValue:(double)arg1 forKey:(id)arg2 ;
-(double)_trackedLayoutValueForKey:(id)arg1 ;
-(/*^block*/ id)_navigationCompletion;
@end

