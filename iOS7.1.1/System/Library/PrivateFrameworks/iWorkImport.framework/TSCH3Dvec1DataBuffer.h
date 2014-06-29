/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFloatVectorDataBuffer.h>

@interface TSCH3Dvec1DataBuffer : TSCH3DFloatVectorDataBuffer {

	vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float> > >* mContainer;

}

@property (nonatomic,readonly) vector<glm::detail::tvec1<float>* container; 
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)elementsAtIndices:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)data;
-(vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float> > >*)container;
-(id).cxx_construct;
-(void)clear;
-(void).cxx_destruct;
-(unsigned long long)components;
@end

