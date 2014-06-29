/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface VKPGlobalProperties : PBCodable <NSCopying> {

	SCD_Struct_VK56* _layerZoomRangeBackgroundRasters;
	SCD_Struct_VK56* _layerZoomRangeGroundCovers;
	SCD_Struct_VK56* _layerZoomRangeHybridRasters;
	SCD_Struct_VK56* _layerZoomRangePOIs;
	SCD_Struct_VK56* _layerZoomRangeRasterTraffics;
	SCD_Struct_VK56* _layerZoomRangeSatelliteRasters;
	SCD_Struct_VK56* _layerZoomRangeStandardRasters;
	SCD_Struct_VK56* _layerZoomRangeVectorBuildings;
	SCD_Struct_VK56* _layerZoomRangeVectorPolygons;
	SCD_Struct_VK56* _layerZoomRangeVectorRealistics;
	SCD_Struct_VK56* _layerZoomRangeVectorRoadTraffics;
	SCD_Struct_VK56* _layerZoomRangeVectorRoads;
	unsigned _buildingChangeoverZ;
	float _globalScaleFactor;
	float _globeLODScale;
	float _labelIconScale;
	int _labelRoadCrossingThreshold;
	float _lodOffset;
	float _minLineTriangleWidth;
	unsigned _minTrafficTypeAccidentZ;
	unsigned _minTrafficTypeConstructionZ;
	unsigned _minTrafficTypeEventZ;
	unsigned _minTrafficTypeHazardZ;
	unsigned _minTrafficTypeLaneClosureZ;
	unsigned _minTrafficTypeRampClosureZ;
	unsigned _minTrafficTypeRoadClosureZ;
	unsigned _minTrafficTypeUnknownZ;
	unsigned _navLabelMaxRoadSigns;
	float _navLabelRoadSignHeight;
	float _navLabelRoadSignScaleLarge;
	float _navLabelRoadSignScaleMedium;
	float _navLabelRoadSignScaleSmall;
	float _navLabelRoadSignScaleXLarge;
	float _navLabelRoadSignScaleXXLarge;
	unsigned _rasterPolygonChangeoverZ;
	float _realisticNightBrightness;
	float _realisticShieldNightBrightness;
	float _shieldNightBrightness;
	float _tiltLimitSatelliteScale;
	SCD_Struct_VK67 _has;

}

@property (assign,nonatomic) bool hasRasterPolygonChangeoverZ; 
@property (assign,nonatomic) unsigned rasterPolygonChangeoverZ;                                       //@synthesize rasterPolygonChangeoverZ=_rasterPolygonChangeoverZ - In the implementation block
@property (assign,nonatomic) bool hasMinLineTriangleWidth; 
@property (assign,nonatomic) float minLineTriangleWidth;                                              //@synthesize minLineTriangleWidth=_minLineTriangleWidth - In the implementation block
@property (assign,nonatomic) bool hasBuildingChangeoverZ; 
@property (assign,nonatomic) unsigned buildingChangeoverZ;                                            //@synthesize buildingChangeoverZ=_buildingChangeoverZ - In the implementation block
@property (assign,nonatomic) bool hasMinTrafficTypeUnknownZ; 
@property (assign,nonatomic) unsigned minTrafficTypeUnknownZ;                                         //@synthesize minTrafficTypeUnknownZ=_minTrafficTypeUnknownZ - In the implementation block
@property (assign,nonatomic) bool hasMinTrafficTypeAccidentZ; 
@property (assign,nonatomic) unsigned minTrafficTypeAccidentZ;                                        //@synthesize minTrafficTypeAccidentZ=_minTrafficTypeAccidentZ - In the implementation block
@property (assign,nonatomic) bool hasMinTrafficTypeConstructionZ; 
@property (assign,nonatomic) unsigned minTrafficTypeConstructionZ;                                    //@synthesize minTrafficTypeConstructionZ=_minTrafficTypeConstructionZ - In the implementation block
@property (assign,nonatomic) bool hasMinTrafficTypeRoadClosureZ; 
@property (assign,nonatomic) unsigned minTrafficTypeRoadClosureZ;                                     //@synthesize minTrafficTypeRoadClosureZ=_minTrafficTypeRoadClosureZ - In the implementation block
@property (assign,nonatomic) bool hasMinTrafficTypeEventZ; 
@property (assign,nonatomic) unsigned minTrafficTypeEventZ;                                           //@synthesize minTrafficTypeEventZ=_minTrafficTypeEventZ - In the implementation block
@property (assign,nonatomic) bool hasMinTrafficTypeHazardZ; 
@property (assign,nonatomic) unsigned minTrafficTypeHazardZ;                                          //@synthesize minTrafficTypeHazardZ=_minTrafficTypeHazardZ - In the implementation block
@property (assign,nonatomic) bool hasMinTrafficTypeLaneClosureZ; 
@property (assign,nonatomic) unsigned minTrafficTypeLaneClosureZ;                                     //@synthesize minTrafficTypeLaneClosureZ=_minTrafficTypeLaneClosureZ - In the implementation block
@property (assign,nonatomic) bool hasMinTrafficTypeRampClosureZ; 
@property (assign,nonatomic) unsigned minTrafficTypeRampClosureZ;                                     //@synthesize minTrafficTypeRampClosureZ=_minTrafficTypeRampClosureZ - In the implementation block
@property (assign,nonatomic) bool hasRealisticNightBrightness; 
@property (assign,nonatomic) float realisticNightBrightness;                                          //@synthesize realisticNightBrightness=_realisticNightBrightness - In the implementation block
@property (assign,nonatomic) bool hasShieldNightBrightness; 
@property (assign,nonatomic) float shieldNightBrightness;                                             //@synthesize shieldNightBrightness=_shieldNightBrightness - In the implementation block
@property (assign,nonatomic) bool hasRealisticShieldNightBrightness; 
@property (assign,nonatomic) float realisticShieldNightBrightness;                                    //@synthesize realisticShieldNightBrightness=_realisticShieldNightBrightness - In the implementation block
@property (nonatomic,readonly) unsigned long long layerZoomRangeBackgroundRastersCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeBackgroundRasters; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeStandardRastersCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeStandardRasters; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeSatelliteRastersCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeSatelliteRasters; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeHybridRastersCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeHybridRasters; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeGroundCoversCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeGroundCovers; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeRasterTrafficsCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeRasterTraffics; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeVectorPolygonsCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeVectorPolygons; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeVectorRoadsCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeVectorRoads; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeVectorRealisticsCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeVectorRealistics; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeVectorBuildingsCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeVectorBuildings; 
@property (nonatomic,readonly) unsigned long long layerZoomRangePOIsCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangePOIs; 
@property (nonatomic,readonly) unsigned long long layerZoomRangeVectorRoadTrafficsCount; 
@property (nonatomic,readonly) unsigned* layerZoomRangeVectorRoadTraffics; 
@property (assign,nonatomic) bool hasTiltLimitSatelliteScale; 
@property (assign,nonatomic) float tiltLimitSatelliteScale;                                           //@synthesize tiltLimitSatelliteScale=_tiltLimitSatelliteScale - In the implementation block
@property (assign,nonatomic) bool hasGlobeLODScale; 
@property (assign,nonatomic) float globeLODScale;                                                     //@synthesize globeLODScale=_globeLODScale - In the implementation block
@property (assign,nonatomic) bool hasLodOffset; 
@property (assign,nonatomic) float lodOffset;                                                         //@synthesize lodOffset=_lodOffset - In the implementation block
@property (assign,nonatomic) bool hasGlobalScaleFactor; 
@property (assign,nonatomic) float globalScaleFactor;                                                 //@synthesize globalScaleFactor=_globalScaleFactor - In the implementation block
@property (assign,nonatomic) bool hasLabelIconScale; 
@property (assign,nonatomic) float labelIconScale;                                                    //@synthesize labelIconScale=_labelIconScale - In the implementation block
@property (assign,nonatomic) bool hasLabelRoadCrossingThreshold; 
@property (assign,nonatomic) int labelRoadCrossingThreshold;                                          //@synthesize labelRoadCrossingThreshold=_labelRoadCrossingThreshold - In the implementation block
@property (assign,nonatomic) bool hasNavLabelRoadSignHeight; 
@property (assign,nonatomic) float navLabelRoadSignHeight;                                            //@synthesize navLabelRoadSignHeight=_navLabelRoadSignHeight - In the implementation block
@property (assign,nonatomic) bool hasNavLabelRoadSignScaleSmall; 
@property (assign,nonatomic) float navLabelRoadSignScaleSmall;                                        //@synthesize navLabelRoadSignScaleSmall=_navLabelRoadSignScaleSmall - In the implementation block
@property (assign,nonatomic) bool hasNavLabelRoadSignScaleMedium; 
@property (assign,nonatomic) float navLabelRoadSignScaleMedium;                                       //@synthesize navLabelRoadSignScaleMedium=_navLabelRoadSignScaleMedium - In the implementation block
@property (assign,nonatomic) bool hasNavLabelRoadSignScaleLarge; 
@property (assign,nonatomic) float navLabelRoadSignScaleLarge;                                        //@synthesize navLabelRoadSignScaleLarge=_navLabelRoadSignScaleLarge - In the implementation block
@property (assign,nonatomic) bool hasNavLabelRoadSignScaleXLarge; 
@property (assign,nonatomic) float navLabelRoadSignScaleXLarge;                                       //@synthesize navLabelRoadSignScaleXLarge=_navLabelRoadSignScaleXLarge - In the implementation block
@property (assign,nonatomic) bool hasNavLabelRoadSignScaleXXLarge; 
@property (assign,nonatomic) float navLabelRoadSignScaleXXLarge;                                      //@synthesize navLabelRoadSignScaleXXLarge=_navLabelRoadSignScaleXXLarge - In the implementation block
@property (assign,nonatomic) bool hasNavLabelMaxRoadSigns; 
@property (assign,nonatomic) unsigned navLabelMaxRoadSigns;                                           //@synthesize navLabelMaxRoadSigns=_navLabelMaxRoadSigns - In the implementation block
-(float)tiltLimitScale:(long long)arg1 ;
-(NSRange)zoomRangeForMapLayer:(unsigned long long)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(bool)readFrom:(id)arg1 ;
-(bool)hasBuildingChangeoverZ;
-(unsigned)buildingChangeoverZ;
-(float)lodOffset;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLabelIconScale:(float)arg1 ;
-(void)setHasLabelIconScale:(bool)arg1 ;
-(bool)hasLabelIconScale;
-(float)labelIconScale;
-(unsigned)rasterPolygonChangeoverZ;
-(float)realisticShieldNightBrightness;
-(float)shieldNightBrightness;
-(unsigned long long)layerZoomRangeBackgroundRastersCount;
-(unsigned*)layerZoomRangeBackgroundRasters;
-(unsigned long long)layerZoomRangeStandardRastersCount;
-(unsigned*)layerZoomRangeStandardRasters;
-(unsigned long long)layerZoomRangeSatelliteRastersCount;
-(unsigned*)layerZoomRangeSatelliteRasters;
-(unsigned long long)layerZoomRangeHybridRastersCount;
-(unsigned*)layerZoomRangeHybridRasters;
-(unsigned long long)layerZoomRangeGroundCoversCount;
-(unsigned*)layerZoomRangeGroundCovers;
-(unsigned long long)layerZoomRangeRasterTrafficsCount;
-(unsigned*)layerZoomRangeRasterTraffics;
-(unsigned long long)layerZoomRangeVectorPolygonsCount;
-(unsigned*)layerZoomRangeVectorPolygons;
-(unsigned long long)layerZoomRangeVectorRoadsCount;
-(unsigned*)layerZoomRangeVectorRoads;
-(unsigned long long)layerZoomRangeVectorRealisticsCount;
-(unsigned*)layerZoomRangeVectorRealistics;
-(unsigned long long)layerZoomRangeVectorBuildingsCount;
-(unsigned*)layerZoomRangeVectorBuildings;
-(unsigned long long)layerZoomRangePOIsCount;
-(unsigned*)layerZoomRangePOIs;
-(float)tiltLimitSatelliteScale;
-(void)clearLayerZoomRangeBackgroundRasters;
-(unsigned)layerZoomRangeBackgroundRastersAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeBackgroundRasters:(unsigned)arg1 ;
-(void)clearLayerZoomRangeStandardRasters;
-(unsigned)layerZoomRangeStandardRastersAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeStandardRasters:(unsigned)arg1 ;
-(void)clearLayerZoomRangeSatelliteRasters;
-(unsigned)layerZoomRangeSatelliteRastersAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeSatelliteRasters:(unsigned)arg1 ;
-(void)clearLayerZoomRangeHybridRasters;
-(unsigned)layerZoomRangeHybridRastersAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeHybridRasters:(unsigned)arg1 ;
-(void)clearLayerZoomRangeGroundCovers;
-(unsigned)layerZoomRangeGroundCoverAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeGroundCover:(unsigned)arg1 ;
-(void)clearLayerZoomRangeRasterTraffics;
-(unsigned)layerZoomRangeRasterTrafficAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeRasterTraffic:(unsigned)arg1 ;
-(void)clearLayerZoomRangeVectorPolygons;
-(unsigned)layerZoomRangeVectorPolygonsAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeVectorPolygons:(unsigned)arg1 ;
-(void)clearLayerZoomRangeVectorRoads;
-(unsigned)layerZoomRangeVectorRoadsAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeVectorRoads:(unsigned)arg1 ;
-(void)clearLayerZoomRangeVectorRealistics;
-(unsigned)layerZoomRangeVectorRealisticAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeVectorRealistic:(unsigned)arg1 ;
-(void)clearLayerZoomRangeVectorBuildings;
-(unsigned)layerZoomRangeVectorBuildingsAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeVectorBuildings:(unsigned)arg1 ;
-(void)clearLayerZoomRangePOIs;
-(unsigned)layerZoomRangePOIAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangePOI:(unsigned)arg1 ;
-(unsigned long long)layerZoomRangeVectorRoadTrafficsCount;
-(void)clearLayerZoomRangeVectorRoadTraffics;
-(unsigned)layerZoomRangeVectorRoadTrafficAtIndex:(unsigned long long)arg1 ;
-(void)addLayerZoomRangeVectorRoadTraffic:(unsigned)arg1 ;
-(void)setRasterPolygonChangeoverZ:(unsigned)arg1 ;
-(void)setHasRasterPolygonChangeoverZ:(bool)arg1 ;
-(bool)hasRasterPolygonChangeoverZ;
-(float)minLineTriangleWidth;
-(void)setMinLineTriangleWidth:(float)arg1 ;
-(void)setHasMinLineTriangleWidth:(bool)arg1 ;
-(bool)hasMinLineTriangleWidth;
-(void)setBuildingChangeoverZ:(unsigned)arg1 ;
-(void)setHasBuildingChangeoverZ:(bool)arg1 ;
-(void)setMinTrafficTypeUnknownZ:(unsigned)arg1 ;
-(void)setHasMinTrafficTypeUnknownZ:(bool)arg1 ;
-(bool)hasMinTrafficTypeUnknownZ;
-(void)setMinTrafficTypeAccidentZ:(unsigned)arg1 ;
-(void)setHasMinTrafficTypeAccidentZ:(bool)arg1 ;
-(bool)hasMinTrafficTypeAccidentZ;
-(void)setMinTrafficTypeConstructionZ:(unsigned)arg1 ;
-(void)setHasMinTrafficTypeConstructionZ:(bool)arg1 ;
-(bool)hasMinTrafficTypeConstructionZ;
-(void)setMinTrafficTypeRoadClosureZ:(unsigned)arg1 ;
-(void)setHasMinTrafficTypeRoadClosureZ:(bool)arg1 ;
-(bool)hasMinTrafficTypeRoadClosureZ;
-(void)setMinTrafficTypeEventZ:(unsigned)arg1 ;
-(void)setHasMinTrafficTypeEventZ:(bool)arg1 ;
-(bool)hasMinTrafficTypeEventZ;
-(void)setMinTrafficTypeHazardZ:(unsigned)arg1 ;
-(void)setHasMinTrafficTypeHazardZ:(bool)arg1 ;
-(bool)hasMinTrafficTypeHazardZ;
-(void)setMinTrafficTypeLaneClosureZ:(unsigned)arg1 ;
-(void)setHasMinTrafficTypeLaneClosureZ:(bool)arg1 ;
-(bool)hasMinTrafficTypeLaneClosureZ;
-(void)setMinTrafficTypeRampClosureZ:(unsigned)arg1 ;
-(void)setHasMinTrafficTypeRampClosureZ:(bool)arg1 ;
-(bool)hasMinTrafficTypeRampClosureZ;
-(float)realisticNightBrightness;
-(void)setRealisticNightBrightness:(float)arg1 ;
-(void)setHasRealisticNightBrightness:(bool)arg1 ;
-(bool)hasRealisticNightBrightness;
-(void)setShieldNightBrightness:(float)arg1 ;
-(void)setHasShieldNightBrightness:(bool)arg1 ;
-(bool)hasShieldNightBrightness;
-(void)setRealisticShieldNightBrightness:(float)arg1 ;
-(void)setHasRealisticShieldNightBrightness:(bool)arg1 ;
-(bool)hasRealisticShieldNightBrightness;
-(void)setLayerZoomRangeBackgroundRasters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeStandardRasters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeSatelliteRasters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeHybridRasters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeGroundCovers:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeRasterTraffics:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeVectorPolygons:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeVectorRoads:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeVectorRealistics:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangeVectorBuildings:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayerZoomRangePOIs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)layerZoomRangeVectorRoadTraffics;
-(void)setLayerZoomRangeVectorRoadTraffics:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setTiltLimitSatelliteScale:(float)arg1 ;
-(void)setHasTiltLimitSatelliteScale:(bool)arg1 ;
-(bool)hasTiltLimitSatelliteScale;
-(float)globeLODScale;
-(void)setGlobeLODScale:(float)arg1 ;
-(void)setHasGlobeLODScale:(bool)arg1 ;
-(bool)hasGlobeLODScale;
-(void)setLodOffset:(float)arg1 ;
-(void)setHasLodOffset:(bool)arg1 ;
-(bool)hasLodOffset;
-(float)globalScaleFactor;
-(void)setGlobalScaleFactor:(float)arg1 ;
-(void)setHasGlobalScaleFactor:(bool)arg1 ;
-(bool)hasGlobalScaleFactor;
-(int)labelRoadCrossingThreshold;
-(void)setLabelRoadCrossingThreshold:(int)arg1 ;
-(void)setHasLabelRoadCrossingThreshold:(bool)arg1 ;
-(bool)hasLabelRoadCrossingThreshold;
-(void)setNavLabelRoadSignHeight:(float)arg1 ;
-(void)setHasNavLabelRoadSignHeight:(bool)arg1 ;
-(bool)hasNavLabelRoadSignHeight;
-(void)setNavLabelRoadSignScaleSmall:(float)arg1 ;
-(void)setHasNavLabelRoadSignScaleSmall:(bool)arg1 ;
-(bool)hasNavLabelRoadSignScaleSmall;
-(void)setNavLabelRoadSignScaleMedium:(float)arg1 ;
-(void)setHasNavLabelRoadSignScaleMedium:(bool)arg1 ;
-(bool)hasNavLabelRoadSignScaleMedium;
-(void)setNavLabelRoadSignScaleLarge:(float)arg1 ;
-(void)setHasNavLabelRoadSignScaleLarge:(bool)arg1 ;
-(bool)hasNavLabelRoadSignScaleLarge;
-(void)setNavLabelRoadSignScaleXLarge:(float)arg1 ;
-(void)setHasNavLabelRoadSignScaleXLarge:(bool)arg1 ;
-(bool)hasNavLabelRoadSignScaleXLarge;
-(void)setNavLabelRoadSignScaleXXLarge:(float)arg1 ;
-(void)setHasNavLabelRoadSignScaleXXLarge:(bool)arg1 ;
-(bool)hasNavLabelRoadSignScaleXXLarge;
-(unsigned)navLabelMaxRoadSigns;
-(void)setNavLabelMaxRoadSigns:(unsigned)arg1 ;
-(void)setHasNavLabelMaxRoadSigns:(bool)arg1 ;
-(bool)hasNavLabelMaxRoadSigns;
-(unsigned)minTrafficTypeUnknownZ;
-(unsigned)minTrafficTypeAccidentZ;
-(unsigned)minTrafficTypeConstructionZ;
-(unsigned)minTrafficTypeRoadClosureZ;
-(unsigned)minTrafficTypeEventZ;
-(unsigned)minTrafficTypeHazardZ;
-(unsigned)minTrafficTypeLaneClosureZ;
-(unsigned)minTrafficTypeRampClosureZ;
-(float)navLabelRoadSignHeight;
-(float)navLabelRoadSignScaleSmall;
-(float)navLabelRoadSignScaleMedium;
-(float)navLabelRoadSignScaleLarge;
-(float)navLabelRoadSignScaleXLarge;
-(float)navLabelRoadSignScaleXXLarge;
@end

