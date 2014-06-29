/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNActionEffectBuildAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>
#import <iWorkImport/KNAnimationPluginObsoleteNames.h>

@interface KNActionMotionPath : KNAnimationEffect <KNActionEffectBuildAnimator, KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames>
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)obsoleteAnimationNames;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(id)actionEffectStyle;
+(id)applyActionEffect:(id)arg1 toAttributes:(id)arg2 ;
+(bool)requiresHighQualityTextures;
+(id)defaultAttributes;
+(id)animationName;
-(id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5 ;
-(id)p_flattenedPathBasedOnLengthFromPath:(id)arg1 ;
-(void)p_addAnimationForLayer:(id)arg1 duration:(double)arg2 motionPath:(id)arg3 acceleration:(id)arg4 toAnimationDictionary:(id)arg5 ;
@end

