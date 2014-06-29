/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VGLRenderState : NSObject {

	bool _enableDepthTest;
	int _depthMode;
	bool _depthMask;
	bool _enableCullFace;
	int _blendMode;
	bool _stencilTest;
	bool _enablePolygonFillOffset;
	SCD_Struct_VG103 _polygonOffset;
	bool _scissorTest;

}

@property (assign,nonatomic) bool enableDepthTest;                        //@synthesize enableDepthTest=_enableDepthTest - In the implementation block
@property (assign,nonatomic) int depthMode;                               //@synthesize depthMode=_depthMode - In the implementation block
@property (assign,nonatomic) bool depthMask;                              //@synthesize depthMask=_depthMask - In the implementation block
@property (assign,nonatomic) bool enableCullFace;                         //@synthesize enableCullFace=_enableCullFace - In the implementation block
@property (assign,nonatomic) int blendMode;                               //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) bool stencilTest;                            //@synthesize stencilTest=_stencilTest - In the implementation block
@property (assign,nonatomic) bool enablePolygonFillOffset;                //@synthesize enablePolygonFillOffset=_enablePolygonFillOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_VG103 polygonOffset;              //@synthesize polygonOffset=_polygonOffset - In the implementation block
@property (assign,nonatomic) bool scissorTest;                            //@synthesize scissorTest=_scissorTest - In the implementation block
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(id).cxx_construct;
-(void)reset;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setStencilTest:(bool)arg1 ;
-(void)setEnableCullFace:(bool)arg1 ;
-(void)setEnableDepthTest:(bool)arg1 ;
-(void)setDepthMask:(bool)arg1 ;
-(bool)stencilTest;
-(void)loadStateFromContext:(id)arg1 ;
-(int)depthMode;
-(bool)depthMask;
-(bool)enablePolygonFillOffset;
-(SCD_Struct_VG103)polygonOffset;
-(bool)scissorTest;
-(void)setDepthMode:(int)arg1 ;
-(void)setEnablePolygonFillOffset:(bool)arg1 ;
-(void)setPolygonOffset:(SCD_Struct_VG103)arg1 ;
-(void)setScissorTest:(bool)arg1 ;
-(void)pushStateIntoContext:(id)arg1 ;
-(bool)enableDepthTest;
-(bool)enableCullFace;
@end

