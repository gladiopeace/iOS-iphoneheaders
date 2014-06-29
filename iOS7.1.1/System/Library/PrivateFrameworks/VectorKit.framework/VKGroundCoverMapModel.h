/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKMapTileModel.h>
#import <VectorKit/VKMapLayer.h>

@class NSMutableArray, VKPolygonDrawStyle, VGLRenderState, VGLTexture, VGLMesh;

@interface VKGroundCoverMapModel : VKMapTileModel <VKMapLayer> {

	NSMutableArray* _sortedTiles;
	VKPolygonDrawStyle* _landStyle;
	bool _usePlainFillColor;
	bool _hasVegetationSettings;
	float _alpha;
	float _brightness;
	bool _showVegetation;
	VGLRenderState* _renderState;
	VGLTexture* _landTexture;
	VGLTexture* _landTextureVariant;
	double _layoutMaxZ;
	double _layoutContentScale;
	bool _needsLandSettingsUpdate;
	VGLMesh* _groundMesh;
	int _groundMeshCapacity;

}

@property (nonatomic,readonly) bool shouldEverShowVegetation; 
+(bool)reloadOnStylesheetChange;
+(bool)reloadOnActiveTileGroupChange;
-(void)dealloc;
-(id)init;
-(void)setActive:(bool)arg1 ;
-(void)reset;
-(unsigned long long)mapLayerPosition;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(bool)shouldEverShowVegetation;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)activeTileGroupChanged;
-(void)updateVegetationSettingsFromStylesheet;
-(void)loadLandSettingsForLevelOfDetail:(unsigned long long)arg1 scale:(double)arg2 ;
-(id)groundMeshForTiles:(id)arg1 relativeToTile:(id)arg2 ;
@end

