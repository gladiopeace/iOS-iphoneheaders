/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKDrawStyle.h>

@class NSString;

@interface VKRouteDrawStyle : VKDrawStyle {

	float _width;
	float _strokeWidth;
	VGLColor _strokeColor;
	VGLColor _fillColor;
	VGLColor _travelledColor;
	VGLColor _glossColor;
	NSString* _texture;
	NSString* _obscuredTexture;
	NSString* _travelledTexture;
	float _enlargementStartZoom;
	float _enlargementScale;
	float _enlargementMaxScale;
	float _brightness;
	bool _hasBrightness;
	float _arrowMinZoom;
	float _selectedArrowMinZoom;

}

@property (nonatomic,readonly) float width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) float strokeWidth;                        //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,readonly) VGLColor strokeColor;                     //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,readonly) VGLColor fillColor;                       //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) VGLColor travelledColor;                  //@synthesize travelledColor=_travelledColor - In the implementation block
@property (nonatomic,readonly) VGLColor glossColor;                      //@synthesize glossColor=_glossColor - In the implementation block
@property (nonatomic,readonly) NSString * texture;                       //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) NSString * obscuredTexture;               //@synthesize obscuredTexture=_obscuredTexture - In the implementation block
@property (nonatomic,readonly) NSString * travelledTexture;              //@synthesize travelledTexture=_travelledTexture - In the implementation block
@property (nonatomic,readonly) float enlargementStartZoom;               //@synthesize enlargementStartZoom=_enlargementStartZoom - In the implementation block
@property (nonatomic,readonly) float enlargementScale;                   //@synthesize enlargementScale=_enlargementScale - In the implementation block
@property (nonatomic,readonly) float enlargementMaxScale;                //@synthesize enlargementMaxScale=_enlargementMaxScale - In the implementation block
@property (nonatomic,readonly) float brightness;                         //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) bool hasBrightness;                       //@synthesize hasBrightness=_hasBrightness - In the implementation block
@property (nonatomic,readonly) float arrowMinZoom;                       //@synthesize arrowMinZoom=_arrowMinZoom - In the implementation block
@property (nonatomic,readonly) float selectedArrowMinZoom;               //@synthesize selectedArrowMinZoom=_selectedArrowMinZoom - In the implementation block
-(id)variant;
-(void)dealloc;
-(float)width;
-(VGLColor)fillColor;
-(VGLColor)strokeColor;
-(id).cxx_construct;
-(float)brightness;
-(float)strokeWidth;
-(id)texture;
-(bool)hasBrightness;
-(float)arrowMinZoom;
-(VGLColor)travelledColor;
-(VGLColor)glossColor;
-(id)obscuredTexture;
-(id)travelledTexture;
-(float)enlargementStartZoom;
-(float)enlargementScale;
-(float)enlargementMaxScale;
-(float)selectedArrowMinZoom;
-(void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned long long)arg2 globals:(id)arg3 ;
-(void)takeFromZoomInvariantProperties:(id)arg1 ;
@end

