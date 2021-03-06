/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SBAppSwitcherScrollingViewDelegate;
@class NSMutableArray, NSMutableDictionary, SBAppSwitcherScrollView, UITapGestureRecognizer, SBStopScrollingGestureRecognizer, SBDisplayItem, NSMutableSet, NSArray, NSString;

@interface SBAppSwitcherPageViewController : UIViewController <UIScrollViewDelegate> {

	NSMutableArray* _displayLayouts;
	NSMutableDictionary* _items;
	char _itemsListIsValid;
	SBAppSwitcherScrollView* _scrollView;
	char _dragMaster;
	char _preventScroll;
	UITapGestureRecognizer* _tapGesture;
	SBStopScrollingGestureRecognizer* _stopScrollingGesture;
	int _layoutOrientation;
	/*^block*/id _scrollDoneBlock;
	char _isMoving;
	char _isLayingOutForReachability;
	SBDisplayItem* _displayItemForWhichRemovalIsBeingCancelled;
	NSMutableSet* _scrollViewsToKillWithOnScrollEnd;
	id<SBAppSwitcherScrollingViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SBAppSwitcherScrollingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float normalizedOffset; 
@property (nonatomic,copy) NSArray * displayLayouts; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleReachabilityModeDeactivated;
-(void)setOffsetToIndex:(unsigned)arg1 animated:(char)arg2 ;
-(float)preferredHeightForOrientation:(int)arg1 ;
-(void)setDisplayLayouts:(NSArray *)arg1 ;
-(void)reloadInOrientation:(int)arg1 ;
-(void)cancelPossibleRemovalOfDisplayItem:(id)arg1 ;
-(char)isDisplayLayoutVisible:(id)arg1 ;
-(void)cancelScrolling;
-(void)setOffsetToIndex:(unsigned)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)pageViewForDisplayLayout:(id)arg1 ;
-(NSArray *)displayLayouts;
-(void)replaceItemAtIndex:(unsigned)arg1 withNewItem:(id)arg2 duration:(double)arg3 ;
-(void)insertItem:(id)arg1 atIndex:(unsigned)arg2 duration:(double)arg3 updateScrollPosition:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeItem:(id)arg1 duration:(double)arg2 updateScrollPosition:(char)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned)settledIndexForNormalizedOffset:(inout float*)arg1 andXVelocity:(float)arg2 ;
-(float)_halfWidth;
-(float)_distanceBetweenCenters;
-(id)_safeDelegate;
-(void)_disableScrolling;
-(void)_enableScrolling;
-(void)_fireAndCleanupScrollCompleteBlockIfNecessary;
-(CGPoint)_centerOfIndex:(unsigned)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)_setScrollingDoneBlock:(/*^block*/id)arg1 ;
-(float)_maxXOffset;
-(char)_isItemVisible:(id)arg1 withSidePadding:(float)arg2 ;
-(char)_isAnyScrollContainerScrolling;
-(void)_handleStopGesture:(id)arg1 ;
-(id)_createScrollViewForItem;
-(CGRect)_naturalScrollViewFrame;
-(void)_layoutItemContainer:(id)arg1 ;
-(void)_generateContentViewForDisplayLayoutIfNecessary:(id)arg1 ;
-(void)_notifyDelegateOfKillOffsetChange;
-(void)_updateVisiblePageViews;
-(void)switcherWasDismissed:(char)arg1 ;
-(NSRange)visibleItems;
-(void)cancelTracking;
-(void)dealloc;
-(void)setDelegate:(id<SBAppSwitcherScrollingViewDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBAppSwitcherScrollingViewDelegate>)delegate;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)_handleTapGesture:(id)arg1 ;
-(void)loadView;
-(char)shouldAutomaticallyForwardRotationMethods;
-(void)_layout;
-(void)setNormalizedOffset:(float)arg1 ;
-(float)normalizedOffset;
-(unsigned)currentPage;
-(char)isScrolling;
-(void)handleReachabilityModeActivated;
@end

