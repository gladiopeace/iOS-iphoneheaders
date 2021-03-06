/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStyleManagerObserver.h>

@class VKMapModel, NSString, VKStyleManager;

@interface VKSkyModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {

	VKMapModel* _mapModel;
	float _skyStartOffset;
	Matrix<float, 4, 1> _fillColor;
	Matrix<float, 4, 1> _horizonColor;
	shared_ptr<ggl::Sky::SkyUniformData>* _uniformData;
	shared_ptr<ggl::Sky::Shader::Setup>* _shaderSetup;
	shared_ptr<ggl::Sky::SkyMesh>* _mesh;
	shared_ptr<ggl::IndexDataTyped<unsigned short> >* _indexData;
	shared_ptr<ggl::RenderState>* _gglRenderState;
	RenderItem* _renderItem;
	char _needsNewStyle;

}

@property (assign,nonatomic) VKMapModel * mapModel;                        //@synthesize mapModel=_mapModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) VKStyleManager * styleManager; 
+(char)reloadOnStylesheetChange;
-(void)dealloc;
-(id)init;
-(void)setFillColor:(Matrix<float, 4, 1>)arg1 ;
-(Matrix<float, 4, 1>)fillColor;
-(VKStyleManager *)styleManager;
-(void)setMapModel:(VKMapModel *)arg1 ;
-(char)shouldLayoutWithoutStyleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)stylesheetDidChange;
-(unsigned long long)mapLayerPosition;
-(VKMapModel *)mapModel;
-(void)setHorizonColor:(Matrix<float, 4, 1>)arg1 ;
-(Matrix<float, 4, 1>)horizonColor;
-(void)updateStyle;
@end

