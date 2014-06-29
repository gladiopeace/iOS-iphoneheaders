/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIWindow, UIView, CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFMagnifierController : NSObject {

	UIWindow* _textEffectsWindow;
	UIView* _textEffectsSubView;
	CALayer* _loLayer;
	CALayer* _hiLayer;
	CALayer* _imageContainer;
	CALayer* _imageLayer;
	CAShapeLayer* _selectionLayer;
	CALayer* _maskLayer;
	double _power;
	CGSize _magnifierSize;
	bool _loupe;
	CGPoint _touchPoint;
	CGPoint _pointToMagnify;
	double _enlargementScale;
	CALayer* _leftBar;
	CALayer* _leftGrabber;
	CALayer* _rightBar;
	CALayer* _rightGrabber;
	CGSize _controlPointSize;
	CGColorRef _grabberColor;
	unsigned long long _pageRotation;
	UIPDFPageView* pageView;

}

@property (assign,nonatomic) UIPDFPageView * pageView; 
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setTextRangeHandlePositions;
-(void)addTextRangeHandles;
-(void)tearDownLayers;
-(void)placeImage;
-(void)setImageContainerMask;
-(void)setImageContainerPositionLoupe;
-(void)setImageContainerPositionMagnifier;
-(void)setSelectionPath;
-(void)setLayerPositions;
-(CGRect)convertRectToRotatedPage:(CGRect)arg1 ;
-(CGPoint)convertPointToRotatedPage:(CGPoint)arg1 ;
-(CGPoint)viewPointInTextEffectsSpace;
-(CGPoint)pointToMagnifyInPDFSpace;
-(CGPoint)convertPointToEnlargedSpace:(CGPoint)arg1 ;
-(CGRect)convertRectToEnlargedSpace:(CGRect)arg1 ;
-(void)setSelectionPath:(CGPathRef)arg1 bounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 ;
-(void)setPower;
-(id)imageReceived:(id)arg1 data:(id)arg2 ;
-(void)addBling;
-(bool)isSelectionUniformlyRotated:(double*)arg1 ;
-(CGPoint)convertViewPointToEnlargedSpace:(CGPoint)arg1 ;
-(void)dealloc;
-(id)init;
-(void)hide;
-(id)pageView;
-(void)setPageView:(id)arg1 ;
-(void)setPosition:(CGPoint)arg1 viewPoint:(CGPoint)arg2 ;
-(void)showMagnifier;
-(void)move;
-(void)showLoupe;
-(void)_show;
@end

