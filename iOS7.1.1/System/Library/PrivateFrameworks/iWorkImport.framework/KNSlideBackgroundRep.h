/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {

	CALayer* mBlackBackgroundLayer;
	bool mLayerNeedsUpdate;
	bool mFillCanApplyToCALayer;

}

@property (readonly) KNSlideBackgroundInfo * slideBackgroundInfo; 
+(id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)didUpdateLayer:(id)arg1 ;
-(bool)directlyManagesLayerContent;
-(id)textureForContext:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(id)additionalLayersUnderLayer;
-(bool)wantsToDistortWithImagerContext;
-(id)slideBackgroundInfo;
-(void)dealloc;
-(bool)isOpaque;
-(bool)isSelectable;
-(void)drawInContext:(CGContextRef)arg1 ;
-(int)tilingMode;
@end

