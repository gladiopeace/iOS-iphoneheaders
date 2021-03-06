/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIKBHandwritingStrokeView, NSMutableArray, UIBezierPath, UIKBHandwritingStrokePointFIFO, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingQuadCurvePointFIFO, NSString;

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate> {

	UIKBHandwritingStrokeView* _strokeView;
	float _inkWidth;
	CGColorRef _inkColor;
	CGImageRef _inkMask;
	NSMutableArray* _interpolatedPaths;
	UIBezierPath* _currentPath;
	UIKBHandwritingStrokePointFIFO* _strokeFIFO;
	UIKBHandwritingBoxcarFilterPointFIFO* _smoothingFIFO;
	UIKBHandwritingQuadCurvePointFIFO* _interpolatingFIFO;

}

@property (assign,nonatomic) float inkWidth;                                                     //@synthesize inkWidth=_inkWidth - In the implementation block
@property (assign,nonatomic) CGColorRef inkColor;                                                //@synthesize inkColor=_inkColor - In the implementation block
@property (assign,nonatomic) CGImageRef inkMask;                                                 //@synthesize inkMask=_inkMask - In the implementation block
@property (nonatomic,retain) NSMutableArray * interpolatedPaths;                                 //@synthesize interpolatedPaths=_interpolatedPaths - In the implementation block
@property (nonatomic,retain) UIBezierPath * currentPath;                                         //@synthesize currentPath=_currentPath - In the implementation block
@property (nonatomic,retain) UIKBHandwritingStrokePointFIFO * strokeFIFO;                        //@synthesize strokeFIFO=_strokeFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingBoxcarFilterPointFIFO * smoothingFIFO;               //@synthesize smoothingFIFO=_smoothingFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingQuadCurvePointFIFO * interpolatingFIFO;              //@synthesize interpolatingFIFO=_interpolatingFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingStrokeView * strokeView;                             //@synthesize strokeView=_strokeView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setRenderConfig:(id)arg1 ;
-(char)cancelTouchTracking;
-(void)log;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(float)inkWidth;
-(void)send;
-(void)clearAndNotify:(char)arg1 ;
-(char)shouldCache;
-(void)deleteStrokesAtIndexes:(id)arg1 ;
-(CGColorRef)inkColor;
-(CGImageRef)inkMask;
-(NSMutableArray *)interpolatedPaths;
-(UIBezierPath *)currentPath;
-(void)setInkMask:(CGImageRef)arg1 ;
-(void)setInkWidth:(float)arg1 ;
-(void)updateInkColor;
-(void)setStrokeView:(UIKBHandwritingStrokeView *)arg1 ;
-(void)setInterpolatedPaths:(NSMutableArray *)arg1 ;
-(UIKBHandwritingStrokeView *)strokeView;
-(void)setInterpolatingFIFO:(UIKBHandwritingQuadCurvePointFIFO *)arg1 ;
-(UIKBHandwritingQuadCurvePointFIFO *)interpolatingFIFO;
-(void)setSmoothingFIFO:(UIKBHandwritingBoxcarFilterPointFIFO *)arg1 ;
-(UIKBHandwritingBoxcarFilterPointFIFO *)smoothingFIFO;
-(void)setStrokeFIFO:(UIKBHandwritingStrokePointFIFO *)arg1 ;
-(UIKBHandwritingStrokePointFIFO *)strokeFIFO;
-(void)setInkColor:(CGColorRef)arg1 ;
-(void)setCurrentPath:(UIBezierPath *)arg1 ;
-(void)addInkPoint:(CGPoint)arg1 ;
@end

