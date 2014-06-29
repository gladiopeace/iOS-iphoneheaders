/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameBuildAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class KNAnimParameterGroup, NSArray, TSDGLShader, TSDGLDataBuffer, TSDGLTextureInfo, TSDGLFrameBuffer, TSDGLBloomEffect;

@interface KNBuildFireworks : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {

	KNAnimParameterGroup* _parameterGroup;
	CGRect _drawableFrame;
	CGRect _frameRect;
	CATransform3D _baseOrthoTransform;
	CATransform3D _baseTransform;
	int _oldViewportRect[4];
	NSArray* _fireworksSystems;
	TSDGLShader* _fireworksShader;
	TSDGLShader* _objectShader;
	TSDGLDataBuffer* _objectDataBuffer;
	TSDGLShader* _centerBurstShader;
	TSDGLDataBuffer* _centerBurstDataBuffer;
	TSDGLTextureInfo* _centerBurstTextureInfo;
	TSDGLTextureInfo* _particleTextureInfo;
	TSDGLFrameBuffer* _framebuffer;
	TSDGLShader* _fboShader;
	TSDGLDataBuffer* _fboDataBuffer;
	TSDGLBloomEffect* _bloomEffect;
	double _previousPercent;
	bool _shouldApplyBloomEffect;

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
-(void)renderFrameWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)p_setupParticleTexture;
-(void)p_setupFBOWithSize:(CGSize)arg1 ;
-(void)animationDidEndForTextures:(id)arg1 forBuild:(id)arg2 ;
-(id)p_fireworksSystemsForTR:(id)arg1 build:(id)arg2 context:(id)arg3 ;
-(void)p_drawObject:(id)arg1 withContext:(id)arg2 ;
-(void)p_drawParticleSystemsWithPercent:(double)arg1 sparkles:(bool)arg2 particleSystemOpacity:(double)arg3 context:(id)arg4 ;
-(void)dealloc;
@end

