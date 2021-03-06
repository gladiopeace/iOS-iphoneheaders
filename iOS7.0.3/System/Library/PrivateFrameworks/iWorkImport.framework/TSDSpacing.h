/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableSet, CALayer, TSDSwappableAxesGeometry;

@interface TSDSpacing : NSObject {

	NSMutableSet* mSpacingRects;
	NSMutableSet* mAssociatedFrames;
	CALayer* mLayer;
	BOOL mHasBeenDrawn;
	TSDSwappableAxesGeometry* mHorizontalGeom;

}

@property (nonatomic,readonly) NSMutableSet * associatedFrames; 
-(void)addSpacingRect:(CGRect)arg1 forFrame:(CGRect)arg2 andFrame:(CGRect)arg3 ;
-(id)initWithGuideType:(int)arg1 withSpacingRect:(CGRect)arg2 forFrame:(CGRect)arg3 andFrame:(CGRect)arg4 ;
-(int)integerOffset;
-(id)associatedFrames;
-(int)guideType;
-(float)exactOffset;
-(void)needsRedraw;
-(BOOL)needsGuideForEdge:(int)arg1 ofRect:(CGRect)arg2 ;
-(BOOL)containsNonIntersectingSpacingRectsWithRect:(CGRect)arg1 forEdge:(int)arg2 ;
-(id)spacingRectsLayerForGuideRect:(CGRect)arg1 withICC:(id)arg2 ;
-(void)updateSpacingUIWithICC:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)compare:(id)arg1 ;
@end

