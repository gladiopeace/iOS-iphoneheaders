/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class CALayer, TSUImage;

@interface TSKHighlightController : NSObject {

	CALayer* _imageLayer;
	TSUImage* _image;
	CGRect _overallRect;
	CGAffineTransform _canvasTransform;
	CGAffineTransform _layerTransform;
	CALayer* _containingLayer;
	double _viewScale;
	CGPathRef _path;

}

@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) double viewScale;                         //@synthesize viewScale=_viewScale - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                        //@synthesize containingLayer=_containingLayer - In the implementation block
@property (assign,nonatomic) CGPathRef path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) TSUImage * image;                         //@synthesize image=_image - In the implementation block
-(double)viewScale;
-(bool)drawRoundedRect;
-(void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2 ;
-(CGRect)buildLayersForPath:(CGPathRef)arg1 withImage:(id)arg2 ;
-(void)setCanvasTransform:(CGAffineTransform)arg1 layerTransform:(CGAffineTransform)arg2 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)layer;
-(CGPathRef)path;
-(id)image;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)hide;
-(void)setPath:(CGPathRef)arg1 ;
-(void)reset;
-(void)disconnect;
-(void)setViewScale:(double)arg1 ;
@end

