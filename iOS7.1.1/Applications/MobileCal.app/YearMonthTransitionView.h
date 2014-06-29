/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CrossFadeView, UIViewController, PhoneMonthViewController, YearMonthTransitionMonthView;

@interface YearMonthTransitionView : UIView {

	UIView* _backgroundView;
	UIView* _monthTransitionViewInYearState;
	UIView* _monthTransitionViewInMonthState;
	UIView* _monthTopSlidingPiece;
	UIView* _monthBottomSlidingPiece;
	CrossFadeView* _monthLabel;
	UIViewController* _yearViewController;
	PhoneMonthViewController* _monthViewController;
	CGRect _monthInYearViewFrame;
	CGRect _monthInMonthViewFrame;
	YearMonthTransitionMonthView* _monthViewInMonthView;
	UIView* _monthViewInYearView;
	CGRect _topSlidingStartFrame;
	CGRect _bottomSlidingStartFrame;
	float _monthHeaderHeight;
	BOOL _yearToMonth;
	CGRect _yearViewOriginalFrame;
	UIView* _yearInMonthCoveringView;
	UIView* _monthListView;
	float _backgroundViewMonthAlpha;

}
+(float)_monthHeaderHeight;
-(void)_haltAnimations;
-(void)prepareWithYearViewController:(id)arg1 monthViewController:(id)arg2 selectedDate:(id)arg3 calendar:(id)arg4 yearToMonth:(BOOL)arg5 ;
-(void)animateToYearViewWithCompletion:(/*^block*/ id)arg1 ;
-(void)animateToMonthViewWithCompletion:(/*^block*/ id)arg1 ;
-(void)_animateView:(id)arg1 toPosition:(CGPoint)arg2 ;
-(void)_basicAnimateView:(id)arg1 toAlpha:(float)arg2 duration:(double)arg3 ;
-(void)_setToMonthState;
-(void)_animateView:(id)arg1 toAlpha:(float)arg2 ;
-(id)_getMonthViewMonthContainingDate:(id)arg1 ;
-(id)_createLabelWithFontSize:(float)arg1 ;
-(id)_captureImageOfMonthInYearView;
-(void)_captureImagesForSlidingPiecesFromMonthViewController:(id)arg1 selectedDate:(id)arg2 calendar:(id)arg3 ;
-(id)_setUpMonthViewInMonthViewFrame;
-(void)_setToYearState;
-(void)_animateZoomToMonthState;
-(void)_animationComplete;
-(void)_animateZoomToYearState;
-(CGRect)_calculateYearFrameForYearViewZoom;
-(CGRect)_calculateMonthFrameForYearViewZoom;
-(CGRect)_monthFrameForMonthBefore:(id)arg1 anchorMonth:(id)arg2 ;
-(CGRect)_monthFrameForMonthAfter:(id)arg1 anchorMonth:(id)arg2 ;
-(id)_getWeekContainingDate:(id)arg1 prevDate:(id)arg2 ;
-(void)_animateView:(id)arg1 toFrame:(CGRect)arg2 ;
-(void)_animateView:(id)arg1 toBounds:(CGRect)arg2 ;
-(BOOL)_canFastSnapshotYear;
-(BOOL)_canFastSnapshotMonth;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)animationDuration;
-(void).cxx_destruct;
@end

