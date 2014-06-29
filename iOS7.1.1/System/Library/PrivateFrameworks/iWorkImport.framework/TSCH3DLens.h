/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSCH3DLens : NSObject <NSCopying> {

	float mNear;
	float mFar;

}

@property (assign,nonatomic) float near; 
@property (assign,nonatomic) float far; 
+(id)lens;
-(void)setNear:(float)arg1 ;
-(void)setFar:(float)arg1 ;
-(float)near;
-(float)far;
-(void)calculateCullingPlanes:(vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > >*)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
@end

