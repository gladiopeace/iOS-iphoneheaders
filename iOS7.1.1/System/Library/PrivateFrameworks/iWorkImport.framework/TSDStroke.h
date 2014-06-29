/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSThemeAsset.h>
#import <iWorkImport/TSDPathPainter.h>
#import <iWorkImport/TSDMixing.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class TSUColor, TSDStrokePattern;

@interface TSDStroke : NSObject <TSSThemeAsset, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying> {

	TSUColor* mColor;
	double mWidth;
	double mActualWidth;
	int mCap;
	int mJoin;
	TSDStrokePattern* mPattern;
	double mMiterLimit;

}

@property (nonatomic,readonly) bool dontClearBackground; 
@property (nonatomic,readonly) bool empty; 
@property (nonatomic,readonly) bool solid; 
@property (nonatomic,retain) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,retain) TSDStrokePattern * pattern; 
@property (nonatomic,readonly) bool isNullStroke; 
@property (nonatomic,readonly) bool isDash; 
@property (nonatomic,readonly) bool isRoundDash; 
@property (nonatomic,readonly) bool shouldRender; 
@property (nonatomic,readonly) bool supportsPattern; 
@property (nonatomic,readonly) bool supportsWidth; 
@property (nonatomic,readonly) bool supportsColor; 
@property (nonatomic,readonly) bool supportsLineOptions; 
@property (nonatomic,readonly) double suggestedMinimumLineWidth; 
@property (nonatomic,readonly) bool isFrame; 
@property (nonatomic,readonly) bool isNearlyWhite; 
@property (nonatomic,readonly) double dashSpacing; 
@property (nonatomic,readonly) bool drawsOutsideStrokeBounds; 
@property (nonatomic,readonly) TSDStrokeOutsets outsets; 
+(id)instanceWithArchive:(const StrokeArchive*)arg1 unarchiver:(id)arg2 ;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 ;
+(id)emptyStroke;
+(bool)canMixWithNilObjects;
+(id)p_newStroke;
+(id)p_newEmptyStroke;
+(Class)mutableClass;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 ;
+(id)stroke;
-(bool)solid;
-(bool)dontClearBackground;
-(bool)isEqualToStroke:(id)arg1 ;
-(bool)empty;
-(void)saveToArchive:(StrokeArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const StrokeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)aaDefeatedPaintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 ;
-(bool)isNearlyWhite;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(bool)isThemeEquivalent:(id)arg1 ;
-(SEL)mapThemeAssetSelector;
-(bool)isRoundDash;
-(double)actualWidth;
-(void)applyToContext:(CGContextRef)arg1 ;
-(void)applyToContext:(CGContextRef)arg1 insideStroke:(bool)arg2 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(bool)arg2 inContext:(CGContextRef)arg3 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(CGRect)boundsForLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(CGAffineTransform)arg5 ;
-(void)applyToCAShapeLayer:(id)arg1 insideStroke:(bool)arg2 withScale:(double)arg3 ;
-(bool)isDash;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 ;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6 ;
-(bool)supportsWidth;
-(bool)supportsLineOptions;
-(bool)supportsPattern;
-(bool)supportsColor;
-(void)setActualWidth:(double)arg1 ;
-(id)colorForCGContext:(CGContextRef)arg1 ;
-(void)paintRect:(CGRect)arg1 wantsInteriorStroke:(bool)arg2 inContext:(CGContextRef)arg3 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(bool)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(bool)arg4 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(bool)arg6 ;
-(bool)isNullStroke;
-(bool)canApplyDirectlyToRepCALayer;
-(bool)canApplyToCAShapeLayer;
-(bool)drawsOutsideStrokeBounds;
-(bool)needsToExtendJoinsForBoundsCalculation;
-(CGRect)boundsForPath:(id)arg1 ;
-(TSDStrokeOutsets)outsets;
-(void)p_setPropertiesFromStroke:(id)arg1 ;
-(void)p_setPatternPropertiesFromStroke:(id)arg1 ;
-(void)applyInteriorWrapPropertiesToContext:(CGContextRef)arg1 insideStroke:(bool)arg2 ;
-(double)lineEndInsetAdjustment;
-(id)strokeLineEnd:(id)arg1 ;
-(void)paintPathWithNormalClip:(CGPathRef)arg1 wantsInteriorStroke:(bool)arg2 inContext:(CGContextRef)arg3 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 ;
-(id)pathForLineEnd:(id)arg1 wrapPath:(bool)arg2 atPoint:(CGPoint)arg3 atAngle:(double)arg4 withScale:(double)arg5 ;
-(double)suggestedMinimumLineWidth;
-(void)applyToRepCALayer:(id)arg1 withScale:(double)arg2 ;
-(bool)prefersToApplyToCAShapeLayerDuringManipulation;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2 ;
-(bool)drawsInOneStep;
-(bool)shouldAntialiasDefeat;
-(id)strokeByTransformingByTransform:(CGAffineTransform)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)width;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(bool)isFrame;
-(int)cap;
-(void)setCap:(int)arg1 ;
-(void)setJoin:(int)arg1 ;
-(int)join;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(double)dashSpacing;
-(bool)shouldRender;
-(id)pattern;
-(void)setPattern:(id)arg1 ;
@end

