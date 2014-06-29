/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableData, NSData, NSMutableOrderedSet;

@interface GEOVectorTile : NSObject {

	GEOTileKey _key;
	SCD_Struct_GE97* _lines;
	unsigned long long _linesCount;
	unsigned long long _linesVertexCount;
	SCD_Struct_GE97* _coastlines;
	unsigned long long _coastlinesCount;
	SCD_Struct_GE99* _polygons;
	unsigned long long _polygonsCount;
	unsigned long long _polygonsVertexCount;
	SCD_Struct_GE98* _polygonLabelPositions;
	unsigned long long _polygonLabelPositionsCount;
	SCD_Struct_GE100* _buildingFootprints;
	NSMutableData* _extrusionHeightsPool;
	NSMutableData* _baseHeightsPool;
	unsigned long long _buildingFootprintsCount;
	SCD_Struct_GE100* _hiResBuildingFootprints;
	unsigned long long _hiResBuildingFootprintsCount;
	SCD_Struct_GE101* _threeDBuildings;
	unsigned long long _threeDBuildingsCount;
	SCD_Struct_GE102* _extendedPointAttributes;
	unsigned long long _extendedPointAttributesCount;
	SCD_Struct_GE103* _pois;
	unsigned long long _poisCount;
	SCD_Struct_GE104* _overpasses;
	SCD_Struct_GE105* _junctions;
	unsigned long long _junctionsCount;
	bool _hasComputedJunctions;
	SCD_Struct_GE106* _laneConnections;
	unsigned long long _laneConnectionsCount;
	SCD_Struct_GE106* _pointsOnRoad;
	unsigned long long _pointsOnRoadCount;
	/*function pointer*/ void** _sortedPointsOnRoad;
	SCD_Struct_GE107* _laneGeometry;
	SCD_Struct_GE108* _curveLineVertices;
	unsigned* _curveToLineMapping;
	SCD_Struct_GE108* _lineVertices;
	SCD_Struct_GE108* _polygonVertices;
	SCD_Struct_GE108* _coastlineVertices;
	SCD_Struct_GE108* _footprintVertices;
	SCD_Struct_GE108* _hiResFootprintVertices;
	NSData* _labelPool;
	SCD_Struct_GE109* _labelPoolLanguages;
	unsigned long long _labelPoolLanguagesLength;
	NSMutableData* _localizedLabelPool;
	char* _localizedLabelsLanguage;
	SCD_Struct_GE110* _labelIndex;
	unsigned long long _labelIndexCount;
	GEOFeatureShield* _shieldIndex;
	unsigned long long _shieldIndexCount;
	SCD_Struct_GE111* _localizationTable;
	unsigned long long _localizationTableCount;
	NSMutableOrderedSet* _uniqueAttributes;
	SCD_Struct_GE114* _lineCharacteristicPoints;
	unsigned long long _lineCharacteristicPointCount;
	SCD_Struct_GE114* _polygonCharacteristicPoints;
	unsigned long long _polygonCharacteristicPointCount;
	SCD_Struct_GE114* _coastlineCharacteristicPoints;
	unsigned long long _coastlineCharacteristicPointCount;

}

@property (nonatomic,readonly) SCD_Struct_GE97* lines;                                            //@synthesize lines=_lines - In the implementation block
@property (nonatomic,readonly) unsigned long long linesCount;                                     //@synthesize linesCount=_linesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long linesVertexCount;                               //@synthesize linesVertexCount=_linesVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE97* coastlines;                                       //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlinesCount;                                //@synthesize coastlinesCount=_coastlinesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE99* polygons;                                         //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsCount;                                  //@synthesize polygonsCount=_polygonsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsVertexCount;                            //@synthesize polygonsVertexCount=_polygonsVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE100* buildingFootprints;                              //@synthesize buildingFootprints=_buildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned long long buildingFootprintsCount;                        //@synthesize buildingFootprintsCount=_buildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE100* hiResBuildingFootprints;                         //@synthesize hiResBuildingFootprints=_hiResBuildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned long long hiResBuildingFootprintsCount;                   //@synthesize hiResBuildingFootprintsCount=_hiResBuildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE101* threeDBuildings;                                 //@synthesize threeDBuildings=_threeDBuildings - In the implementation block
@property (nonatomic,readonly) unsigned long long threeDBuildingsCount;                           //@synthesize threeDBuildingsCount=_threeDBuildingsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE103* pois;                                            //@synthesize pois=_pois - In the implementation block
@property (nonatomic,readonly) unsigned long long poisCount;                                      //@synthesize poisCount=_poisCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE104* overpasses;                                      //@synthesize overpasses=_overpasses - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE105* junctions;                                       //@synthesize junctions=_junctions - In the implementation block
@property (nonatomic,readonly) unsigned long long junctionsCount;                                 //@synthesize junctionsCount=_junctionsCount - In the implementation block
@property (nonatomic,readonly) bool hasComputedJunctions;                                         //@synthesize hasComputedJunctions=_hasComputedJunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE106* pointsOnRoad;                                    //@synthesize pointsOnRoad=_pointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned long long pointsOnRoadCount;                              //@synthesize pointsOnRoadCount=_pointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE106* laneConnections;                                 //@synthesize laneConnections=_laneConnections - In the implementation block
@property (nonatomic,readonly) unsigned long long laneConnectionsCount;                           //@synthesize laneConnectionsCount=_laneConnectionsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE114* lineCharacteristicPoints;                        //@synthesize lineCharacteristicPoints=_lineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long lineCharacteristicPointCount;                   //@synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE114* polygonCharacteristicPoints;                     //@synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonCharacteristicPointCount;                //@synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE114* coastlineCharacteristicPoints;                   //@synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlineCharacteristicPointCount;              //@synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE108* curveLineVertices; 
@property (nonatomic,readonly) SCD_Struct_GE108* lineVertices; 
@property (nonatomic,readonly) GEOTileKey tileKey;                                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) bool dataIncludesConnectivity; 
-(id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(unsigned long long)_makeSpaceForLabels:(unsigned long long)arg1 ;
-(unsigned long long)_makeSpaceForShields:(unsigned long long)arg1 ;
-(bool)_readPolygons:(SCD_Struct_GE116*)arg1 ofType:(unsigned short)arg2 ;
-(bool)_readLowResBuildings:(SCD_Struct_GE116*)arg1 ;
-(bool)_readWrappingCoastlines:(SCD_Struct_GE118*)arg1 tile:(SCD_Struct_GE116*)arg2 ;
-(bool)_readSimpleCoastlines:(SCD_Struct_GE118*)arg1 tile:(SCD_Struct_GE116*)arg2 ;
-(bool)_readModernBuildings:(SCD_Struct_GE116*)arg1 chapter:(unsigned short)arg2 vertexPool:(/*function pointer*/ void**)arg3 footprints:(/*function pointer*/ void**)arg4 count:(unsigned long long*)arg5 ;
-(bool)_addGenericPolygonWithAttributes:(int*)arg1 ;
-(bool)_handleGenericTile:(SCD_Struct_GE116*)arg1 ;
-(bool)_readInfoChapter:(SCD_Struct_GE116*)arg1 ;
-(bool)_readLabels:(SCD_Struct_GE116*)arg1 ;
-(bool)_readPois:(SCD_Struct_GE116*)arg1 ;
-(bool)_readLines:(SCD_Struct_GE116*)arg1 ;
-(bool)_readPolygons:(SCD_Struct_GE116*)arg1 ;
-(bool)_readCoastlines:(SCD_Struct_GE116*)arg1 ;
-(bool)_read3DBuildings:(SCD_Struct_GE116*)arg1 ;
-(bool)_readHighResBuildings:(SCD_Struct_GE116*)arg1 ;
-(bool)_readExtendedPointAttributes:(SCD_Struct_GE116*)arg1 ;
-(id)_initWithVMP3:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(void)_attachRoadPoints;
-(void)_findJunctions;
-(void)_findOverpasses;
-(void)_trimWhitespace;
-(void)dealloc;
-(id)description;
-(SCD_Struct_GE108*)curveLineVertices;
-(id)extrusionHeightsPool;
-(id)baseHeightsPool;
-(SCD_Struct_GE98*)polygonLabelPositions;
-(void)forEachPoint:(/*^block*/ id)arg1 ;
-(void)forEachPolygon:(/*^block*/ id)arg1 ;
-(void)forEachJunctionInRoad:(SCD_Struct_GE97*)arg1 visitor:(/*^block*/ id)arg2 ;
-(bool)dataIncludesConnectivity;
-(SCD_Struct_GE97*)multiSectionFeatureForGeoID:(unsigned long long)arg1 ;
-(bool)hasComputedJunctions;
-(unsigned long long)pointsOnRoadCount;
-(SCD_Struct_GE106*)laneConnections;
-(unsigned long long)laneConnectionsCount;
-(SCD_Struct_GE114*)lineCharacteristicPoints;
-(unsigned long long)lineCharacteristicPointCount;
-(SCD_Struct_GE114*)polygonCharacteristicPoints;
-(unsigned long long)polygonCharacteristicPointCount;
-(SCD_Struct_GE114*)coastlineCharacteristicPoints;
-(unsigned long long)coastlineCharacteristicPointCount;
-(SCD_Struct_GE97*)lines;
-(unsigned long long)linesCount;
-(GEOTileKey)tileKey;
-(unsigned long long)coastlinesCount;
-(SCD_Struct_GE97*)coastlines;
-(unsigned long long)polygonsCount;
-(SCD_Struct_GE99*)polygons;
-(SCD_Struct_GE100*)hiResBuildingFootprints;
-(unsigned long long)hiResBuildingFootprintsCount;
-(unsigned long long)buildingFootprintsCount;
-(unsigned long long)threeDBuildingsCount;
-(SCD_Struct_GE100*)buildingFootprints;
-(SCD_Struct_GE101*)threeDBuildings;
-(unsigned long long)poisCount;
-(SCD_Struct_GE103*)pois;
-(void)forEachJunction:(/*^block*/ id)arg1 ;
-(SCD_Struct_GE108*)lineVertices;
-(void)forEachEdgeOnJunction:(const SCD_Struct_GE105*)arg1 visitor:(/*^block*/ id)arg2 ;
-(void)forEachEdgeInRoad:(SCD_Struct_GE97*)arg1 visitTwice:(bool)arg2 visitor:(/*^block*/ id)arg3 ;
-(id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(SCD_Struct_GE106*)pointsOnRoad;
-(SCD_Struct_GE105*)junctions;
-(/*function pointer*/ void**)sortedPointsOnRoad;
-(SCD_Struct_GE104*)overpasses;
-(unsigned long long)junctionsCount;
-(unsigned long long)linesVertexCount;
-(unsigned long long)polygonsVertexCount;
-(void)forEachRoad:(/*^block*/ id)arg1 ;
@end

