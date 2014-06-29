/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameBuildAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class KNAnimParameterGroup, TSDGLShader, NSMapTable, KNBuildVanishParticleSystem, TSDGLTextureInfo;

@interface KNBuildVanish : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {

	KNAnimParameterGroup* _parameterGroup;
	TSDGLShader* _shader;
	NSMapTable* _blurTextures;
	NSMapTable* _dataBuffers;
	KNBuildVanishParticleSystem* _vanishParticleSystem;
	TSDGLShader* _vanishParticleShader;
	TSDGLTextureInfo* _particleTextureInfo;
	CATransform3D _projectionMatrix;
	CATransform3D _baseMatrix;
	CGRect _drawableFrame;
	CGRect _animationRect;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(bool)requiresSingleTexturePerStage;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)p_setupMVPMatricesWithContext:(id)arg1 ;
-(void)p_setupBlurTexturesWithContext:(id)arg1 ;
-(void)p_setupShadersWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)p_setupParticleTexture;
-(void)p_setupParticleSystemWithImage:(id)arg1 build:(id)arg2 ;
-(void)p_drawParticleSystemsWithPercent:(double)arg1 sparkles:(bool)arg2 particleSystemOpacity:(double)arg3 ;
-(void)dealloc;
-(void)teardown;
@end

