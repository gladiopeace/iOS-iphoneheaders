/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexCoordGeneration.h>

@interface TSCH3DTexCoordGenerationCube : TSCH3DTexCoordGeneration {

	box<glm::detail::tvec3<float> > mBbox;

}
+(id)generatorWithBBox:(const box<glm::detail::tvec3<float> >*)arg1 ;
+(id)generatorWithBBox:(const box<glm::detail::tvec3<float> >*)arg1 transform:(const tmat4x4<float>*)arg2 ;
-(id)initWithBBox:(const box<glm::detail::tvec3<float> >*)arg1 ;
-(id)initWithBBox:(const box<glm::detail::tvec3<float> >*)arg1 transform:(const tmat4x4<float>*)arg2 ;
-(void)generateFromVertexArray:(const tvec3<float>*)arg1 normalArray:(const tvec3<float>*)arg2 numVertices:(long long)arg3 destination4D:(tvec4<float>*)arg4 ;
-(id).cxx_construct;
@end

