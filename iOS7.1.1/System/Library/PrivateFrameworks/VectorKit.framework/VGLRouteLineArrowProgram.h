/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLProgram.h>

@interface VGLRouteLineArrowProgram : VGLProgram {

	int _uTextureSampler;
	int _textureSampler;
	int _uHalfWidth;
	float _halfWidth;
	int _uStrokeColor;
	VGLColor _strokeColor;
	int _uFillColor;
	VGLColor _fillColor;
	int _uHighlightedStrokeColor;
	VGLColor _highlightedStrokeColor;
	int _uHighlightedFillColor;
	VGLColor _highlightedFillColor;
	int _uCurrentManeuverLocation;
	float _currentManeuverLocation;
	int _uAlphaScale;
	float _alphaScale;

}

@property (assign,nonatomic) int textureSampler;                           //@synthesize textureSampler=_textureSampler - In the implementation block
@property (assign,nonatomic) float halfWidth;                              //@synthesize halfWidth=_halfWidth - In the implementation block
@property (assign,nonatomic) VGLColor strokeColor;                         //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) VGLColor fillColor;                           //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) VGLColor highlightedStrokeColor;              //@synthesize highlightedStrokeColor=_highlightedStrokeColor - In the implementation block
@property (assign,nonatomic) VGLColor highlightedFillColor;                //@synthesize highlightedFillColor=_highlightedFillColor - In the implementation block
@property (assign,nonatomic) float currentManeuverLocation;                //@synthesize currentManeuverLocation=_currentManeuverLocation - In the implementation block
@property (assign,nonatomic) float alphaScale;                             //@synthesize alphaScale=_alphaScale - In the implementation block
+(id)vertName;
+(id)fragName;
-(void)setFillColor:(VGLColor)arg1 ;
-(void)setStrokeColor:(VGLColor)arg1 ;
-(VGLColor)fillColor;
-(VGLColor)strokeColor;
-(id).cxx_construct;
-(void)setup;
-(void)setTextureSampler:(int)arg1 ;
-(void)setHalfWidth:(float)arg1 ;
-(void)setHighlightedStrokeColor:(VGLColor)arg1 ;
-(void)setHighlightedFillColor:(VGLColor)arg1 ;
-(void)setCurrentManeuverLocation:(float)arg1 ;
-(void)setAlphaScale:(float)arg1 ;
-(int)textureSampler;
-(float)halfWidth;
-(VGLColor)highlightedStrokeColor;
-(VGLColor)highlightedFillColor;
-(float)currentManeuverLocation;
-(float)alphaScale;
@end

