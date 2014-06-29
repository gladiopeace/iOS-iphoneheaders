/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface PLCropOverlayLayer : UIView {

	CGRect _cropRect;
	UIView* _topOpaqueLayer;
	UIView* _bottomOpaqueLayer;
	UIView* _rightOpaqueLayer;
	UIView* _leftOpaqueLayer;
	UIView* _topEdgeLayer;
	UIView* _bottomEdgeLayer;
	UIView* _rightEdgeLayer;
	UIView* _leftEdgeLayer;
	UIView* _topLeftCornerLayer;
	UIView* _topRightCornerLayer;
	UIView* _bottomRightCornerLayer;
	UIView* _bottomLeftCornerLayer;
	UIView* _topThirdLayer;
	UIView* _bottomThirdLayer;
	UIView* _rightThirdLayer;
	UIView* _leftThirdLayer;
	UIView* _straightenHorizontalLayers[6];
	UIView* _straightenVerticalLayers[6];
	unsigned _showsCropRect : 1;
	unsigned _showThirdsGrid : 1;
	unsigned _showsStraightenGrid : 1;
	unsigned _thirdsVisible : 1;
	unsigned _highlighted : 1;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(void)setCropRect:(CGRect)arg1 ;
-(CGRect)cropRect;
-(void)_updateCropRectVisibility;
-(void)setShowsCropRect:(bool)arg1 ;
-(bool)showsCropRect;
-(void)showThirdsGrid:(bool)arg1 ;
-(bool)showsThirdsGrid;
-(void)showStraightenGrid:(bool)arg1 ;
-(bool)showsStraightenGrid;
-(void)_updateLayout;
@end

