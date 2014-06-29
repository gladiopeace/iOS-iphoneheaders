/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationOpenGLEffect.h>

@class KNShimmerObjectSystem, TSDGLShader, KNShimmerParticleSystem, TSDGLTextureInfo, TSDTexturedRectangle, KNAnimationContext, TSDGLDataBuffer;

@interface KNShimmerEffect : NSObject <KNAnimationOpenGLEffect> {

	KNShimmerObjectSystem* mObjectSystem;
	TSDGLShader* mObjectSystemShader;
	KNShimmerParticleSystem* mParticleSystem;
	TSDGLShader* mParticleSystemShader;
	TSDGLTextureInfo* mShimmerTexture;
	TSDTexturedRectangle* mTexture;
	CGRect mDestinationRect;
	double mDuration;
	unsigned long long mDirection;
	int mBuildType;
	KNAnimationContext* mAnimationContext;
	CATransform3D mTranslate;
	bool mIsSetup;
	CATransform3D mBaseTransform;
	TSDGLShader* mObjectShader;
	TSDGLDataBuffer* mObjectDataBuffer;

}
-(id)initWithAnimationContext:(id)arg1 texture:(id)arg2 destinationRect:(CGRect)arg3 translate:(CATransform3D)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 buildType:(int)arg7 ;
-(void)renderEffectAtPercent:(double)arg1 ;
-(void)teardownEffectWithTextures:(id)arg1 ;
-(id)objectSystemForTR:(id)arg1 slideRect:(CGRect)arg2 duration:(double)arg3 ;
-(id)particleSystemForTR:(id)arg1 slideRect:(CGRect)arg2 duration:(double)arg3 ;
-(unsigned long long)p_numberOfParticlesForTR:(id)arg1 slideRect:(CGRect)arg2 duration:(double)arg3 ;
-(void)setupEffectIfNecessary;
@end

