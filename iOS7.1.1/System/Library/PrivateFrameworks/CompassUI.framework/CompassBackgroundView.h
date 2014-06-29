/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompassUI/CompassUI-Structs.h>
#import <CompassUI/CompassRotatingView.h>
#import <GLKit/GLKViewDelegate.h>

@class GLKView, EAGLContext, CompassShader, CompassAtlas;

@interface CompassBackgroundView : CompassRotatingView <GLKViewDelegate> {

	CGPoint _compassCenter;
	double _ticLength;
	bool _shownInCompass;
	GLKView* _glView;
	EAGLContext* _context;
	CompassShader* _normalShader;
	CompassShader* _knockoutShader;
	CompassShader* _textureShader;
	CompassShader* _lineShader;
	GLKMatrix4 _modelViewMatrix;
	GLKMatrix4 _projectionMatrix;
	unsigned _ticVertexArray;
	unsigned _ticVertexBuffer;
	unsigned _ticIndexBuffer;
	SCD_Struct_Co17* _ticPoints;
	unsigned* _ticIndexes;
	unsigned _labelsVertexArray;
	unsigned _labelsVertexBuffer;
	unsigned _labelsIndexBuffer;
	SCD_Struct_Co18* _labelsPoints;
	unsigned* _labelsIndexes;
	unsigned _otherLinesVertexArray;
	unsigned _otherLinesVertexBuffer;
	unsigned _otherLinesIndexBuffer;
	CompassAtlas* _imageAtlas;
	CGPoint _currentOffset;
	double _ticRadius;
	double _bearing;

}

@property (assign,nonatomic) double ticRadius;                //@synthesize ticRadius=_ticRadius - In the implementation block
@property (nonatomic,readonly) double ticLength;              //@synthesize ticLength=_ticLength - In the implementation block
@property (assign,nonatomic) double bearing;                  //@synthesize bearing=_bearing - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 forCompass:(bool)arg2 ;
-(void)setTicRadius:(double)arg1 ;
-(double)ticLength;
-(void)setupGL;
-(void)generateCompassPoints;
-(void)generateNumberAtlas;
-(void)tearDownGL;
-(void)renderCrosshairInRect:(CGRect)arg1 ;
-(void)positionLabelNamed:(id)arg1 atDegrees:(long long)arg2 fromCenter:(CGPoint)arg3 withRadius:(double)arg4 vertexOffset:(unsigned long long)arg5 color:(SCD_Struct_Co16)arg6 ;
-(void)generateExtraLines;
-(void)positionLabels;
-(void)updateDisplay;
-(void)setCompassHeading:(double)arg1 ;
-(void)setBearing:(double)arg1 ;
-(bool)setCrosshairOffset:(CGSize)arg1 ;
-(double)ticRadius;
-(double)bearing;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
@end

