/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartShadowsSceneObject.h>

@interface TSCH3DChartPerspectiveShadowsSceneObject : TSCH3DChartShadowsSceneObject
+(id)blurParametersArray;
-(id)createShadowsRenderer;
-(id)createCamera;
-(void)updateShadowPlane:(id)arg1 texcoords:(id)arg2 scene:(id)arg3 blurslack:(float)arg4 angle:(float)arg5 quality:(float)arg6 planePadding:(box<glm::detail::tvec3<float> >)arg7 ;
-(void)updateCoordsAndTexcoords:(const box<glm::detail::tvec3<float> >*)arg1 camera:(id)arg2 quad:(id)arg3 texcoords:(id)arg4 ;
@end

