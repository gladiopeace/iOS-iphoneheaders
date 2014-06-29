/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSSPropertyMap;

@interface TSCHConfiguration : NSObject {

	bool mSupportsChartDataEditor;
	bool mSupportsChartRangeEditingMode;
	bool mSupportsNumberFormatSameAsSource;
	bool mShowMessageOnSelection;
	bool mDisableHighQualityRenderingIfNecessary;
	bool mSupports3DFillDataEmbeddingRecovery;
	bool mUse3DFillFor3DChartFallback;
	bool mShouldForceDiscreteGraphicsFor3D;
	bool mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
	bool mSupportsTextBackground;
	Class mMultiDataChartOptionsControllerBuildSupportClass;

}

@property (assign,nonatomic) bool supportsChartDataEditor; 
@property (assign,nonatomic) bool supportsChartRangeEditingMode; 
@property (assign,nonatomic) bool supportsNumberFormatSameAsSource; 
@property (assign,nonatomic) bool showMessageOnSelection; 
@property (assign,nonatomic) bool disableHighQualityRenderingIfNecessary; 
@property (assign,nonatomic) bool supports3DFillDataEmbeddingRecovery; 
@property (assign,nonatomic) bool use3DFillFor3DChartFallback; 
@property (assign,nonatomic) bool shouldForceDiscreteGraphicsFor3D; 
@property (assign,nonatomic) bool exportsUsingSageKeynoteChartNonStyleDefaultsOverride; 
@property (assign,nonatomic) bool supportsTextBackground; 
@property (assign,nonatomic) Class multiDataChartOptionsControllerBuildSupportClass; 
@property (readonly) TSSPropertyMap * appSpecificPropertyOverrides; 
+(void)resetSharedChartConfiguration;
+(id)sharedChartConfiguration;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
-(void)setSupports3DFillDataEmbeddingRecovery:(bool)arg1 ;
-(bool)use3DFillFor3DChartFallback;
-(bool)disableHighQualityRenderingIfNecessary;
-(bool)supportsNumberFormatSameAsSource;
-(bool)supportsChartRangeEditingMode;
-(id)appSpecificPropertyOverrides;
-(bool)supportsChartDataEditor;
-(void)setSupportsChartDataEditor:(bool)arg1 ;
-(void)setSupportsChartRangeEditingMode:(bool)arg1 ;
-(void)setSupportsNumberFormatSameAsSource:(bool)arg1 ;
-(bool)showMessageOnSelection;
-(void)setShowMessageOnSelection:(bool)arg1 ;
-(void)setDisableHighQualityRenderingIfNecessary:(bool)arg1 ;
-(bool)supports3DFillDataEmbeddingRecovery;
-(void)setUse3DFillFor3DChartFallback:(bool)arg1 ;
-(bool)shouldForceDiscreteGraphicsFor3D;
-(void)setShouldForceDiscreteGraphicsFor3D:(bool)arg1 ;
-(bool)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
-(void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(bool)arg1 ;
-(bool)supportsTextBackground;
-(void)setSupportsTextBackground:(bool)arg1 ;
-(Class)multiDataChartOptionsControllerBuildSupportClass;
-(void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
@end

