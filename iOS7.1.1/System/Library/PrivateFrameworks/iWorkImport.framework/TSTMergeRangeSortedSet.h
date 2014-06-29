/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSTMergeRangeSortedSet : NSObject {

	set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> >* mSet;
	tree_const_iterator<TSTMergeRangeElem, const std::__1::__tree_node<TSTMergeRangeElem, void *> *, long>* mIter;
	NSObject<OS_dispatch_semaphore>* mSem;

}
-(bool)isCheckbox;
-(UIEdgeInsets)getPaddingInsets;
-(SCD_Struct_TS501)iter;
-(void)addRange:(SCD_Struct_TS501)arg1 andSize:(CGSize)arg2 andPaddingInsets:(UIEdgeInsets)arg3 andIsCheckbox:(bool)arg4 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(SCD_Struct_TS501)begin;
-(id).cxx_construct;
-(void)reset;
-(CGSize)getSize;
@end

