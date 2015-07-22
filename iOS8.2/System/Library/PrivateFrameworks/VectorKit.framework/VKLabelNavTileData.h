/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKLabelTile, NSMapTable, NSMutableArray;

@interface VKLabelNavTileData : NSObject {

	VKLabelTile* _tile;
	NSMapTable* _geoJunctionToJunctionMap;
	NSMutableArray* _tileEdgeJunctions;
	char _foundTileEdgeJunctions;
	char _oppositeCarriagewayJunctionsValid;
	NSMutableArray* _oppositeCarriagewayJunctions;
	vector<LabelNavJunctionInfo, std::__1::allocator<LabelNavJunctionInfo> >* _junctionInfos;

}

@property (nonatomic,retain,readonly) VKLabelTile * tile;                                         //@synthesize tile=_tile - In the implementation block
@property (assign,nonatomic) char oppositeCarriagewayJunctionsValid;                              //@synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * oppositeCarriagewayJunctions;              //@synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions - In the implementation block
-(void)dealloc;
-(id)initWithTile:(id)arg1 ;
-(VKLabelTile *)tile;
-(NSMutableArray *)oppositeCarriagewayJunctions;
-(void)addJunction:(id)arg1 ;
-(void)_findTileEdgeJunctions;
-(void)initializeJunctionInfos;
-(id)junctionForGeoJunction:(SCD_Struct_VK443*)arg1 ;
-(id)junctionAtCoordinate:(Matrix<float, 2, 1>)arg1 ;
-(id)findTileEdgeJunctionAtCoordinate:(Matrix<float, 2, 1>)arg1 ;
-(void)appendNavJunctionsInWorldRect:(const Box<double, 2>*)arg1 junctions:(id)arg2 ;
-(void)findOppositeCarriagewayJunctionsWithRouteFeatures:(unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> > > >*)arg1 distanceThreshold:(double)arg2 ;
-(char)oppositeCarriagewayJunctionsValid;
-(void)setOppositeCarriagewayJunctionsValid:(char)arg1 ;
@end
