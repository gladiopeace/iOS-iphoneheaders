/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>
#import <Stocks/GraphRenderOperationDelegate.h>

@protocol StockGraphViewContainer;
@class UIView, StockChartData, NSMutableArray, NSArray, GraphRenderOperation, LineGraphView, VolumeGraphView;

@interface StockGraphView : UIView <GraphRenderOperationDelegate> {

	UIView<StockGraphViewContainer>* _chartViewDelegate;
	StockChartData* _chartData;
	int _valueIndex;
	int _valueCount;
	CGPoint* _points;
	CGPoint* _values;
	NSMutableArray* _linePointCounts;
	NSArray* _dottedLinePositions;
	unsigned _dataSize;
	unsigned _dataCount;
	SCD_Struct_St5* _volumeBars;
	unsigned _volumeSize;
	unsigned _volumeCount;
	double _volumeBarWidth;
	unsigned long long _maxVolume;
	double _lineWidth;
	GraphRenderOperation* _renderOperation;
	bool _isRendered;
	bool _detailedMode;
	LineGraphView* _lineView;
	VolumeGraphView* _volumeView;
	UIEdgeInsets _graphInsets;

}

@property (setter=setDottedLinePositionsWithLabelInfo:,nonatomic,retain) NSArray * dottedLinePositions;              //@synthesize dottedLinePositions=_dottedLinePositions - In the implementation block
@property (assign,nonatomic,__weak) UIView<StockGraphViewContainer> * chartViewDelegate;                             //@synthesize chartViewDelegate=_chartViewDelegate - In the implementation block
@property (nonatomic,readonly) bool isRendered;                                                                      //@synthesize isRendered=_isRendered - In the implementation block
@property (nonatomic,readonly) bool isRendering; 
@property (assign,nonatomic) bool detailedMode;                                                                      //@synthesize detailedMode=_detailedMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets graphInsets;                                                               //@synthesize graphInsets=_graphInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void).cxx_destruct;
-(CGRect)_lineViewFrameForBoundsSize:(CGSize)arg1 ;
-(CGRect)_volumeViewFrameForBoundsSize:(CGSize)arg1 ;
-(void)setShowingSelectedLine:(bool)arg1 ;
-(void)clearPaths;
-(void)_finishCurrentLine;
-(float)_priceAtTime:(double)arg1 dataPosition:(double*)arg2 ;
-(double)_timeAtPosition:(double)arg1 ;
-(unsigned long long)_normalizedAccumulatedVolumeInDataRange:(CGPoint)arg1 ;
-(id)chartViewDelegate;
-(void)cancelRenderOperation;
-(void)_processGraphDataForWidth:(double)arg1 ;
-(void)readyForDisplayFromChartData;
-(void)setDetailedMode:(bool)arg1 ;
-(void)setGraphInsets:(UIEdgeInsets)arg1 ;
-(void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)clearData;
-(CGRect)_trueGraphPointsRegion;
-(void)graphRenderOperationDidFinish:(id)arg1 ;
-(void)setShowingSelectedVolumeRegion:(bool)arg1 ;
-(void)setDottedLinePositionsWithLabelInfo:(id)arg1 ;
-(bool)isRendering;
-(void)recomputePathsAndRenderIfNeededForSize:(CGSize)arg1 ;
-(void)loadStockChartData:(id)arg1 ;
-(CGPoint)rightmostPlottedPoint;
-(SCD_Struct_St0)plottedPointNearestToPoint:(CGPoint*)arg1 ;
-(CGRect)volumeBarRectNearestToPoint:(CGPoint)arg1 ;
-(id)dottedLinePositions;
-(void)setChartViewDelegate:(id)arg1 ;
-(bool)isRendered;
-(bool)detailedMode;
-(UIEdgeInsets)graphInsets;
-(void)_layoutSubviews;
@end

