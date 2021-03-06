/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, CPMLModelEvaluate;

@interface CPMLModel : NSObject {

	NSString* _savedPlistPath;
	NSString* _modelPath;
	CPMLModelEvaluate* cpModelEvaluate;

}

@property (nonatomic,retain) CPMLModelEvaluate * cpModelEvaluate; 
-(char)reset;
-(void)setCpModelEvaluate:(CPMLModelEvaluate *)arg1 ;
-(id)initWithModelPath:(id)arg1 withPropertyListPath:(id)arg2 ;
-(id)getPropertyList;
-(id)evalString:(id)arg1 ;
-(id)evalNSObjectV:(id)arg1 ;
-(id)evalArray:(id)arg1 ;
-(id)evalDict:(id)arg1 ;
-(void)boundResult:(id)arg1 ;
-(id)initWithModelPath:(id)arg1 withConfiguration:(id)arg2 ;
-(char)updateModelWithDB:(id)arg1 ;
-(char)updateModelWithCPDB:(id)arg1 ;
-(CPMLModelEvaluate *)cpModelEvaluate;
@end

