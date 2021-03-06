/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDDiagram, OADOrientedBounds, OADGroup, NSMutableArray, OADShapeStyle, OADDrawingTheme;

@interface ODIState : NSObject {

	ODDDiagram* mDiagram;
	OADOrientedBounds* mDiagramOrientedBounds;
	CGRect mLogicalBounds;
	float mScale;
	OADGroup* mGroup;
	NSMutableArray* mPresentationNames;
	NSMutableArray* mDefaultStyleLabelNames;
	int mPointCount;
	int mPointIndex;
	OADShapeStyle* mTextStyle;
	OADDrawingTheme* mDrawingTheme;

}
-(void)dealloc;
-(float)scale;
-(id).cxx_construct;
-(void)setGroup:(id)arg1 ;
-(id)group;
-(id)textStyle;
-(CGRect)logicalBounds;
-(id)diagram;
-(int)pointCount;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)drawingTheme;
-(void)setTextStyle:(id)arg1 ;
-(void)setLogicalBounds:(CGRect)arg1 maintainAspectRatio:(BOOL)arg2 ;
-(void)setPresentationName:(id)arg1 forPointType:(int)arg2 ;
-(id)diagramOrientedBounds;
-(void)setPointCount:(int)arg1 ;
-(void)setPointIndex:(int)arg1 ;
-(id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3 ;
-(id)presentationNameForPointType:(int)arg1 ;
-(int)pointIndex;
-(id)defaultStyleLabelNameForPointType:(int)arg1 ;
-(void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2 ;
@end

