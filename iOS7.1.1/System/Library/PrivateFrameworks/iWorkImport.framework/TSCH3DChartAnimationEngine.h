/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartRep, TSCH3DChartAnimation, TSCH3DScene;

@interface TSCH3DChartAnimationEngine : NSObject <TSCHUnretainedParent> {

	TSCH3DChartRep* mRep;
	long long mStage;
	TSCH3DChartAnimation* mAnimation;

}

@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (nonatomic,readonly) TSCH3DScene * layoutScene; 
@property (nonatomic,retain) Class animationClass; 
@property (nonatomic,readonly) TSCH3DChartAnimation * animation; 
@property (assign,nonatomic) long long stage; 
+(id)animationEngineWithRep:(id)arg1 ;
-(void)clearParent;
-(id)initWithRep:(id)arg1 ;
-(id)layoutScene;
-(void)updateTimings;
-(Class)animationClass;
-(void)setAnimationClass:(Class)arg1 ;
-(id)scene;
-(void)dealloc;
-(id)animation;
-(void)update:(float)arg1 ;
-(long long)stage;
-(void)setStage:(long long)arg1 ;
@end

