/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDFill.h>
#import <iWorkImport/TSDMixing.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class TSUColor;

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying> {

	TSUColor* mColor;

}

@property (nonatomic,readonly) CGColorRef CGColor; 
@property (nonatomic,readonly) TSUColor * color; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double hue; 
@property (nonatomic,readonly) double saturation; 
@property (nonatomic,readonly) double brightness; 
@property (nonatomic,readonly) double luminance; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)colorWithColor:(id)arg1 ;
+(id)keyPathsForValuesAffectingCGColor;
+(id)keyPathsForValuesAffectingOpacity;
+(id)keyPathsForValuesAffectingLuminance;
+(id)keyPathsForValuesAffectingHue;
+(id)keyPathsForValuesAffectingSaturation;
+(id)keyPathsForValuesAffectingBrightness;
+(id)blackColor;
+(id)clearColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)whiteColor;
+(id)grayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithUIColor:(id)arg1 ;
+(id)randomColor;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(bool)isNearlyWhite;
-(SEL)mapThemeAssetSelector;
-(bool)isClear;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(bool)canApplyToCAShapeLayer;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2 ;
-(bool)drawsInOneStep;
-(void)applyToCALayer:(id)arg1 withScale:(double)arg2 ;
-(bool)canApplyToCALayer;
-(double)p_hsbComponentWithIndex:(unsigned long long)arg1 ;
-(double)saturation;
-(double)hue;
-(void)dealloc;
-(CGColorRef)CGColor;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isOpaque;
-(double)opacity;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)color;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(double)brightness;
-(id)referenceColor;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(int)fillType;
-(id)UIColor;
-(id)grayscaleColor;
-(id)invertedColor;
-(double)luminance;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
@end

