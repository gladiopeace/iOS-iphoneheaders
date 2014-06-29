/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary, CALayer, CAAnimation;

@interface TSDCAAnimationCache : NSObject {

	NSDictionary* _overrideInitialValuesDict;
	double _animationDuration;
	long long _cacheValuesCount;
	CGPoint* _anchorPointCache;
	double* _anchorPointZCache;
	double* _borderWidthCache;
	CGRect* _boundsCache;
	bool* _doubleSidedCache;
	bool* _hiddenCache;
	double* _opacityCache;
	CGPoint* _positionCache;
	CATransform3D* _transformCache;
	double* _transformRotationCache;
	double* _transformRotationXCache;
	double* _transformRotationYCache;
	double* _transformRotationZCache;
	double* _transformScaleXCache;
	double* _transformScaleYCache;
	double* _transformScaleXYCache;
	CGPoint* _transformTranslationCache;
	double* _transformTranslationXCache;
	double* _transformTranslationYCache;
	double* _transformTranslationZCache;
	double* _zPositionCache;
	bool _anchorPointAnimationExists;
	bool _anchorPointZAnimationExists;
	bool _borderColorAnimationExists;
	bool _borderWidthAnimationExists;
	bool _boundsAnimationExists;
	bool _contentsAnimationExists;
	bool _doubleSidedAnimationExists;
	bool _doubleSidedInitialValue;
	bool _hiddenAnimationExists;
	bool _hiddenInitialValue;
	bool _opacityAnimationExists;
	bool _positionAnimationExists;
	bool _transformAnimationExists;
	bool _transformRotationAnimationExists;
	bool _transformRotationXAnimationExists;
	bool _transformRotationYAnimationExists;
	bool _transformRotationZAnimationExists;
	bool _transformScaleXAnimationExists;
	bool _transformScaleYAnimationExists;
	bool _transformScaleXYAnimationExists;
	bool _transformTranslationAnimationExists;
	bool _transformTranslationXAnimationExists;
	bool _transformTranslationYAnimationExists;
	bool _transformTranslationZAnimationExists;
	bool _zPositionAnimationExists;
	CALayer* _layer;
	CAAnimation* _animation;
	double _anchorPointZInitialValue;
	CGColorRef _borderColorInitialValue;
	double _borderWidthInitialValue;
	CGImageRef _contentsInitialValue;
	double _opacityInitialValue;
	double _transformRotationInitialValue;
	double _transformRotationXInitialValue;
	double _transformRotationYInitialValue;
	double _transformRotationZInitialValue;
	double _transformScaleXInitialValue;
	double _transformScaleYInitialValue;
	double _transformScaleXYInitialValue;
	double _transformTranslationXInitialValue;
	double _transformTranslationYInitialValue;
	double _transformTranslationZInitialValue;
	double _zPositionInitialValue;
	NSDictionary* _initialValues;
	CGPoint _anchorPointInitialValue;
	CGPoint _positionInitialValue;
	CGPoint _transformTranslationInitialValue;
	CGRect _boundsInitialValue;
	CATransform3D _transformInitialValue;

}

@property (nonatomic,readonly) CALayer * layer;                                        //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CAAnimation * animation;                                //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) bool anchorPointAnimationExists;                        //@synthesize anchorPointAnimationExists=_anchorPointAnimationExists - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPointInitialValue;                        //@synthesize anchorPointInitialValue=_anchorPointInitialValue - In the implementation block
@property (nonatomic,readonly) bool anchorPointZAnimationExists;                       //@synthesize anchorPointZAnimationExists=_anchorPointZAnimationExists - In the implementation block
@property (nonatomic,readonly) double anchorPointZInitialValue;                        //@synthesize anchorPointZInitialValue=_anchorPointZInitialValue - In the implementation block
@property (nonatomic,readonly) bool borderColorAnimationExists;                        //@synthesize borderColorAnimationExists=_borderColorAnimationExists - In the implementation block
@property (nonatomic,readonly) CGColorRef borderColorInitialValue;                     //@synthesize borderColorInitialValue=_borderColorInitialValue - In the implementation block
@property (nonatomic,readonly) bool borderWidthAnimationExists;                        //@synthesize borderWidthAnimationExists=_borderWidthAnimationExists - In the implementation block
@property (nonatomic,readonly) double borderWidthInitialValue;                         //@synthesize borderWidthInitialValue=_borderWidthInitialValue - In the implementation block
@property (nonatomic,readonly) bool boundsAnimationExists;                             //@synthesize boundsAnimationExists=_boundsAnimationExists - In the implementation block
@property (nonatomic,readonly) CGRect boundsInitialValue;                              //@synthesize boundsInitialValue=_boundsInitialValue - In the implementation block
@property (nonatomic,readonly) bool contentsAnimationExists;                           //@synthesize contentsAnimationExists=_contentsAnimationExists - In the implementation block
@property (nonatomic,readonly) CGImageRef contentsInitialValue;                        //@synthesize contentsInitialValue=_contentsInitialValue - In the implementation block
@property (nonatomic,readonly) bool doubleSidedAnimationExists;                        //@synthesize doubleSidedAnimationExists=_doubleSidedAnimationExists - In the implementation block
@property (nonatomic,readonly) bool doubleSidedInitialValue;                           //@synthesize doubleSidedInitialValue=_doubleSidedInitialValue - In the implementation block
@property (nonatomic,readonly) bool hiddenAnimationExists;                             //@synthesize hiddenAnimationExists=_hiddenAnimationExists - In the implementation block
@property (nonatomic,readonly) bool hiddenInitialValue;                                //@synthesize hiddenInitialValue=_hiddenInitialValue - In the implementation block
@property (nonatomic,readonly) bool opacityAnimationExists;                            //@synthesize opacityAnimationExists=_opacityAnimationExists - In the implementation block
@property (nonatomic,readonly) double opacityInitialValue;                             //@synthesize opacityInitialValue=_opacityInitialValue - In the implementation block
@property (nonatomic,readonly) bool positionAnimationExists;                           //@synthesize positionAnimationExists=_positionAnimationExists - In the implementation block
@property (nonatomic,readonly) CGPoint positionInitialValue;                           //@synthesize positionInitialValue=_positionInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformAnimationExists;                          //@synthesize transformAnimationExists=_transformAnimationExists - In the implementation block
@property (nonatomic,readonly) CATransform3D transformInitialValue;                    //@synthesize transformInitialValue=_transformInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformRotationAnimationExists;                  //@synthesize transformRotationAnimationExists=_transformRotationAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformRotationInitialValue;                   //@synthesize transformRotationInitialValue=_transformRotationInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformRotationXAnimationExists;                 //@synthesize transformRotationXAnimationExists=_transformRotationXAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformRotationXInitialValue;                  //@synthesize transformRotationXInitialValue=_transformRotationXInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformRotationYAnimationExists;                 //@synthesize transformRotationYAnimationExists=_transformRotationYAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformRotationYInitialValue;                  //@synthesize transformRotationYInitialValue=_transformRotationYInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformRotationZAnimationExists;                 //@synthesize transformRotationZAnimationExists=_transformRotationZAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformRotationZInitialValue;                  //@synthesize transformRotationZInitialValue=_transformRotationZInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformScaleXAnimationExists;                    //@synthesize transformScaleXAnimationExists=_transformScaleXAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformScaleXInitialValue;                     //@synthesize transformScaleXInitialValue=_transformScaleXInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformScaleYAnimationExists;                    //@synthesize transformScaleYAnimationExists=_transformScaleYAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformScaleYInitialValue;                     //@synthesize transformScaleYInitialValue=_transformScaleYInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformScaleXYAnimationExists;                   //@synthesize transformScaleXYAnimationExists=_transformScaleXYAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformScaleXYInitialValue;                    //@synthesize transformScaleXYInitialValue=_transformScaleXYInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformTranslationAnimationExists;               //@synthesize transformTranslationAnimationExists=_transformTranslationAnimationExists - In the implementation block
@property (nonatomic,readonly) CGPoint transformTranslationInitialValue;               //@synthesize transformTranslationInitialValue=_transformTranslationInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformTranslationXAnimationExists;              //@synthesize transformTranslationXAnimationExists=_transformTranslationXAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformTranslationXInitialValue;               //@synthesize transformTranslationXInitialValue=_transformTranslationXInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformTranslationYAnimationExists;              //@synthesize transformTranslationYAnimationExists=_transformTranslationYAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformTranslationYInitialValue;               //@synthesize transformTranslationYInitialValue=_transformTranslationYInitialValue - In the implementation block
@property (nonatomic,readonly) bool transformTranslationZAnimationExists;              //@synthesize transformTranslationZAnimationExists=_transformTranslationZAnimationExists - In the implementation block
@property (nonatomic,readonly) double transformTranslationZInitialValue;               //@synthesize transformTranslationZInitialValue=_transformTranslationZInitialValue - In the implementation block
@property (nonatomic,readonly) bool zPositionAnimationExists;                          //@synthesize zPositionAnimationExists=_zPositionAnimationExists - In the implementation block
@property (nonatomic,readonly) double zPositionInitialValue;                           //@synthesize zPositionInitialValue=_zPositionInitialValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * initialValues;                           //@synthesize initialValues=_initialValues - In the implementation block
-(double)transformRotationXInitialValue;
-(double)transformRotationYInitialValue;
-(double)transformRotationZInitialValue;
-(bool)transformRotationXAnimationExists;
-(double)transformRotationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformRotationYAnimationExists;
-(double)transformRotationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformRotationZAnimationExists;
-(double)transformRotationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformRotationAnimationExists;
-(double)transformRotationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(CGPoint)anchorPointInitialValue;
-(bool)anchorPointAnimationExists;
-(double)anchorPointZInitialValue;
-(bool)anchorPointZAnimationExists;
-(double)anchorPointZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)boundsAnimationExists;
-(CGRect)boundsInitialValue;
-(CGRect)boundsCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformScaleXYAnimationExists;
-(double)transformScaleXYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformScaleXAnimationExists;
-(double)transformScaleXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformScaleYAnimationExists;
-(double)transformScaleYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)positionAnimationExists;
-(CGPoint)positionInitialValue;
-(CGPoint)positionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)zPositionAnimationExists;
-(double)zPositionInitialValue;
-(double)zPositionCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(CGPoint)transformTranslationInitialValue;
-(bool)transformTranslationAnimationExists;
-(CGPoint)transformTranslationCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformTranslationXAnimationExists;
-(double)transformTranslationXCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformTranslationYAnimationExists;
-(double)transformTranslationYCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformTranslationZAnimationExists;
-(double)transformTranslationZCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)transformAnimationExists;
-(CATransform3D)transformCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(double)opacityCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(id)initialValues;
-(bool)p_setupAndCacheAnimationValues:(bool)arg1 verifyOnly:(bool)arg2 ;
-(bool)verifyCache;
-(id)initWithLayer:(id)arg1 animation:(id)arg2 overrideInitialValues:(id)arg3 cacheAnimationValues:(bool)arg4 ;
-(CGPoint)anchorPointCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(double)borderWidthCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)doubleSidedCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)hiddenCachedValueAtTime:(double)arg1 layer:(id)arg2 animation:(id)arg3 ;
-(bool)borderColorAnimationExists;
-(CGColorRef)borderColorInitialValue;
-(bool)borderWidthAnimationExists;
-(double)borderWidthInitialValue;
-(bool)contentsAnimationExists;
-(CGImageRef)contentsInitialValue;
-(bool)doubleSidedAnimationExists;
-(bool)doubleSidedInitialValue;
-(bool)hiddenAnimationExists;
-(bool)hiddenInitialValue;
-(bool)opacityAnimationExists;
-(double)opacityInitialValue;
-(CATransform3D)transformInitialValue;
-(double)transformRotationInitialValue;
-(double)transformScaleXInitialValue;
-(double)transformScaleYInitialValue;
-(double)transformScaleXYInitialValue;
-(double)transformTranslationXInitialValue;
-(double)transformTranslationYInitialValue;
-(double)transformTranslationZInitialValue;
-(void)dealloc;
-(id)layer;
-(id)animation;
@end

