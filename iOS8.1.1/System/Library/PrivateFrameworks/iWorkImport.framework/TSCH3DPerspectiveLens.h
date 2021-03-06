/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLens.h>

@interface TSCH3DPerspectiveLens : TSCH3DLens {

	float mFOV;
	float mAspect;

}

@property (assign,nonatomic) float fov; 
@property (assign,nonatomic) float aspect; 
@property (nonatomic,readonly) float width; 
@property (nonatomic,readonly) float height; 
-(void)setFov:(float)arg1 ;
-(void)calculateCullingPlanes:(vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > >*)arg1 ;
-(FrustumRect)frustumRect;
-(id)narrowedByNormalizedBounds:(box<glm::detail::tvec2<float> >*)arg1 ;
-(id)shiftedByPercentage:(tvec2<float>*)arg1 ;
-(FrustumRect)frustumRectAtDistance:(float)arg1 ;
-(float)fov;
-(float)aspect;
-(void)setAspect:(float)arg1 ;
-(id)asFrustumLens;
-(id)matrixDescription;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)width;
-(float)height;
-(tmat4x4<float>)matrix;
@end

