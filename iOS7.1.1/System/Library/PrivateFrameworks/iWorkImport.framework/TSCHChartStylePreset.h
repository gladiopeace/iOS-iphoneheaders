/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>
#import <iWorkImport/TSSPreset.h>
#import <iWorkImport/TSCHStyleSwapSupporting.h>

@protocol TSCHStyleActAlike;
@class NSString, NSArray, TSCHChartStyleState;

@interface TSCHChartStylePreset : TSPObject <TSPCopying, TSSPreset, TSCHStyleSwapSupporting> {

	<TSCHStyleActAlike>* mChartStyle;
	<TSCHStyleActAlike>* mLegendStyle;
	NSArray* mValueAxisStyles;
	NSArray* mCategoryAxisStyles;
	NSArray* mSeriesStyles;
	NSArray* mParagraphStyles;
	CFUUIDRef mUUID;

}

@property (readonly) TSCHChartStyleState * chartStyleState; 
@property (nonatomic,readonly) <TSCHStyleActAlike> * chartStyle; 
@property (nonatomic,readonly) <TSCHStyleActAlike> * legendStyle; 
@property (nonatomic,readonly) NSArray * valueAxisStyles; 
@property (nonatomic,readonly) NSArray * categoryAxisStyles; 
@property (nonatomic,readonly) NSArray * seriesStyles; 
@property (nonatomic,readonly) NSArray * paragraphStyles; 
@property (nonatomic,readonly) CFUUIDRef uuid; 
@property (nonatomic,readonly) NSString * presetKind; 
+(void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)arg1 valueAxisPresets:(id)arg2 paragraphPresets:(id)arg3 ;
+(void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2 ;
+(void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2 ;
+(void)upgradeShadowPropertyForParagraphStyles:(id)arg1 ;
+(void)p_replaceProperty:(int)arg1 inStyle:(id)arg2 withObject:(id)arg3 ;
+(id)p_getDefaultErrorBarColor:(id)arg1 valueAxisStyles:(id)arg2 ;
+(id)p_getDefaultTrendLineShadowColor:(id)arg1 ;
+(id)p_getDefaultTrendLineStrokeColor:(id)arg1 ;
-(id)chartStyleState;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)presetKind;
-(bool)isThemeEquivalent:(id)arg1 ;
-(id)valueAxisStyles;
-(id)categoryAxisStyles;
-(id)seriesStyles;
-(id)buildChartNonStyle;
-(id)buildLegendNonStyle;
-(id)chartStyle;
-(id)legendStyle;
-(id)paragraphStyles;
-(id)buildAxisNonStyle;
-(id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 ;
-(id)applyStyleSwapTuple:(id)arg1 ;
-(id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 uuid:(CFUUIDRef)arg8 ;
-(id)p_initWithContext:(id)arg1 ;
-(id)allStyles;
-(bool)isEquivalentToPreset:(id)arg1 outReasons:(id*)arg2 ;
-(id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 ;
-(bool)isEquivalentToPreset:(id)arg1 ;
-(id)swatchImage;
-(id)buildSeriesNonStyle;
-(void)dealloc;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(CFUUIDRef)uuid;
@end

