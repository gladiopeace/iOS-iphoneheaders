/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeLayout.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPColumnMetrics.h>
#import <iWorkImport/TSWPStorageObserver.h>

@protocol TSWPShapeLayoutDelegate;
@class TSWPLayout, TSDWrapPolygon, TSWPPadding;

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver> {

	TSWPLayout* _containedLayout;
	TSDWrapPolygon* _cachedInteriorWrapPolygon;
	<TSWPShapeLayoutDelegate>* _delegate;
	bool _observingStorage;

}

@property (nonatomic,readonly) TSWPLayout * containedLayout;                //@synthesize containedLayout=_containedLayout - In the implementation block
@property (nonatomic,readonly) bool autosizes; 
@property (assign) <TSWPShapeLayoutDelegate> * delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) bool alwaysStartsNewTarget; 
@property (nonatomic,readonly) bool shrinkTextToFit; 
@property (nonatomic,readonly) bool columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(double)maxAutoGrowWidthForTextLayout:(id)arg1 ;
-(void)invalidateSize;
-(void)processChangedProperty:(int)arg1 ;
-(bool)resizeMayChangeAspectRatio;
-(bool)canAspectRatioLockBeChangedByUser;
-(bool)supportsRotation;
-(void)updateChildrenFromInfo;
-(id)dependentLayouts;
-(id)childSearchTargets;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(void)insertChild:(id)arg1 below:(id)arg2 ;
-(void)insertChild:(id)arg1 above:(id)arg2 ;
-(id)interiorWrapPath;
-(id)pathSource;
-(CGAffineTransform)computeLayoutTransform;
-(bool)isInvisibleAutosizingShape;
-(CGSize)adjustedInsets;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(id)layoutMargins;
-(bool)alwaysStartsNewTarget;
-(bool)shrinkTextToFit;
-(bool)columnsAreLeftToRight;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(bool)textLayoutShouldWrapAroundExternalDrawables:(id)arg1 ;
-(bool)textLayoutShouldLayoutVertically:(id)arg1 ;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(id)textWrapper;
-(id)interiorClippingPath;
-(CGPoint)autosizePositionOffset;
-(void)createContainedLayoutForEditing;
-(id)instructionalStorageForContainedStorage:(id)arg1 storageKind:(int)arg2 ;
-(bool)autosizes;
-(id)containedLayout;
-(void)destroyContainedLayoutForInstructionalText;
-(void)createContainedLayoutForInstructionalText;
-(id)interiorWrapPolygon;
-(CGAffineTransform)autosizedTransform;
-(CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 ;
-(CGPoint)autosizePositionOffsetForFixedWidth:(bool)arg1 height:(bool)arg2 ;
-(unsigned)cropLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 ;
-(id)initWithInfo:(id)arg1 ;
-(void)invalidatePath;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setGeometry:(id)arg1 ;
-(unsigned long long)columnCount;
-(void)setChildren:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(id)children;
@end

