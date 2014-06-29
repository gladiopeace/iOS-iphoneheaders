/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class StocksListView, StockDetailView, StocksStatusView, UIView;

@interface StocksMainView : UIView {

	int _orientation;
	int _oldOrientation;
	int _pendingOrientation;
	BOOL _animatingPreRotation;
	BOOL _animatingRotation;
	BOOL _animatingFinalStage;
	BOOL _statusBarHidden;
	StocksListView* _listView;
	StockDetailView* _detailView;
	StocksStatusView* _statusView;
	UIView* _blurView;

}

@property (nonatomic,readonly) BOOL isRotating; 
@property (nonatomic,readonly) BOOL isAnimating; 
+(int)listRowCount;
-(void)prepareForApplicationScreenshot;
-(void)performPendingAnimationsIfNeeded;
-(CGRect)detailViewFrame;
-(void)attemptRotationToOrientation:(int)arg1 ;
-(CGRect)_statusViewFrame;
-(void)setStatusBarHiddenDuringRotation:(BOOL)arg1 ;
-(void)_preRotationAnimationDidFinish;
-(void)setStatusBarOrientationDuringRotation:(int)arg1 ;
-(void)_finalAnimationDidFinish;
-(void)_rotationDidFinish;
-(void)_animatePreRotationWithOrientation:(int)arg1 ;
-(void)_startRotation;
-(void)_animatePostRotation;
-(void)_rotateToPendingOrientationIfNeeded;
-(void)_rotateToOrientation:(int)arg1 ;
-(id)listView;
-(id)detailView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)orientation;
-(BOOL)isRotating;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)isAnimating;
-(void).cxx_destruct;
-(id)statusView;
-(void)_layoutSubviews;
@end

