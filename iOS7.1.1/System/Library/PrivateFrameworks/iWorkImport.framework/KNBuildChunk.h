/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>
#import <iWorkImport/KNInspectableAnimation.h>

@class NSSet, KNBuild, NSArray, NSString, KNSlide;

@interface KNBuildChunk : TSPContainedObject <KNInspectableAnimation> {

	KNBuild* mBuild;
	unsigned long long mIndexInBuild;
	double mDelay;
	bool mOwnsDelay;
	double mDuration;
	bool mOwnsDuration;
	bool mAutomatic;
	bool mOwnsAutomatic;
	unsigned long long mReferent;
	bool mOwnsReferent;

}

@property (nonatomic,readonly) KNBuild * build; 
@property (nonatomic,readonly) unsigned long long indexInBuild; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) bool ownsDuration; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) bool ownsDelay; 
@property (assign,getter=isAutomatic,nonatomic) bool automatic; 
@property (assign,nonatomic) bool ownsAutomatic; 
@property (assign,nonatomic) unsigned long long referent; 
@property (assign,nonatomic) bool ownsReferent; 
@property (nonatomic,readonly) unsigned long long indexOnSlide; 
@property (nonatomic,readonly) unsigned long long deliveryGroupIndex; 
@property (nonatomic,readonly) bool isFirstInBuild; 
@property (nonatomic,readonly) bool isFirstOnSlide; 
@property (getter=isActive,nonatomic,readonly) bool active; 
@property (nonatomic,readonly) unsigned long long activeIndexOnSlide; 
@property (getter=isAutomaticWithPreviousChunk,nonatomic,readonly) bool automaticWithPreviousChunk; 
@property (nonatomic,readonly) unsigned long long eventTrigger; 
@property (nonatomic,readonly) NSArray * availableEventTriggers; 
@property (nonatomic,readonly) bool supportsWithStart; 
@property (nonatomic,readonly) bool hasComplement; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) KNSlide * slide; 
@property (nonatomic,readonly) NSSet * inspectableAttributes; 
@property (nonatomic,readonly) bool canEditAnimations; 
-(void)saveToArchive:(BuildChunkArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const BuildChunkArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(unsigned long long)indexInBuild;
-(bool)ownsDelay;
-(bool)ownsDuration;
-(bool)ownsAutomatic;
-(bool)ownsReferent;
-(unsigned long long)referent;
-(id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 copyingAttributesFromChunk:(id)arg3 ;
-(id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 ;
-(void)setReferent:(unsigned long long)arg1 ;
-(void)setOwnsDuration:(bool)arg1 ;
-(void)setOwnsDelay:(bool)arg1 ;
-(void)setOwnsAutomatic:(bool)arg1 ;
-(void)setOwnsReferent:(bool)arg1 ;
-(void)p_invalidateSlideCaches;
-(unsigned long long)eventTrigger;
-(unsigned long long)indexOnSlide;
-(bool)p_canBuildWithChunk:(id)arg1 checkOtherChunksBuildingWithThisChunk:(bool)arg2 ;
-(bool)p_chunksBuildingWithThisChunkCanBuildWithChunk:(id)arg1 ;
-(id)p_chunksBuildingWithThisChunk;
-(bool)isAutomaticWithPreviousChunk;
-(id)p_previousChunkOnSlide;
-(bool)canBuildWithChunk:(id)arg1 ;
-(bool)supportsWithStart;
-(bool)hasComplement;
-(unsigned long long)deliveryGroupIndex;
-(id)p_stringForReferent:(unsigned long long)arg1 ;
-(bool)canEditAnimations;
-(id)inspectableAttributes;
-(id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 referent:(unsigned long long)arg3 copyingRemainingAttributesFromChunk:(id)arg4 ;
-(id)availableEventTriggers;
-(bool)isFirstInBuild;
-(bool)isFirstOnSlide;
-(unsigned long long)activeIndexOnSlide;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(bool)isActive;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(id)title;
-(double)delay;
-(void)reset;
-(bool)isAutomatic;
-(void)setAutomatic:(bool)arg1 ;
-(id)build;
-(id)slide;
@end
