/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol UIPageControllerDelegate;
@class NSMutableArray, UIView, UIScrollView, UIPageControl, UIViewController;

@interface UIPageController : UIViewController {

	NSMutableArray* _viewControllers;
	UIView* _wrapperViews[3];
	int _notificationState[3];
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	<UIPageControllerDelegate>* _delegate;
	int _pageSpacing;
	long long _visibleIndex;
	long long _pageCount;
	struct {
		unsigned delegateViewControllerAtIndex : 1;
		unsigned delegateWillBeginPaging : 1;
		unsigned delegateDidEndPaging : 1;
		unsigned displaysPageControl : 1;
		unsigned wraps : 1;
	}  _pageControllerFlags;

}

@property (assign,nonatomic) <UIPageControllerDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double pageSpacing; 
@property (assign,nonatomic) bool displaysPageControl; 
@property (nonatomic,readonly) UIViewController * visibleViewController; 
@property (assign,nonatomic) long long pageCount; 
@property (assign,nonatomic) long long visibleIndex; 
@property (assign,nonatomic) bool wraps; 
-(void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(bool)arg2 animated:(bool)arg3 ;
-(void)reloadViewControllerAtIndex:(long long)arg1 ;
-(id)_pageControllerScrollView;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(bool)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(bool)_allowsAutorotation;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(bool)_shouldUseOnePartRotation;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI27*)arg1 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)visibleViewController;
-(id)_scrollView;
-(long long)pageCount;
-(void)_scrollView:(id)arg1 boundsDidChangeToSize:(CGSize)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 forceUpdate:(bool)arg2 ;
-(void)_scrollViewWillBeginPaging;
-(void)_scrollViewDidEndPaging;
-(long long)visibleIndex;
-(CGRect)_scrollViewFrame;
-(void)_createPageControl;
-(bool)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2 ;
-(void)_adjustScrollViewContentInsets;
-(void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2 ;
-(id)_visibleViewController;
-(void)_setPreviousViewController:(id)arg1 ;
-(void)_setVisibleViewController:(id)arg1 ;
-(void)_notifyVisibleViewController:(int)arg1 animated:(bool)arg2 ;
-(void)_setNextViewController:(id)arg1 ;
-(id)_loadPreviousViewController;
-(id)_loadVisibleViewControllerAndNotify:(bool)arg1 ;
-(id)_loadNextViewController;
-(id)_previousViewController;
-(id)_nextViewController;
-(void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(bool)arg4 ;
-(int)_previousViewControllerNotificationState;
-(int)_visibleViewControllerNotificationState;
-(int)_nextViewControllerNotificationState;
-(void)_notifyPreviousViewController:(int)arg1 animated:(bool)arg2 ;
-(void)_notifyNextViewController:(int)arg1 animated:(bool)arg2 ;
-(bool)_hasPreviousViewController;
-(bool)_hasNextViewController;
-(void)_setNextViewControllerNotificationState:(int)arg1 ;
-(void)_setVisibleViewControllerNotificationState:(int)arg1 ;
-(void)_setPreviousViewControllerNotificationState:(int)arg1 ;
-(void)setVisibleIndex:(long long)arg1 ;
-(bool)_needToLoadPrevious;
-(bool)_needToLoadNext;
-(void)setVisibleIndex:(long long)arg1 animated:(bool)arg2 ;
-(void)_pageChanged:(id)arg1 ;
-(bool)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1 ;
-(void)setPageSpacing:(double)arg1 ;
-(double)pageSpacing;
-(bool)_needToLoadVisible;
-(bool)_hasVisibleViewController;
-(void)setPageCount:(long long)arg1 ;
-(bool)wraps;
-(void)setWraps:(bool)arg1 ;
-(bool)displaysPageControl;
-(void)setDisplaysPageControl:(bool)arg1 ;
-(long long)indexOfViewController:(id)arg1 ;
@end

