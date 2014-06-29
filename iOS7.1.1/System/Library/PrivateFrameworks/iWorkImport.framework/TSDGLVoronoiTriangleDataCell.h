/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDGLVoronoiTriangleDataCell : NSObject {

	unsigned long long _triangleCount;
	unsigned long long _vertexCount;
	SCD_Struct_TS478* _vertexData;
	SCD_Struct_TS479 _centerPoint;
	CGRect _bounds;

}

@property (nonatomic,readonly) unsigned long long triangleCount;              //@synthesize triangleCount=_triangleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS479* vertexData;                  //@synthesize vertexData=_vertexData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS479 centerPoint;                  //@synthesize centerPoint=_centerPoint - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
-(id)initWithTrianglePoints:(SCD_Struct_TS479*)arg1 ;
-(void)p_setupTriangleDataWithEdges:(vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > >*)arg1 ;
-(id)cellsBySplittingCellIntoTriangles;
-(id)initWithEdges:(vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > >*)arg1 ;
-(SCD_Struct_TS479*)vertexData;
-(void)dealloc;
-(CGRect)bounds;
-(id).cxx_construct;
-(SCD_Struct_TS479)centerPoint;
-(unsigned long long)vertexCount;
-(unsigned long long)triangleCount;
@end

