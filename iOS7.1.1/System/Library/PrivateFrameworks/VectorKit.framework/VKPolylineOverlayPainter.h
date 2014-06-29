/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlayPainter.h>
#import <VectorKit/VKPolylineObserver.h>

@class VKRouteLine, VGLTexture, GEORoute, NSSet, VKTileKeyList, VKAnimation, VGLRenderState, VKTrafficDrawStyle, VKPolylineOverlay;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver> {

	VKRouteLine* _routeLine;
	double _routeLineHalfWidthRegular;
	double _routeLineHalfWidthRealistic;
	bool _selected;
	VGLTexture* _selectedTextureRealistic;
	VGLTexture* _obscuredTextureRealistic;
	VGLTexture* _travelledTextureRealistic;
	GEORoute* _route;
	RouteLineStyle _style;
	SCD_Struct_VK42 _matrix;
	SCD_Struct_VK42 _inverseMatrix;
	NSSet* _previousTilesInView;
	VKTileKeyList* _previousKeysInView;
	double _simplificationEpsilon;
	VKAnimation* _fadeAnimation;
	float _alphaScale;
	VKAnimation* _arrowFadeAnimation;
	float _arrowAlphaScale;
	bool _showArrows;
	VKAnimation* _arrowCrossFadeAnimation;
	bool _showTraffic;
	bool _forceRoutelineUpdate;
	int _stencilValue;
	double _contentScale;
	VGLRenderState* _renderState;
	VKTrafficDrawStyle* _trafficDrawStyle;
	unsigned long long _targetDisplayStep;
	float _crossfadingDisplayStep;
	bool _wasInRealisticMode;

}

@property (assign,nonatomic) bool selected;                               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) GEORoute * route;                            //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) bool showTraffic;                            //@synthesize showTraffic=_showTraffic - In the implementation block
@property (nonatomic,readonly) VKPolylineOverlay * polyline; 
-(void)setRoute:(id)arg1 ;
-(id)route;
-(void)dealloc;
-(void)setSelected:(bool)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id).cxx_construct;
-(bool)selected;
-(void).cxx_destruct;
-(id)stylesheet;
-(void)stylesheetDidChange;
-(void)setContainerModel:(id)arg1 ;
-(void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3 ;
-(void)drawWithContext:(id)arg1 tiles:(id)arg2 ;
-(void)drawDebug:(id)arg1 tiles:(id)arg2 ;
-(bool)_shouldShowTraffic;
-(id)initWithOverlay:(id)arg1 ;
-(void)_didReceiveMemoryWarning;
-(id)polyline;
-(void)_releaseTextures;
-(float)routeLineWidthForCamera:(id)arg1 canvasSize:(CGSize)arg2 ;
-(void)drawWithContext:(id)arg1 tiles:(id)arg2 prepare:(bool)arg3 updateStencil:(bool)arg4 ;
-(void)updateRouteLineStencilValue:(int)arg1 ;
-(void)prepareToDrawWithContext:(id)arg1 ;
-(void)_drawRegularWithContext:(id)arg1 ;
-(void)_drawRealisticWithContext:(id)arg1 ;
-(void)_populateRenderBuffer:(/*^block*/ id)arg1 matrix:(const /*function pointer*/ void**)arg2 halfWidth:(float)arg3 context:(id)arg4 ;
-(void)setNeedsLayoutForPolyline:(id)arg1 ;
-(void)drawArrowsWithContext:(id)arg1 ;
-(bool)showTraffic;
-(void)setShowTraffic:(bool)arg1 ;
@end

