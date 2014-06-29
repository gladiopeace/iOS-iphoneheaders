/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileTimer/FullScreenWorldClockCollectionCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSTimer, UIButton, UIPinchGestureRecognizer, UIPageControl, UICollectionView;

@interface FullScreenWorldClockCollectionController : UIViewController <FullScreenWorldClockCollectionCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	NSTimer* _hideInfoTimer;
	BOOL _showingInfo;
	id _dismissTarget;
	SEL _dismissAction;
	UIButton* _yahooButton;
	int _currentPage;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIPageControl* _pageIndicator;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UIPageControl * pageIndicator;                  //@synthesize pageIndicator=_pageIndicator - In the implementation block
@property (nonatomic,readonly) UIButton * yahooButton;                         //@synthesize yahooButton=_yahooButton - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(void)scrollToCurrentPage;
-(id)pageIndicator;
-(void)weatherDataUpdated;
-(void)pinchAction:(id)arg1 ;
-(void)handleApplicationDidEnterBackground;
-(void)handleApplicationWillEnterForeground;
-(void)updatePageIndicator;
-(id)yahooButton;
-(void)setDismissTarget:(id)arg1 action:(SEL)arg2 ;
-(void)hideInfoAfterDelay;
-(void)cancelDelayedHideInfo;
-(BOOL)isCurrentPageNighttime;
-(void)yahooButtonPressed;
-(void)setShowingInfo:(BOOL)arg1 ;
-(void)hideInfo;
-(void)updatePageIndicatorColor:(BOOL)arg1 ;
-(void)hideInfoIfTemporarilyShowing;
-(void)cellBackgroundDidUpdate:(id)arg1 isDayTime:(BOOL)arg2 ;
-(void)setShowingStatusBar:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)collectionView;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(void)dismiss;
-(CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
@end

