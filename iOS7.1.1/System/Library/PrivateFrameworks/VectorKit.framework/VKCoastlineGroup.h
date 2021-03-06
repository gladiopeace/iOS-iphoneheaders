/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKStyle, VGLMeshVendor;

@interface VKCoastlineGroup : NSObject {

	VKStyle* _style;
	bool _visible;
	SCD_Struct_VG164 _offsetDirection;
	VGLColor _shadowColor;
	VGLColor _antialiasingBrushColor;
	float _shadowWidth;
	float _antialiasingBrushWidth;
	unsigned _tilePointSize;
	VGLMeshVendor* _coastlineVendor;

}

@property (nonatomic,readonly) VKStyle * style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) bool visible;                                   //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) SCD_Struct_VG164 offsetDirection;               //@synthesize offsetDirection=_offsetDirection - In the implementation block
@property (assign,nonatomic) VGLColor shadowColor;                           //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) VGLColor antialiasingBrushColor;                //@synthesize antialiasingBrushColor=_antialiasingBrushColor - In the implementation block
@property (assign,nonatomic) float shadowWidth;                              //@synthesize shadowWidth=_shadowWidth - In the implementation block
@property (assign,nonatomic) float antialiasingBrushWidth;                   //@synthesize antialiasingBrushWidth=_antialiasingBrushWidth - In the implementation block
@property (nonatomic,readonly) VGLMeshVendor * coastlineVendor;              //@synthesize coastlineVendor=_coastlineVendor - In the implementation block
-(void)dealloc;
-(id)style;
-(void)setShadowColor:(VGLColor)arg1 ;
-(VGLColor)shadowColor;
-(void)setVisible:(bool)arg1 ;
-(bool)visible;
-(id).cxx_construct;
-(unsigned long long)triangleCount;
-(id)initWithStyle:(id)arg1 tilePointSize:(unsigned)arg2 ;
-(id)coastlineVendor;
-(void)setShadowWidth:(float)arg1 ;
-(void)setAntialiasingBrushColor:(VGLColor)arg1 ;
-(void)setAntialiasingBrushWidth:(float)arg1 ;
-(void)setOffsetDirection:(SCD_Struct_VG164)arg1 ;
-(SCD_Struct_VG164)offsetDirection;
-(float)shadowWidth;
-(VGLColor)antialiasingBrushColor;
-(float)antialiasingBrushWidth;
@end

