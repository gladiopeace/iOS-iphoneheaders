/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <SpringBoard/SBIconViewMapDelegate.h>
#import <SpringBoard/SBIconViewDelegate.h>

@protocol SBAppSliderIconControllerDelegate;
@class NSMutableArray, NSMutableDictionary, UIScrollView, UIView, SBStopScrollingGestureRecognizer, SBIconViewMap, NSArray;

@interface SBAppSliderIconController : UIViewController <UIScrollViewDelegate, SBIconViewMapDelegate, SBIconViewDelegate> {

	NSMutableArray* _appList;
	NSMutableDictionary* _iconViews;
	NSMutableArray* _iconViewCenters;
	UIScrollView* _scrollView;
	UIView* _iconContainer;
	float _distanceBetweenCenters;
	float _nominalDistanceBetweenCenters3;
	float _nominalDistanceBetweenCenters5;
	unsigned _iconTransitionIndex;
	BOOL _dragMaster;
	BOOL _preventScroll;
	SBStopScrollingGestureRecognizer* _stopScrollingGesture;
	int _layoutOrientation;
	int _simplicityOptions;
	CGRect _iconViewDefaultFrame;
	SBIconViewMap* _iconViewMap;
	<SBAppSliderIconControllerDelegate>* _delegate;
	NSArray* _displayIdentifiers;
	SBIconViewMap* _viewMap;

}

@property (assign,nonatomic) <SBAppSliderIconControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * displayIdentifiers;                                  //@synthesize displayIdentifiers=_displayIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned iconTransitionIndex;                                //@synthesize iconTransitionIndex=_iconTransitionIndex - In the implementation block
@property (nonatomic,readonly) SBIconViewMap * viewMap;                                   //@synthesize viewMap=_viewMap - In the implementation block
+(float)nominalDistanceBetween3IconCentersForSize:(CGSize)arg1 ;
+(float)nominalDistanceBetween5IconCentersForSize:(CGSize)arg1 ;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)viewMap;
-(void)setOffsetToIndex:(unsigned)arg1 animated:(BOOL)arg2 ;
-(unsigned)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
-(void)iconHandleLongPress:(id)arg1 ;
-(void)iconTouchBegan:(id)arg1 ;
-(BOOL)iconShouldAllowTap:(id)arg1 ;
-(void)iconTapped:(id)arg1 ;
-(float)iconLabelWidth;
-(Class)iconViewClassForIcon:(id)arg1 location:(int)arg2 ;
-(int)viewMap:(id)arg1 locationForIcon:(id)arg2 ;
-(id)windowForRecycledViewsInViewMap:(id)arg1 ;
-(void)setDisplayIdentifiers:(id)arg1 ;
-(void)setIconTransitionIndex:(unsigned)arg1 ;
-(void)reloadInOrientation:(int)arg1 ;
-(void)cancelScrolling;
-(void)setNormalizedOffset:(float)arg1 ;
-(void)removeIndex:(unsigned)arg1 duration:(double)arg2 ;
-(void)_iconsReloaded:(id)arg1 ;
-(CGPoint)_centerOfIndex:(unsigned)arg1 forDistance:(float)arg2 inOrientation:(int)arg3 ;
-(float)_halfWidth;
-(float)_distanceBetweenCenters;
-(float)_maxXOffsetForDistance:(float)arg1 ;
-(void)_recalculateBaseIconSpacingValues;
-(void)_handleStopScrollingGesture:(id)arg1 ;
-(void)_cleanupAllIcons;
-(unsigned)_centeredIndex;
-(float)_calculateDistanceBetweenCentersBasedOnCenteredIndex:(unsigned)arg1 ;
-(void)_updateVisibleIconViewsWithPadding:(BOOL)arg1 ;
-(void)_layoutForDistance:(float)arg1 ;
-(void)_cleanupIcon:(id)arg1 ;
-(CGRect)_iconFaultRectForIndex:(unsigned)arg1 ;
-(BOOL)_isIndexVisible:(unsigned)arg1 withPadding:(BOOL)arg2 ;
-(CGPoint)_adjustedCenter:(CGPoint)arg1 forIconView:(id)arg2 ;
-(float)_calculateDistanceBetweenCentersBasedOnCurrentContentOffset;
-(float)_recalculateLayout:(BOOL)arg1 ;
-(Class)viewMap:(id)arg1 iconViewClassForIcon:(id)arg2 ;
-(unsigned)iconTransitionIndex;
-(void)switcherWasDismissed:(BOOL)arg1 ;
-(id)_iconViewForIndex:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)delegate;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(int)_windowInterfaceOrientation;
-(void)loadView;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)isScrolling;
-(id)displayIdentifiers;
@end

