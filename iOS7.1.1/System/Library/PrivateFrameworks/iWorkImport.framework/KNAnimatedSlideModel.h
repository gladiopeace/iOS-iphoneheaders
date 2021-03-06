/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class KNAnimatedSlideView, NSArray, KNPlaybackSession, NSMutableArray, TSUNoCopyDictionary, NSDictionary;

@interface KNAnimatedSlideModel : NSObject {

	KNAnimatedSlideView* mASV;
	NSArray* mBuilds;
	NSArray* mBuildChunks;
	KNPlaybackSession* mSession;
	NSMutableArray* mBuildEvents;
	TSUNoCopyDictionary* mInfoToAnimatedBuildMap;
	NSDictionary* mInfoMap;
	NSArray* mInfos;
	NSMutableArray* mAnimatedBuilds;

}

@property (nonatomic,readonly) NSArray * infos; 
@property (nonatomic,readonly) NSArray * animatedBuilds; 
@property (nonatomic,readonly) NSDictionary * infoMap; 
@property (nonatomic,readonly) NSArray * renderers; 
-(id)p_convertToBuildEvents:(id)arg1 ;
-(void)p_insertInitialMovies;
-(long long)p_eventNumberForInfo:(id)arg1 key:(id)arg2 defaultResult:(long long)arg3 ;
-(id)p_createBuildAnimationRecords:(id)arg1 info:(id)arg2 event:(long long)arg3 start:(double)arg4 eventStart:(double)arg5 animateAtEndOfPreviousBuild:(bool)arg6 previousAnimatedBuild:(id)arg7 movieDrawables:(id)arg8 ;
-(void)p_updatePreviousAndFinalAttributes;
-(id)p_createMovieBuild:(id)arg1 stageIndex:(long long)arg2 buildChunk:(id)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 event:(long long)arg6 animateAtEndOfPreviousBuild:(bool)arg7 ;
-(id)p_animatedBuildForInfo:(id)arg1 event:(long long)arg2 buildIn:(bool)arg3 ;
-(bool)p_determineVisiblityOfInfo:(id)arg1 inOverloadedEvent:(long long)arg2 duringEvent:(long long)arg3 ;
-(id)p_createInfoListFromRendererList:(id)arg1 ;
-(id)renderers;
-(id)infos;
-(id)initWithBuilds:(id)arg1 buildChunks:(id)arg2 infos:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5 ;
-(id)finalActionEffectForDrawable:(id)arg1 ;
-(id)animatedBuildForInfo:(id)arg1 aroundEvent:(long long)arg2 isAtEndOfBuild:(bool*)arg3 ;
-(id)createInfoToBuildMap:(id)arg1 ;
-(Class)effectClassFromBuild:(id)arg1 duration:(double)arg2 ;
-(id)animatedBuilds;
-(id)animatedBuildForInfo:(id)arg1 atEvent:(long long)arg2 ;
-(id)actionEffectForDrawable:(id)arg1 atBeginningOfEvent:(long long)arg2 ;
-(void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(bool)info:(id)arg1 isVisibleDuringEvent:(long long)arg2 ;
-(long long)inEventForInfo:(id)arg1 ;
-(long long)outEventForInfo:(id)arg1 ;
-(id)buildChunksForEventRange:(NSRange)arg1 ;
-(double)durationForEventIndexes:(id)arg1 ;
-(NSRange)eventRangeForInfos:(id)arg1 ;
-(id)firstAnimatedBuildForInfo:(id)arg1 ;
-(id)lastAnimatedBuildForInfo:(id)arg1 ;
-(id)previousAnimatedBuildForInfo:(id)arg1 priorToBuild:(id)arg2 ;
-(id)previousBuildInForInfo:(id)arg1 priorToBuild:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)setTransition:(id)arg1 ;
-(id)transition;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(id)infoMap;
@end

