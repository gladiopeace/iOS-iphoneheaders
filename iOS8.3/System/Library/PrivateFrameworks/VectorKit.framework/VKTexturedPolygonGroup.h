/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:44 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKPolygonGroup.h>

@class VKSharedResources, GEOFeatureStyleAttributes;

@interface VKTexturedPolygonGroup : VKPolygonGroup {

	VKSharedResources* _sharedResources;
	shared_ptr<ggl::Texture2D>* _texture;
	shared_ptr<ggl::Texture2D>* _textureVariant;
	char _needsTextureUpdate;

}

@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) Texture2D* texture; 
@property (nonatomic,readonly) Texture2D* textureVariant; 
-(void)dealloc;
-(Texture2D*)texture;
-(void)updateTexturesIfNecessary;
-(Texture2D*)textureVariant;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(void)setNeedsTextureUpdate;
-(void)updateTextures;
-(id)initWithStyleQuery:(shared_ptr<md::StyleQuery>*)arg1 tile:(id)arg2 fixedAroundCentroid:(const Matrix<float, 2, 1>*)arg3 contentScale:(float)arg4 sharedResources:(id)arg5 ;
-(shared_ptr<ggl::Texture2D>*)_textureForName:(id)arg1 ;
@end
