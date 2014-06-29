/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIShapeEffectPreset : NSObject {

	SCD_Struct_CU16 _parameterList[35];
	unsigned _effectIndex[8];
	double _scaleFactor;

}
+(id)requiredEffectParametersForEffectType:(unsigned)arg1 ;
-(id)initWithConstantPreset:(const SCD_Struct_CU18*)arg1 ;
-(id)CUIEffectDataRepresentation;
-(unsigned long long)_parameterCount;
-(id)init;
-(void)_insertEffectTuple:(SCD_Struct_CU17)arg1 atEffectIndex:(unsigned long long)arg2 ;
-(void)addValue:(/*function pointer*/ void*)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 atEffectIndex:(unsigned long long)arg4 ;
-(void)addValue:(/*function pointer*/ void*)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)appendValue:(/*function pointer*/ void*)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)addFloatValue:(double)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addColorValueRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 forParameter:(unsigned)arg4 withNewEffectType:(unsigned)arg5 ;
-(void)appendFloatValue:(double)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendEnumValue:(unsigned)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendColorValueRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 forParameter:(unsigned)arg4 withEffectType:(unsigned)arg5 ;
-(void)appendIntValue:(unsigned long long)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendAngleValue:(long long)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(id)initWithEffectScale:(double)arg1 ;
-(double)effectScale;
-(unsigned)effectTypeAtIndex:(unsigned long long)arg1 ;
-(/*function pointer*/ void*)valueForParameter:(unsigned)arg1 inEffectAtIndex:(unsigned long long)arg2 ;
-(void)getEffectTuples:(/*function pointer*/ void**)arg1 count:(unsigned long long*)arg2 atEffectIndex:(unsigned long long)arg3 ;
-(void)addIntValue:(unsigned long long)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addEnumValue:(unsigned)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addShapeOpacityWithOpacity:(double)arg1 ;
-(void)addColorFillWithRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blendMode:(unsigned)arg5 ;
-(void)addGradientFillWithTopColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 bottomColorRed:(unsigned)arg4 green:(unsigned)arg5 blue:(unsigned)arg6 opacity:(double)arg7 ;
-(void)addInnerGlowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 blendMode:(unsigned)arg6 ;
-(void)addInnerShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7 blendMode:(unsigned)arg8 ;
-(void)addOuterGlowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 ;
-(void)addDropShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8 ;
-(void)addExtraShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8 ;
-(void)addBevelEmbossWithHighlightColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 shadowColorRed:(unsigned)arg5 green:(unsigned)arg6 blue:(unsigned)arg7 opacity:(double)arg8 blur:(int)arg9 soften:(int)arg10 ;
-(unsigned long long)effectCount;
@end

