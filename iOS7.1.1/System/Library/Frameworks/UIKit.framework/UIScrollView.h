/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIScrollToTopView.h>
#import <CoreFoundation/NSCoding.h>

@class UIImageView, _UIStaticScrollBar, UIView, UISwipeGestureRecognizer, NSISVariable, NSArray, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface UIScrollView : UIView <_UIScrollToTopView, NSCoding> {

	id _delegate;
	CGSize _contentSize;
	UIEdgeInsets _contentInset;
	UIImageView* _verticalScrollIndicator;
	UIImageView* _horizontalScrollIndicator;
	_UIStaticScrollBar* _staticScrollBar;
	UIEdgeInsets _scrollIndicatorInset;
	double _startOffsetX;
	double _startOffsetY;
	double _lastUpdateOffsetX;
	double _lastUpdateOffsetY;
	double _lastUpdateTime;
	double _minimumZoomScale;
	double _maximumZoomScale;
	UIView* _zoomView;
	double _horizontalVelocity;
	double _verticalVelocity;
	double _previousHorizontalVelocity;
	double _previousVerticalVelocity;
	id _scrollHeartbeat;
	CGPoint _pageDecelerationTarget;
	CGSize _decelerationFactor;
	CGPoint _adjustedDecelerationTarget;
	CGSize _adjustedDecelerationFactor;
	double _decelerationLnFactorH;
	double _decelerationLnFactorV;
	id* _shadows;
	id _scrollNotificationViews;
	double _contentOffsetAnimationDuration;
	id _animation;
	id _zoomAnimation;
	id _pinch;
	id _pan;
	id _swipe;
	id _touchDelayGestureRecognizer;
	UISwipeGestureRecognizer* _lowFidelitySwipeGestureRecognizers[4];
	UIScrollView* _draggingChildScrollView;
	CGPoint _parentAdjustment;
	double _pagingSpringPull;
	double _pagingFriction;
	long long _fastScrollCount;
	double _fastScrollMultiplier;
	double _fastScrollStartMultiplier;
	double _fastScrollEndTime;
	CGPoint _rotationCenterPoint;
	double _accuracy;
	unsigned long long _zoomAnimationCount;
	CGSize _accumulatedOffset;
	long long _touchLevel;
	double _savedKeyboardAdjustmentDelta;
	struct {
		unsigned tracking : 1;
		unsigned dragging : 1;
		unsigned verticalBounceEnabled : 1;
		unsigned horizontalBounceEnabled : 1;
		unsigned verticalBouncing : 1;
		unsigned horizontalBouncing : 1;
		unsigned bouncesZoom : 1;
		unsigned zoomBouncing : 1;
		unsigned alwaysBounceHorizontal : 1;
		unsigned alwaysBounceVertical : 1;
		unsigned preventScrollingContainer : 1;
		unsigned canCancelContentTouches : 1;
		unsigned delaysContentTouches : 1;
		unsigned programmaticScrollDisabled : 1;
		unsigned scrollDisabled : 1;
		unsigned zoomDisabled : 1;
		unsigned scrollTriggered : 1;
		unsigned showsHorizontalScrollIndicator : 1;
		unsigned showsVerticalScrollIndicator : 1;
		unsigned indicatorStyle : 2;
		unsigned inZoom : 1;
		unsigned hideIndicatorsInZoom : 1;
		unsigned pushedTrackingMode : 1;
		unsigned displayingScrollIndicators : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned pagingEnabled : 1;
		unsigned pagingLeft : 1;
		unsigned pagingRight : 1;
		unsigned pagingUp : 1;
		unsigned pagingDown : 1;
		unsigned lastHorizontalDirection : 1;
		unsigned lastVerticalDirection : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned singleFingerPan : 1;
		unsigned autoscrolling : 1;
		unsigned automaticContentOffsetAdjustmentDisabled : 1;
		unsigned skipStartOffsetAdjustment : 1;
		unsigned delegateScrollViewDidScroll : 1;
		unsigned delegateScrollViewDidZoom : 1;
		unsigned delegateContentSizeForZoomScale : 1;
		unsigned preserveCenterDuringRotation : 1;
		unsigned delaysTrackingWhileDecelerating : 1;
		unsigned pinnedZoomMin : 1;
		unsigned pinnedXMin : 1;
		unsigned pinnedYMin : 1;
		unsigned pinnedXMax : 1;
		unsigned pinnedYMax : 1;
		unsigned skipLinkChecks : 1;
		unsigned staysCenteredDuringPinch : 1;
		unsigned wasDelayingPinchForSystemGestures : 1;
		unsigned systemGesturesRecognitionPossible : 1;
		unsigned disableContentOffsetRounding : 1;
		unsigned adjustedDecelerationTargetX : 1;
		unsigned adjustedDecelerationTargetY : 1;
		unsigned hasScrolled : 1;
		unsigned wantsConstrainedContentSize : 1;
		unsigned updateInsetBottom : 1;
		unsigned beingDraggedByChildScrollView : 1;
		unsigned adjustsTargetsOnContentOffsetChanges : 1;
		unsigned forwardsTouchesUpResponderChain : 1;
	}  _scrollViewFlags;
	bool _useContentDimensionVariablesForConstraintLowering;
	id _scrollTestParameters;
	long long _keyboardDismissMode;
	NSISVariable* _contentWidthVariable;
	NSISVariable* _contentHeightVariable;
	NSArray* _automaticContentConstraints;
	CGPoint _zoomAnchorPoint;

}

@property (assign,setter=_setAdjustsTargetsOnContentOffsetChanges:,getter=_adjustsTargetsOnContentOffsetChanges,nonatomic) bool adjustsTargetsOnContentOffsetChanges; 
@property (assign,getter=isProgrammaticScrollEnabled,nonatomic) bool programmaticScrollEnabled; 
@property (getter=_isScrollingToTop,nonatomic,readonly) bool scrollingToTop; 
@property (getter=_isAnimatingScroll,nonatomic,readonly) bool isAnimatingScroll; 
@property (nonatomic,readonly) _UIStaticScrollBar * _staticScrollBar; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) CGSize contentSize;                                                                                                                                   //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                                                                            //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) <UIScrollViewDelegate> * delegate;                                                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) bool directionalLockEnabled; 
@property (assign,nonatomic) bool bounces; 
@property (assign,nonatomic) bool alwaysBounceVertical; 
@property (assign,nonatomic) bool alwaysBounceHorizontal; 
@property (assign,getter=isPagingEnabled,nonatomic) bool pagingEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) bool scrollEnabled; 
@property (assign,nonatomic) bool showsHorizontalScrollIndicator; 
@property (assign,nonatomic) bool showsVerticalScrollIndicator; 
@property (assign,nonatomic) UIEdgeInsets scrollIndicatorInsets; 
@property (assign,nonatomic) long long indicatorStyle; 
@property (assign,nonatomic) double decelerationRate; 
@property (getter=isTracking,nonatomic,readonly) bool tracking; 
@property (getter=isDragging,nonatomic,readonly) bool dragging; 
@property (getter=isDecelerating,nonatomic,readonly) bool decelerating; 
@property (assign,nonatomic) bool delaysContentTouches; 
@property (assign,nonatomic) bool canCancelContentTouches; 
@property (assign,nonatomic) double minimumZoomScale; 
@property (assign,nonatomic) double maximumZoomScale;                                                                                                                              //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) bool bouncesZoom; 
@property (getter=isZooming,nonatomic,readonly) bool zooming; 
@property (getter=isZoomBouncing,nonatomic,readonly) bool zoomBouncing; 
@property (assign,nonatomic) bool scrollsToTop; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                                                                                      //@synthesize pan=_pan - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                                                                                                  //@synthesize pinch=_pinch - In the implementation block
@property (assign,nonatomic) long long keyboardDismissMode;                                                                                                                        //@synthesize keyboardDismissMode=_keyboardDismissMode - In the implementation block
@property (nonatomic,retain) id scrollTestParameters;                                                                                                                              //@synthesize scrollTestParameters=_scrollTestParameters - In the implementation block
@property (nonatomic,readonly) NSISVariable * _contentWidthVariable;                                                                                                               //@synthesize contentWidthVariable=_contentWidthVariable - In the implementation block
@property (nonatomic,readonly) NSISVariable * _contentHeightVariable;                                                                                                              //@synthesize contentHeightVariable=_contentHeightVariable - In the implementation block
@property (assign,setter=_setUseContentDimensionVariablesForConstraintLowering:,nonatomic) bool _useContentDimensionVariablesForConstraintLowering;                                //@synthesize useContentDimensionVariablesForConstraintLowering=_useContentDimensionVariablesForConstraintLowering - In the implementation block
@property (setter=_setAutomaticContentConstraints:,nonatomic,copy) NSArray * _automaticContentConstraints;                                                                         //@synthesize automaticContentConstraints=_automaticContentConstraints - In the implementation block
@property (getter=_isVerticalBouncing,nonatomic,readonly) bool isVerticalBouncing; 
@property (getter=_isHorizontalBouncing,nonatomic,readonly) bool isHorizontalBouncing; 
@property (getter=_isAnimatingZoom,nonatomic,readonly) bool isAnimatingZoom; 
@property (assign,setter=_setZoomAnchorPoint:,getter=_zoomAnchorPoint,nonatomic) CGPoint zoomAnchorPoint;                                                                          //@synthesize zoomAnchorPoint=_zoomAnchorPoint - In the implementation block
+(SEL)_pinchGestureAction;
+(SEL)_panGestureAction;
+(void)_scrollWithNSTimer:(bool)arg1 ;
-(id)keyForContentMode:(int)arg1 ;
-(void)saveScrollPositionForKey:(id)arg1 ;
-(bool)restoreScrollPositionForKey:(id)arg1 ;
-(void)ACSportsScrollToEndHorizontally;
-(void)_testingScrollStep;
-(void)scrollBy:(float)arg1 forIterations:(int)arg2 ;
-(void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3 ;
-(id)topExtensionViewColor;
-(void)setTopExtensionViewColor:(id)arg1 ;
-(void)__ck_scrollToBottom:(bool)arg1 ;
-(bool)__ck_isScrolledToTop;
-(void)__ck_scrollToTop:(bool)arg1 ;
-(CGSize)__ck_contentSize;
-(CGPoint)__ck_scrollToBottomContentOffset;
-(CGPoint)__ck_scrollToTopContentOffset;
-(bool)__ck_isScrolledToBottom;
-(bool)mf_needsToAdjustContentOffset;
-(void)ab_scrollToSelectionOfTextView:(id)arg1 ;
-(void)ab_scrollToSelectionOfTextView:(id)arg1 animated:(bool)arg2 ;
-(double)ab_verticalOverlapUsingKeyboardInfo:(id)arg1 ;
-(void)ab_adjustForAutomaticKeyboardInfo:(id)arg1 lastAdjustment:(double*)arg2 ;
-(CGSize)_accessibilityContentSize;
-(int)scrollableDirections;
-(double)maxVelocityInDirection:(int)arg1 ;
-(bool)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5 ;
-(void)_incrementForScrollTest;
-(id)_scrollTestExtraResults;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 ;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 ;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(bool)_viewIsInsideNavigationController;
-(bool)_canScrollX;
-(bool)_canScrollY;
-(CGPoint)_adjustedContentOffsetPinnedToScrollableBounds:(CGPoint)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 animated:(bool)arg2 animationCurve:(int)arg3 ;
-(void)_ensureViewsAreLoadedInRect:(CGRect)arg1 ;
-(bool)_forwardsToParentScroller;
-(void)_addScrollNotificationView:(id)arg1 ;
-(void)_removeScrollNotificationView:(id)arg1 ;
-(void)_skipNextStartOffsetAdjustment;
-(void)_clearContentOffsetAnimation:(id)arg1 ;
-(void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(bool)arg1 ;
-(void)_adjustContentOffsetIfNecessary;
-(void)_notifyDidScroll;
-(void)_adjustBackgroundShadowsForContentSizeForcedVisible:(bool)arg1 ;
-(void)_stopScrollingNotify:(bool)arg1 pin:(bool)arg2 ;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(bool*)arg5 ;
-(void)_scrollViewWillBeginDragging;
-(bool)_shouldScrollOnGestureRecognizerFailed;
-(void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1 ;
-(void)_scrollViewDidEndZooming;
-(void)_scrollViewWillBeginZooming;
-(bool)_beginTrackingWithEvent:(id)arg1 ;
-(void)_resetScrollingWithUIEvent:(id)arg1 ;
-(double)_contentOffsetAnimationDuration;
-(void)_setContentOffsetAnimationDuration:(double)arg1 ;
-(CGPoint)_animatedTargetOffset;
-(double)_horizontalVelocity;
-(double)_verticalVelocity;
-(bool)_isBouncing;
-(double)_offsetForRubberBandOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 ;
-(double)_shadowHeightOffset;
-(void)_adjustBackgroundShadowsForContentSizeForcedVisible:(bool)arg1 withOffset:(double)arg2 ;
-(void)_scrollViewDidEndDecelerating;
-(void)_stopScrollDecelerationNotify:(bool)arg1 ;
-(void)_stopScrollingNotify:(bool)arg1 pin:(bool)arg2 tramplingDragFlags:(bool)arg3 ;
-(void)_clearContentOffsetAnimation;
-(void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(bool)arg1 tramplingDragFlags:(bool)arg2 ;
-(void)_addContentSubview:(id)arg1 atBack:(bool)arg2 ;
-(void)_setContentOffset:(CGPoint)arg1 animated:(bool)arg2 animationCurve:(int)arg3 animationAdjustsForContentOffsetDelta:(bool)arg4 ;
-(CGPoint)_originalOffsetForAnimatedSetContentOffset;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2 ;
-(void)_delegateScrollViewAnimationEnded;
-(void)_adjustShadowsIfNecessary;
-(bool)_shouldTrackImmediatelyWhileDecelerating;
-(void)_clearParentAdjustment;
-(void)_adjustStartOffsetForGrabbedBouncingScrollView;
-(void)_stopScrollingAndZoomingAnimations;
-(bool)_resetScrollingForGestureEvent:(id)arg1 ;
-(bool)_canCancelContentTouches:(id)arg1 ;
-(void)_moveContentSubview:(id)arg1 toBack:(bool)arg2 ;
-(void)_setContentOffset:(CGPoint)arg1 duration:(double)arg2 animationCurve:(int)arg3 ;
-(void)_setAbsoluteContentOffset:(CGPoint)arg1 animated:(bool)arg2 ;
-(void)_updateScrollAnimationForChangedTargetOffset:(CGPoint)arg1 ;
-(void)_setAutomaticContentOffsetAdjustmentEnabled:(bool)arg1 ;
-(bool)_isAutomaticContentOffsetAdjustmentEnabled;
-(void)_forceDelegateScrollViewDidZoom:(bool)arg1 ;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 fraction:(float)arg3 ;
-(bool)_scrollsToMakeFirstResponderVisible;
-(double)_touchDelayForScrollDetection;
-(void)_setContentOffsetPinned:(CGPoint)arg1 ;
-(void)_setContentOffsetPinned:(CGPoint)arg1 animated:(bool)arg2 ;
-(id)_parentScrollView;
-(CGPoint)_animatedOriginalOffset;
-(void)_setAlwaysBounceVertical:(bool)arg1 ;
-(void)_setShowsVerticalScrollIndicator:(bool)arg1 ;
-(void)_setShowsHorizontalScrollIndicator:(bool)arg1 ;
-(void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(bool)arg2 lastAdjustment:(double*)arg3 ;
-(bool)_pagingLeft;
-(bool)_pagingRight;
-(bool)_pagingUp;
-(bool)_pagingDown;
-(void)_setAutoscrolling:(bool)arg1 ;
-(bool)_isAutoscrolling;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1 ;
-(CGRect)contentFrameForView:(id)arg1 ;
-(void)_adjustShadowsIfNecessaryForOffset:(double)arg1 ;
-(id)_backgroundShadowForSlideAnimation;
-(void)_pinContentOffsetToClosestPageBoundary;
-(CGRect)_rectForPageContainingView:(id)arg1 ;
-(bool)_isScrollingEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(bool)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setShowsVerticalScrollIndicator:(bool)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(bool)isDragging;
-(bool)isDecelerating;
-(id)description;
-(id)delegate;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(bool)isProgrammaticScrollEnabled;
-(void)setProgrammaticScrollEnabled:(bool)arg1 ;
-(bool)isScrollEnabled;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/ id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(bool)isTracking;
-(bool)cancelTouchTracking;
-(bool)cancelMouseTracking;
-(CGPoint)contentOffset;
-(id)_contentWidthVariable;
-(id)_contentHeightVariable;
-(id)nsli_contentWidthVariable;
-(id)nsli_contentHeightVariable;
-(void)_didAddDependentConstraint:(id)arg1 ;
-(void)_didRemoveDependentConstraint:(id)arg1 ;
-(void)_resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(bool)_supportsContentDimensionVariables;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3 ;
-(void)_setSubviewWantsAutolayout;
-(void)_webCustomViewWillBeRemovedFromSuperview;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_createGestureRecognizersForCurrentTouchLevel;
-(void)_adjustScrollerIndicators:(bool)arg1 alwaysShowingThem:(bool)arg2 ;
-(void)setDirectionalLockEnabled:(bool)arg1 ;
-(void)_updateContentFitDisableScrolling;
-(id)_getDelegateZoomView;
-(bool)isZooming;
-(void)_centerContentIfNecessary;
-(bool)isDirectionalLockEnabled;
-(void)setScrollTestParameters:(id)arg1 ;
-(id)_staticScrollBar;
-(void)_layoutStaticScrollBar;
-(void)_staticScrollBar:(id)arg1 didScrollInDirection:(CGPoint)arg2 ;
-(void)_hideScrollIndicators;
-(void)_updateUsesStaticScrollBar;
-(void)_enableOnlyGestureRecognizersForCurrentTouchLevel;
-(bool)isPagingEnabled;
-(bool)_usesLowFidelityPanning;
-(void)_setUsesStaticScrollBar:(bool)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)handlePinch:(id)arg1 ;
-(void)_updatePanGestureConfiguration;
-(void)_handleSwipe:(id)arg1 ;
-(void)_updateScrollGestureRecognizersEnabled;
-(bool)_startBeingDraggedByChild:(id)arg1 ;
-(bool)_stopBeingDraggedByChild:(id)arg1 ;
-(bool)_transfersScrollToContainer;
-(double)_adjustedHorizontalOffsetPinnedToScrollableBounds:(double)arg1 ;
-(double)_adjustedVerticalOffsetPinnedToScrollableBounds:(double)arg1 ;
-(void)_startDraggingParent:(id)arg1 ;
-(void)_stopDraggingParent:(id)arg1 ;
-(CGSize)contentSize;
-(double)zoomScale;
-(void)setContentSize:(CGSize)arg1 ;
-(void)_attemptToDragParent:(id)arg1 forNewBounds:(CGRect)arg2 oldBounds:(CGRect)arg3 ;
-(id)_automaticContentConstraints;
-(id)_constraintsFromContentSize;
-(void)_setAutomaticContentConstraints:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)_registerAsScrollToTopViewIfPossible;
-(void)setContentOffset:(CGPoint)arg1 animated:(bool)arg2 ;
-(id)_scrollViewTouchDelayGesture;
-(void)setScrollEnabled:(bool)arg1 ;
-(void)_updateZoomGestureRecognizersEnabled;
-(void)_updatePagingGesture;
-(unsigned long long)_abuttedEdgesForContentOffset:(CGPoint)arg1 ;
-(unsigned long long)_currentlyAbuttedContentEdges;
-(void)delayed:(id)arg1 ;
-(void)_updatePinchGesture;
-(void)_systemGestureStateChanged:(id)arg1 ;
-(void)_handleLowFidelitySwipe:(id)arg1 ;
-(double)minimumZoomScale;
-(void)willRotateToInterfaceOrientation:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg1 ;
-(void)_registerForRotation:(bool)arg1 ofWindow:(id)arg2 ;
-(void)_flashScrollIndicatorsPersistingPreviousFlashes:(bool)arg1 ;
-(void)_setShowsBackgroundShadow:(bool)arg1 ;
-(bool)alwaysBounceHorizontal;
-(bool)alwaysBounceVertical;
-(CGPoint)_rubberBandContentOffsetForOffset:(CGPoint)arg1 outsideX:(bool*)arg2 outsideY:(bool*)arg3 ;
-(long long)keyboardDismissMode;
-(bool)_scrollViewWillEndDraggingWithDeceleration:(bool)arg1 ;
-(void)_startTimer:(bool)arg1 ;
-(void)_popTrackingRunLoopMode;
-(bool)_staysCenteredDuringPinch;
-(double)_zoomScaleFromPresentationLayer:(bool)arg1 ;
-(void)_setZoomAnchorPoint:(CGPoint)arg1 ;
-(void)setZoomScale:(double)arg1 withAnchorPoint:(CGPoint)arg2 validatingScrollOffset:(bool)arg3 allowRubberbanding:(bool)arg4 animated:(bool)arg5 duration:(double)arg6 notifyDelegate:(bool)arg7 ;
-(void)_updatePinchGestureForState:(long long)arg1 ;
-(void)setZoomScale:(double)arg1 withAnchorPoint:(CGPoint)arg2 validatingScrollOffset:(bool)arg3 allowRubberbanding:(bool)arg4 animated:(bool)arg5 duration:(double)arg6 notifyDelegate:(bool)arg7 force:(bool)arg8 ;
-(void)_prepareToPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2 ;
-(void)_endPanNormal:(bool)arg1 ;
-(void)_updatePanGesture;
-(void)_accumulateViewConstraintsIntoArray:(id)arg1 ;
-(CGSize)_nsis_contentSize;
-(bool)_constraintAffectsContentSize:(id)arg1 ;
-(id)_layoutVariablesWithAmbiguousValue;
-(void)_zoomToCenter:(CGPoint)arg1 scale:(double)arg2 duration:(double)arg3 force:(bool)arg4 ;
-(void)setZoomScale:(double)arg1 animated:(bool)arg2 ;
-(double)_zoomRubberBandScaleForScale:(double)arg1 ;
-(float)_zoomAnimationDurationForScale:(double)arg1 ;
-(void)_zoomAnimationDidStop;
-(void)_adjustContentSizeForView:(id)arg1 atScale:(double)arg2 ;
-(CGPoint)_zoomAnchorPoint;
-(void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2 ;
-(double)_zoomScaleForRubberBandScale:(double)arg1 ;
-(bool)_getPagingDecelerationOffset:(CGPoint*)arg1 forTimeInterval:(double)arg2 ;
-(bool)_getBouncingDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double*)arg8 ;
-(void)_getStandardDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double*)arg7 ;
-(void)_smoothScrollWithUpdateTime:(double)arg1 ;
-(void)_smoothScrollTimer:(id)arg1 ;
-(void)_smoothScrollDisplayLink:(id)arg1 ;
-(void)_runLoopModePopped:(id)arg1 ;
-(bool)_isAnimatingScroll;
-(CGPoint)_contentOffsetForLowFidelityScrollInDirection:(CGPoint)arg1 duration:(double*)arg2 ;
-(void)_lowFidelityScrollInDirection:(CGPoint)arg1 ;
-(void)_smoothScrollIntoBounds;
-(id)_panGestureRecognizer;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(bool)_isRectFullyVisible:(CGRect)arg1 ;
-(bool)_adjustsTargetsOnContentOffsetChanges;
-(void)_setAdjustsTargetsOnContentOffsetChanges:(bool)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(bool)arg2 ;
-(void)setScrollingEnabled:(bool)arg1 ;
-(void)setZoomEnabled:(bool)arg1 ;
-(bool)isZoomEnabled;
-(bool)_isScrollingToTop;
-(void)setPagingEnabled:(bool)arg1 ;
-(unsigned long long)_abuttedPagingEdges;
-(void)setBounces:(bool)arg1 ;
-(bool)bounces;
-(void)setBouncesHorizontally:(bool)arg1 ;
-(bool)bouncesHorizontally;
-(void)setBouncesVertically:(bool)arg1 ;
-(bool)bouncesVertically;
-(void)setUpdateInsetBottomDuringKeyboardDismiss:(bool)arg1 ;
-(bool)updateInsetBottomDuringKeyboardDismiss;
-(double)keyboardBottomInsetAdjustmentDelta;
-(void)setAlwaysBounceVertical:(bool)arg1 ;
-(void)setAlwaysBounceHorizontal:(bool)arg1 ;
-(void)_setTransfersScrollToContainer:(bool)arg1 ;
-(bool)_isVerticalBouncing;
-(bool)_isHorizontalBouncing;
-(bool)showsHorizontalScrollIndicator;
-(void)setShowsHorizontalScrollIndicator:(bool)arg1 ;
-(bool)showsVerticalScrollIndicator;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsets;
-(void)setIndicatorStyle:(long long)arg1 ;
-(double)decelerationRate;
-(void)setDecelerationRate:(double)arg1 ;
-(long long)indicatorStyle;
-(double)horizontalScrollDecelerationFactor;
-(void)setHorizontalScrollDecelerationFactor:(double)arg1 ;
-(double)verticalScrollDecelerationFactor;
-(void)setVerticalScrollDecelerationFactor:(double)arg1 ;
-(void)setAllowsMultipleFingers:(bool)arg1 ;
-(bool)allowsMultipleFingers;
-(void)setTracksImmediatelyWhileDecelerating:(bool)arg1 ;
-(bool)tracksImmediatelyWhileDecelerating;
-(double)_scrollHysteresis;
-(bool)preservesCenterDuringRotation;
-(void)setPreservesCenterDuringRotation:(bool)arg1 ;
-(void)flashScrollIndicators;
-(bool)_showsBackgroundShadow;
-(void)setShowBackgroundShadow:(bool)arg1 ;
-(CGPoint)_touchPositionForTouches:(id)arg1 ;
-(void)_rubberBandToOffset:(CGPoint)arg1 ;
-(void)_setStaysCenteredDuringPinch:(bool)arg1 ;
-(bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(bool)_forwardsTouchesUpResponderChain;
-(void)_setForwardsTouchesUpResponderChain:(bool)arg1 ;
-(bool)bouncesZoom;
-(void)setBouncesZoom:(bool)arg1 ;
-(bool)canCancelContentTouches;
-(void)setCanCancelContentTouches:(bool)arg1 ;
-(bool)delaysContentTouches;
-(void)setDelaysContentTouches:(bool)arg1 ;
-(bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3 ;
-(bool)touchesShouldCancelInContentView:(id)arg1 ;
-(bool)scrollsToTop;
-(void)setScrollsToTop:(bool)arg1 ;
-(void)_setIgnoreLinkedOnChecks:(bool)arg1 ;
-(bool)_ignoreLinkedOnChecks;
-(double)_pagingFriction;
-(void)_setPagingFriction:(double)arg1 ;
-(double)_defaultPagingFriction;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)maximumZoomScale;
-(void)_zoomToCenter:(CGPoint)arg1 scale:(double)arg2 duration:(double)arg3 ;
-(bool)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2 ;
-(void)setZoomScale:(double)arg1 ;
-(void)zoomToRect:(CGRect)arg1 animated:(bool)arg2 ;
-(bool)isZoomBouncing;
-(bool)_isAnimatingZoom;
-(CGPoint)_pageDecelerationTarget;
-(void)_staticScrollBarScrollAnimationEnded;
-(id)panGestureRecognizer;
-(id)pinchGestureRecognizer;
-(id)scrollTestParameters;
-(void)setKeyboardDismissMode:(long long)arg1 ;
-(bool)_useContentDimensionVariablesForConstraintLowering;
-(void)_setUseContentDimensionVariablesForConstraintLowering:(bool)arg1 ;
@end

