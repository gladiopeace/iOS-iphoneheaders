/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3Dvec3DataBuffer, TSCH3DPrefilteredLineRenderer;

@interface TSCH3DChartSelectedElementHighlightSceneObjectProperties : NSObject {

	TSCH3Dvec3DataBuffer* edgeVertices;
	TSCH3DPrefilteredLineRenderer* mRenderer;
	unsigned long long mSelectedSeriesIndex;
	tvec4<float> mColor;
	TSCH3Dvec3DataBuffer* mEdgeVertices;

}

@property (nonatomic,retain) TSCH3Dvec3DataBuffer * edgeVertices; 
@property (nonatomic,readonly) TSCH3DPrefilteredLineRenderer * renderer; 
@property (assign,nonatomic) unsigned long long selectedSeriesIndex; 
@property (assign,nonatomic) tvec4<float> color; 
-(id)renderer;
-(void)setSelectedSeriesIndex:(unsigned long long)arg1 ;
-(id)edgeVertices;
-(void)setEdgeVertices:(id)arg1 ;
-(unsigned long long)selectedSeriesIndex;
-(void)dealloc;
-(id)init;
-(tvec4<float>)color;
-(void)setColor:(tvec4<float>)arg1 ;
-(id).cxx_construct;
@end

