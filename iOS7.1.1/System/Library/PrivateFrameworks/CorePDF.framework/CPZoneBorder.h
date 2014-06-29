/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CorePDF/CPCopying.h>

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {

	CGRect bounds;
	CPPage* page;
	NSMutableArray* ownerArray;
	NSMutableArray* graphicObjects;
	NSMutableArray* neighbors;
	NSMutableArray* intersections;
	bool isHorizontal;
	bool hasForwardVector;
	bool hasBackwardVector;
	double overhangMin;
	double overhangMax;

}
+(void)outerVertices:(CGPoint*)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3 ;
+(int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1 ;
+(void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(CGRect)arg3 ;
+(CGRect)extendRect:(CGRect)arg1 ;
+(void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isVertical;
-(id)page;
-(bool)isHorizontal;
-(long long)zOrder;
-(long long)compareXBounds:(id)arg1 ;
-(long long)compareYBounds:(id)arg1 ;
-(id)initSuper;
-(unsigned)graphicObjectCount;
-(id)graphicObjectAtIndex:(unsigned)arg1 ;
-(bool)hasNeighborShape:(id)arg1 ;
-(unsigned)indexOfIntersectionWith:(id)arg1 ;
-(unsigned)neighborCount;
-(id)neighborAtIndex:(unsigned)arg1 ;
-(bool)hasNeighborShape:(id)arg1 atSide:(int)arg2 ;
-(id)graphicObjects;
-(void)addGraphicObject:(id)arg1 ;
-(unsigned)intersectionCount;
-(bool)windsClockwiseOnto:(id)arg1 ;
-(bool)continues:(id)arg1 ;
-(bool)extractCycleTo:(id)arg1 goingForward:(bool)arg2 throughIntersectionIndex:(unsigned)arg3 returningTo:(id)arg4 atRect:(CGRect*)arg5 ;
-(id)copyWithoutIntersections;
-(bool)hasClockwiseVectorAtIndex:(unsigned)arg1 startingForward:(bool)arg2 ;
-(bool)hasCounterclockwiseVectorAtIndex:(unsigned)arg1 startingForward:(bool)arg2 ;
-(void)addToArray:(id)arg1 ;
-(void)trimToLastIntersections;
-(void)addNeighbor:(id)arg1 ;
-(void)removeFromArray;
-(void)removeLooseThreadsStartingFrom:(id)arg1 ;
-(id)initWithGraphicObject:(id)arg1 ;
-(void)addToArray:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeFromArrayAtIndex:(unsigned)arg1 ;
-(id)ownerArray;
-(void)removeGraphicObjectAtIndex:(unsigned)arg1 ;
-(void)removeNeighborAtIndex:(unsigned)arg1 ;
-(void)setHasForwardVector:(bool)arg1 ;
-(bool)hasForwardVector;
-(void)setHasBackwardVector:(bool)arg1 ;
-(bool)hasBackwardVector;
-(void)setSide:(int)arg1 ofPage:(id)arg2 ;
-(bool)intersectsWith:(id)arg1 atRect:(CGRect*)arg2 ;
-(void)instantiateVectors;
-(bool)hasVectorGoingForward:(bool)arg1 startingAtIndex:(unsigned*)arg2 ;
-(bool)extractCycleTo:(id)arg1 goingForward:(bool)arg2 startingAtIndex:(unsigned)arg3 ;
-(bool)crosses:(id)arg1 ;
-(void)combine:(id)arg1 ;
@end

