/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString, NSMutableArray, VKPGlobalProperties, VKGenericShieldDrawStyle;

@interface VKStylesheet : NSObject {

	NSString* _sheetName;
	float _scale;
	float _ppi;
	long long _targetDisplay;
	NSMutableArray* _flatStyles;
	NSMutableArray* _inheritance;
	long long _rasterPolygonChangeoverZ;
	VKPGlobalProperties* _styleGlobalProperties;
	long long _mapDisplayStyle;
	long long _mapDisplayStyleVariant;
	float _blendingFactor;
	unsigned _updateStamp;
	bool _nightStyleVariantsInitialized;
	bool _supportsNightMode;
	bool _canSelectIcons;
	VKGenericShieldDrawStyle* _defaultGenericShieldStyle;

}

@property (nonatomic,readonly) VKPGlobalProperties * styleGlobalProperties;                       //@synthesize styleGlobalProperties=_styleGlobalProperties - In the implementation block
@property (nonatomic,readonly) bool supportsNightMode;                                            //@synthesize supportsNightMode=_supportsNightMode - In the implementation block
@property (readonly) unsigned updateStamp;                                                        //@synthesize updateStamp=_updateStamp - In the implementation block
@property (assign,nonatomic) float blendingFactor;                                                //@synthesize blendingFactor=_blendingFactor - In the implementation block
@property (nonatomic,readonly) long long mapDisplayStyle;                                         //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) long long mapDisplayStyleVariant;                                    //@synthesize mapDisplayStyleVariant=_mapDisplayStyleVariant - In the implementation block
@property (nonatomic,readonly) long long activeMapDisplayStyle; 
@property (nonatomic,readonly) long long targetDisplay;                                           //@synthesize targetDisplay=_targetDisplay - In the implementation block
@property (nonatomic,readonly) VKGenericShieldDrawStyle * defaultGenericShieldStyle; 
@property (assign,nonatomic) bool canSelectIcons;                                                 //@synthesize canSelectIcons=_canSelectIcons - In the implementation block
+(id)installedStylesheets;
+(id)stylesheetWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4 ;
+(void)_activeTileGroupWillChange;
-(oneway void)release;
-(void)dealloc;
-(id)init;
-(id)sheetName;
-(long long)targetDisplay;
-(bool)supportsNightMode;
-(float)blendingFactor;
-(void)setBlendingFactor:(float)arg1 ;
-(bool)supportsMapDisplayStyle:(long long)arg1 ;
-(long long)mapDisplayStyle;
-(id)styleGlobalProperties;
-(void)prepareStyleVariantsForMapDisplayStyle:(long long)arg1 ;
-(void)setMapDisplayStyleVariant:(long long)arg1 ;
-(void)setCanSelectIcons:(bool)arg1 ;
-(long long)mapDisplayStyleVariant;
-(id)styleForFeature:(SCD_Struct_VK59*)arg1 vectorType:(long long)arg2 ;
-(id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4 ;
-(id)initWithData:(id)arg1 forName:(id)arg2 scale:(float)arg3 ppi:(float)arg4 targetDisplay:(long long)arg5 ;
-(id)initWithScale:(float)arg1 ppi:(float)arg2 ;
-(long long)rasterPolygonChangeoverZ;
-(id)_styleMatchingAttributes:(id)arg1 vectorType:(long long)arg2 locale:(id)arg3 ;
-(id)_styleMatchingAttributes:(id)arg1 vectorType:(long long)arg2 locale:(id)arg3 mapDisplayStyle:(long long)arg4 mapDisplayStyleVariant:(long long)arg5 ;
-(float)_nightShieldBrightnessForVectorType:(long long)arg1 ;
-(id)variantForStyle:(id)arg1 ;
-(id)styleForFeature:(SCD_Struct_VK59*)arg1 vectorType:(long long)arg2 locale:(id)arg3 ;
-(id)styleForFeature:(SCD_Struct_VK59*)arg1 vectorType:(long long)arg2 mapDisplayStyle:(long long)arg3 ;
-(float)shieldBrightnessForVectorType:(long long)arg1 ;
-(float)shieldBrightnessForDisplayStyle:(long long)arg1 ;
-(id)defaultGenericShieldStyle;
-(long long)activeMapDisplayStyle;
-(unsigned)updateStamp;
-(bool)canSelectIcons;
@end

