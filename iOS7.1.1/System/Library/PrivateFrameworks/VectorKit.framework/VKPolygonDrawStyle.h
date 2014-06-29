/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKDrawStyle.h>

@class NSMutableArray, NSString;

@interface VKPolygonDrawStyle : VKDrawStyle {

	VKProfileSparseRamp<bool>* visibility;
	VKProfileSparseRamp<_VGLColor>* fillColor;
	VKProfileSparseRamp<float>* strokeWidth;
	VKProfileSparseRamp<_VGLColor>* strokeColor;
	VKProfileSparseRamp<float>* outerStrokeWidth;
	VKProfileSparseRamp<_VGLColor>* outerStrokeColor;
	VGLColor _casingColor;
	VKProfileSparseRamp<int>* zIndices;
	int polygonType;
	NSMutableArray* textures;
	VKProfileSparseRamp<float>* textureOpacity;
	int textureBlendMode;
	NSMutableArray* secondTextures;
	VKProfileSparseRamp<float>* secondTextureOpacity;
	int secondTextureBlendMode;
	NSMutableArray* thirdTextures;
	VKProfileSparseRamp<float>* thirdTextureOpacity;
	int thirdTextureBlendMode;
	VKProfileSparseRamp<bool>* casingsVisible;
	VKProfileSparseRamp<bool>* fancyCasingsVisible;
	NSString* descriptionKey;
	unsigned hasFillColor : 1;
	unsigned hasFillTexture : 1;
	unsigned hasStrokeColor : 1;
	NSString* _name;
	double _variation;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double variation;                    //@synthesize variation=_variation - In the implementation block
@property (nonatomic,readonly) VGLColor casingColor; 
-(id)variant;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithStyle:(id)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)textureVariantAtZoom:(float)arg1 ;
-(id)textureAtZoom:(float)arg1 ;
-(void)setVariation:(double)arg1 ;
-(bool)hasFillColor;
-(bool)hasFillTexture;
-(int)polygonType;
-(bool)isNotDrawn;
-(bool)visibleAtZoom:(float)arg1 ;
-(VGLColor)fillColorAtZoom:(float)arg1 ;
-(unsigned long long)zIndexAtZoom:(float)arg1 ;
-(float)strokeWidthAtZoom:(float)arg1 ;
-(VGLColor)strokeColorAtZoom:(float)arg1 ;
-(double)variation;
-(bool)casingsVisibleAtZoom:(float)arg1 ;
-(id)preferredTextureNameAtZoom:(float)arg1 ;
-(VGLColor)casingColor;
-(id)descriptionAtZoom:(float)arg1 ;
-(VGLColor)nonAnimatedFillColorAtZoom:(float)arg1 ;
-(int)textureBlendMode;
-(float)textureOpacityAtZoom:(float)arg1 ;
-(id)secondTextureAtZoom:(float)arg1 ;
-(int)secondTextureBlendMode;
-(float)secondTextureOpacityAtZoom:(float)arg1 ;
-(id)thirdTextureAtZoom:(float)arg1 ;
-(int)thirdTextureBlendMode;
-(float)thirdTextureOpacityAtZoom:(float)arg1 ;
-(void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned long long)arg2 globals:(id)arg3 ;
-(void)takeFromZoomInvariantProperties:(id)arg1 ;
-(float)outerStrokeWidthAtZoom:(float)arg1 ;
-(VGLColor)outerStrokeColorAtZoom:(float)arg1 ;
-(bool)fancyCasingsVisibleAtZoom:(float)arg1 ;
@end

