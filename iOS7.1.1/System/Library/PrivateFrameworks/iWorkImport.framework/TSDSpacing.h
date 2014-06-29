/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableSet, CALayer, TSDSwappableAxesGeometry;

@interface TSDSpacing : NSObject {

	NSMutableSet* mSpacingRects;
	NSMutableSet* mAssociatedFrames;
	CALayer* mLayer;
	bool mHasBeenDrawn;
	TSDSwappableAxesGeometry* mHorizontalGeom;

}

@property (nonatomic,readonly) NSMutableSet * associatedFrames; 
-(void)addSpacingRect:(CGRect)arg1 forFrame:(CGRect)arg2 andFrame:(CGRect)arg3 ;
-(id)initWithGuideType:(int)arg1 withSpacingRect:(CGRect)arg2 forFrame:(CGRect)arg3 andFrame:(CGRect)arg4 ;
-(int)integerOffset;
-(id)associatedFrames;
-(int)guideType;
-(double)exactOffset;
-(void)needsRedraw;
-(bool)needsGuideForEdge:(int)arg1 ofRect:(CGRect)arg2 ;
-(bool)containsNonIntersectingSpacingRectsWithRect:(CGRect)arg1 forEdge:(int)arg2 ;
-(id)spacingRectsLayerForGuideRect:(CGRect)arg1 withICC:(id)arg2 ;
-(void)updateSpacingUIWithICC:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
@end

