/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SteppingSignsCarouselDelegate;
@class UIScrollView, NSArray, UIView;

@interface SteppingSignsCarousel : UIView <UIScrollViewDelegate> {

	<SteppingSignsCarouselDelegate>* _delegate;
	UIScrollView* _scrollView;
	float _minimumMarginBetweenSigns;
	float _maximumWidthOfPeekingSignsArea;
	float _signWidth;
	float _topMargin;
	NSArray* _signs;
	unsigned _selectedSignIndex;
	NSRange _selectableSignRange;
	NSRange _targetSelectableSignRange;
	NSRange _visibleSignRange;
	UIView* _signsContainerView;
	BOOL _isRotating;
	CGPoint _lastContentOffset;

}

@property (assign,nonatomic,__weak) <SteppingSignsCarouselDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) float maximumWidthOfPeekingSignsArea;                           //@synthesize maximumWidthOfPeekingSignsArea=_maximumWidthOfPeekingSignsArea - In the implementation block
@property (assign,nonatomic) float minimumMarginBetweenSigns;                                //@synthesize minimumMarginBetweenSigns=_minimumMarginBetweenSigns - In the implementation block
@property (assign,nonatomic) float signWidth;                                                //@synthesize signWidth=_signWidth - In the implementation block
@property (assign,nonatomic) float topMargin;                                                //@synthesize topMargin=_topMargin - In the implementation block
@property (nonatomic,copy) NSArray * signs;                                                  //@synthesize signs=_signs - In the implementation block
@property (assign,nonatomic) unsigned selectedSignIndex;                                     //@synthesize selectedSignIndex=_selectedSignIndex - In the implementation block
@property (assign,nonatomic) CGPoint lastContentOffset;                                      //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                                //@synthesize isRotating=_isRotating - In the implementation block
-(void)setShowsDimmedSigns:(BOOL)arg1 animation:(id)arg2 ;
-(void)updateDividerHeightForRect:(CGRect)arg1 ;
-(id)signs;
-(void)updateViewHierarchyForCarouselViewport;
-(void)setSignWidth:(float)arg1 ;
-(void)setMaximumWidthOfPeekingSignsArea:(float)arg1 ;
-(void)setMinimumMarginBetweenSigns:(float)arg1 ;
-(void)setSigns:(id)arg1 ;
-(float)maximumVisibleSignFrameY;
-(void)setSelectedSignIndex:(unsigned)arg1 scrollSignToVisible:(BOOL)arg2 animated:(BOOL)arg3 ;
-(unsigned)selectedSignIndex;
-(CGRect)updateBackgroundHeightForIndex:(unsigned)arg1 ;
-(float)signWidth;
-(float)_actualMargin;
-(void)_layoutSigns;
-(void)_recenterAnimated:(BOOL)arg1 ;
-(void)scrollToSignAtIndex:(unsigned)arg1 animated:(BOOL)arg2 ;
-(float)minimumMarginBetweenSigns;
-(float)maximumWidthOfPeekingSignsArea;
-(void)setSelectableSignRange:(NSRange)arg1 animated:(BOOL)arg2 ;
-(void)_setSelectableSignRange:(NSRange)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasSubSelectableRange;
-(void)_updateVisibleRangeAnimated:(BOOL)arg1 ;
-(void)_setVisibleSignRange:(NSRange)arg1 animated:(BOOL)arg2 ;
-(void)_updateScrollViewContentOffset;
-(void)updateBackgroundBlurAndSignTextHeight;
-(float)_calculatePercentAndFirstIndex:(unsigned*)arg1 andSecondIndex:(unsigned*)arg2 ;
-(void)_setSelectedSignIndex:(unsigned)arg1 scrollSignToVisible:(BOOL)arg2 animated:(BOOL)arg3 cause:(int)arg4 ;
-(void)_updateSelectedStepIndexFromGesture;
-(void)_setSelectableSignRangeAfterDelay;
-(float)_XOriginForSignAtIndex:(unsigned)arg1 ;
-(void)willAnimateRotate;
-(void)setSelectedSignIndex:(unsigned)arg1 selectableSignRange:(NSRange)arg2 scrollSignToVisible:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)setSelectedSignIndex:(unsigned)arg1 ;
-(CGPoint)lastContentOffset;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(void)setIsRotating:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)delegate;
-(BOOL)isRotating;
-(void)willRotate;
-(void)didRotate;
-(CGRect)visibleFrame;
-(id)scrollView;
-(void).cxx_destruct;
-(float)topMargin;
-(void)setTopMargin:(float)arg1 ;
@end

