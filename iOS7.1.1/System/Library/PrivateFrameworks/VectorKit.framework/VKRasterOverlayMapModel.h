/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKMapTileModel.h>
#import <VectorKit/VKMapLayer.h>

@class VGLRenderState, NSMutableArray;

@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer> {

	VGLRenderState* _renderState;
	NSMutableArray* _sortedTiles;
	unsigned long long _level;

}
-(void)dealloc;
-(void)reset;
-(unsigned long long)mapLayerPosition;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(id)initWithLevel:(unsigned long long)arg1 ;
@end
