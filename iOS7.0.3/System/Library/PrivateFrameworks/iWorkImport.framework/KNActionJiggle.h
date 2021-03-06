/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNActionEffectBuildAnimator.h>

@class KNAnimParameterGroup;

@interface KNActionJiggle : KNAnimationEffect <KNActionEffectBuildAnimator> {

	KNAnimParameterGroup* _parameterGroup;
	float singleRotationAnimDuration;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)actionEffectStyle;
+(id)applyActionEffect:(id)arg1 toAttributes:(id)arg2 ;
+(id)customAttributes;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5 ;
-(float)p_jiggleCountFromEffectAttributes:(id)arg1 ;
-(void)p_addAnimationsToLayer:(id)arg1 angleLarge:(float)arg2 angleSmall:(float)arg3 xOffsetLarge:(float)arg4 xOffsetSmall:(float)arg5 duration:(double)arg6 jiggleCount:(float)arg7 result:(id)arg8 ;
-(void)dealloc;
@end

