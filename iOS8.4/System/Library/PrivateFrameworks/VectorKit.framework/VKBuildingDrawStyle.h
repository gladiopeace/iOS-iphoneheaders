/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRenderStyle.h>

@interface VKBuildingDrawStyle : VKRenderStyle
+(int)renderStyleID;
-(Matrix<float, 4, 1>)topColorAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)flatColorAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)footprintStrokeColorAtZoom:(float)arg1 ;
-(float)footprintStrokeWidthAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)facadeColorAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)strokeColor3DAtZoom:(float)arg1 ;
-(float)strokeWidth3DAtZoom:(float)arg1 ;
-(BOOL)visibleAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)landmarkColorAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)outlineColorAtZoom:(float)arg1 ;
-(BOOL)outlineAtZoom:(float)arg1 ;
-(int)roofStyle;
-(BOOL)hasStrokeColor3D;
-(BOOL)hasStrokeWidth3D;
@end
