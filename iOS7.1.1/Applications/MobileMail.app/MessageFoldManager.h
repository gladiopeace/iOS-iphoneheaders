/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MessageFoldViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MessageFoldSource, MessageFoldDelegate;
@class UIScrollView, UIView, MessageFoldView, MessageFoldTopFillView, UIPinchGestureRecognizer;

@interface MessageFoldManager : NSObject <MessageFoldViewDelegate, UIGestureRecognizerDelegate> {

	<MessageFoldSource>* _source;
	<MessageFoldDelegate>* _delegate;
	UIScrollView* _scrollView;
	UIView* _foldedView;
	UIView* _headerView;
	MessageFoldView* _foldView;
	MessageFoldTopFillView* _topFillView;
	UIView* _bottomFillView;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	MessageFoldPinch _lastPinch;
	BOOL _isReleasingPinch;
	float _pinchStartContentOffsetY;
	float _pinchTargetContentOffsetY;
	float _pinchStartFoldHeight;
	float _pinchEndFoldHeight;
	CGRect _headerFrame;
	float _bottomOfFold;
	float _foldHeight;
	float _unfoldingInitialContentOffsetY;
	float _unfoldingDistance;
	float _maxUnfoldingDistance;
	CGRect _coveredRect;
	int _foldState;
	int _lastAction;
	BOOL _isReleasingFlick;
	float _flickStartContentOffsetY;
	float _flickUnfoldingStartProgress;
	float _flickUnfoldingDistance;
	float _lastApparentHeaderPositionY;
	BOOL _messageIsFolded;
	BOOL _isAnimatingRotation;
	BOOL _isRotatingWithHeaderAtTop;
	BOOL _isFoldUnfolding;
	BOOL _isHeaderMovingUp;
	BOOL _isDragging;
	BOOL _isZooming;
	BOOL _isHeaderHeightChanging;
	BOOL _isFoldExtendingToTop;

}

@property (assign,nonatomic) <MessageFoldSource> * source;                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) <MessageFoldDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)removeMessageFold;
-(void)textSizeDidChange;
-(void)forceFoldUpdate;
-(void)foldMessageIfNeccessary;
-(CGRect)adjustHeaderFrame:(CGRect)arg1 ;
-(void)headerHeightWillChange:(float)arg1 ;
-(BOOL)messageIsFolded;
-(void)headerHeightDidChange;
-(CGPoint)adjustContentOffset:(CGPoint)arg1 ;
-(void)willBeginDragging;
-(BOOL)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)didEndDraggingWillDecelerate:(BOOL)arg1 ;
-(void)didEndDecelerating;
-(void)willBeginZooming;
-(void)didEndZooming;
-(void)willFinishAnimatingRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_updateBottomOfFold;
-(void)_updateMaxUnfoldingDistance;
-(void)_foldTap:(id)arg1 ;
-(void)_foldPinch:(id)arg1 ;
-(float)_headerViewOriginY;
-(void)_prepareForAction:(int)arg1 ;
-(void)_updateFoldHeight;
-(float)_apparentHeaderPositionY;
-(void)_updateMessageFold;
-(void)_layoutFoldViews;
-(void)_updateEverything;
-(float)_unfoldingInitialContentOffsetY;
-(void)_rotationDidFinish;
-(void)_updateCoveredRect;
-(float)_roundY:(float)arg1 ;
-(MessageFoldPinch)messageFoldPinchForGestureRecognizer:(id)arg1 ;
-(void)_setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)messageFoldView:(id)arg1 didUpdateFoldWithProgress:(float)arg2 fadeInAlpha:(float)arg3 ;
-(void)didRotateToInterfaceOrientation:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didZoom;
-(id)source;
-(void)setSource:(id)arg1 ;
-(void)didScroll;
@end

