/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAnimationTimeSlice.h>

@class NSIndexSet;

@interface TSCH3DOrderedAnimationTimeSlice : TSCH3DAnimationTimeSlice {

	NSIndexSet* mElements;
	tvec2<int> mSize;
	vector<float, std::__1::allocator<float> >* mElemWeight;
	vector<float, std::__1::allocator<float> >* mElemOffset;

}
+(id)timeSliceWithIndexSet:(id)arg1 size:(const tvec2<int>*)arg2 ;
-(box<glm::detail::tvec1<float> >)rangeForIndex:(const tvec2<int>*)arg1 ;
-(void)setWeights:(const vector<float, std::__1::allocator<float> >*)arg1 ;
-(id)initWithIndexSet:(id)arg1 size:(const tvec2<int>*)arg2 ;
-(void)dealloc;
-(bool)containsIndex:(const tvec2<int>*)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

