/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CATiledLayer : CALayer

@property (assign) CGColorRef fillColor; 
@property (assign) double maximumTileScale; 
@property (getter=isDrawingEnabled) bool drawingEnabled; 
@property (assign) unsigned long long levelsOfDetail; 
@property (assign) unsigned long long levelsOfDetailBias; 
@property (assign) CGSize tileSize; 
+(bool)shouldDrawOnMainThread;
+(unsigned)prefetchedTiles;
+(id)defaultValueForKey:(id)arg1 ;
+(bool)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(double)fadeDuration;
-(bool)isDrawingEnabled;
-(double)maximumTileScale;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(bool)canDrawRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(void)setMaximumTileScale:(double)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)setDrawingEnabled:(bool)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)displayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(bool)shouldArchiveValueForKey:(id)arg1 ;
-(bool)_canDisplayConcurrently;
-(unsigned long long)levelsOfDetail;
-(unsigned long long)levelsOfDetailBias;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)setTileSize:(CGSize)arg1 ;
-(void)_dealloc;
-(void)_display;
-(CGSize)tileSize;
-(void)setLevelsOfDetail:(unsigned long long)arg1 ;
-(void)setLevelsOfDetailBias:(unsigned long long)arg1 ;
@end

