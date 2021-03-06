/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateColorBehavior, PDAudioNode, PDVideoNode, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDCmdBehavior;

@interface PDTimeNodeUnion : NSObject {

	PDAnimateTimeBehavior* mTimeBehavior;
	PDAnimateEffectBehavior* mEffectBehavior;
	PDAnimateMotionBehavior* mMotionBehavior;
	PDAnimateRotateBehavior* mRotateBehavior;
	PDAnimateScaleBehavior* mScaleBehavior;
	PDAnimateColorBehavior* mColorBehavior;
	PDAudioNode* mAudio;
	PDVideoNode* mVideo;
	PDParallelTimeNode* mParallelTimeNodeGroup;
	PDSequentialTimeNode* mSequentialTimeNodeGroup;
	PDSetBehavior* mSetBehavior;
	PDCmdBehavior* mCmdBehavior;

}
-(void)dealloc;
-(id)init;
-(void)setVideo:(id)arg1 ;
-(void)setSequential:(id)arg1 ;
-(void)setScaleBehavior:(id)arg1 ;
-(id)scaleBehavior;
-(id)timeBehavior;
-(id)colorBehavior;
-(id)effectBehavior;
-(id)motionBehavior;
-(id)rotateBehavior;
-(id)cmdBehavior;
-(void)setParallel:(id)arg1 ;
-(void)setAudio:(id)arg1 ;
-(void)setTimeBehavior:(id)arg1 ;
-(void)setColorBehavior:(id)arg1 ;
-(void)setEffectBehavior:(id)arg1 ;
-(void)setMotionBehavior:(id)arg1 ;
-(void)setRotateBehavior:(id)arg1 ;
-(void)setCmdBehavior:(id)arg1 ;
-(id)commonBehavior;
-(id)audio;
-(id)video;
-(id)parallel;
-(id)sequential;
-(id)behavior;
-(void)setBehavior:(id)arg1 ;
@end

