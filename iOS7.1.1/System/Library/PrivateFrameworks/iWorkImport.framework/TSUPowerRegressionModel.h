/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSURegressionModel.h>

@class NSMutableArray;

@interface TSUPowerRegressionModel : TSURegressionModel {

	double* mCoefficients;
	int mNumCoefficients;
	bool mAffine;
	double mIntercept;
	double mRSquared;
	int mNumSuperscriptRanges;
	NSMutableArray* mSuperscriptRangesArray;

}
-(id)initWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 makeAffine:(bool)arg5 desiredIntercept:(double)arg6 ;
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5 ;
-(int)regressionType;
-(int)numCoefficients;
-(double)coefficientAtIndex:(int)arg1 ;
-(double)rSquared;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray;
-(int)numSuperscriptRanges;
-(NSRange)superscriptRangeAtIndex:(int)arg1 ;
-(void)dealloc;
@end

