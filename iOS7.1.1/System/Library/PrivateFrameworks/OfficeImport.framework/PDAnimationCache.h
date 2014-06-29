/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PDAnimationTarget, PDAnimateMotionBehavior, PDBuild, NSString;

@interface PDAnimationCache : NSObject {

	int mNodeType;
	int mPresetId;
	int mPresetSubType;
	int mPresetClass;
	PDAnimationTarget* mTarget;
	bool mHasDelay;
	double mDelay;
	bool mHasDuration;
	double mDuration;
	bool mHasDirection;
	double mDirection;
	bool mHasPartCount;
	int mPartCount;
	PDAnimateMotionBehavior* mMotionPath;
	bool mHasValue;
	double mValue;
	PDBuild* mBuild;
	int mIterateType;
	bool mIsHead;
	int mLevel;
	NSString* mGroupId;

}

@property (nonatomic,retain) PDAnimationTarget * target; 
@property (assign,nonatomic) int nodeType; 
@property (assign,nonatomic) int presetId; 
@property (assign,nonatomic) int presetSubType; 
@property (assign,nonatomic) int presetClass; 
@property (assign,nonatomic) int iterateType; 
@property (assign,nonatomic) bool hasDelay; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) bool hasDuration; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) bool hasDirection; 
@property (assign,nonatomic) double direction; 
@property (assign,nonatomic) bool hasPartCount; 
@property (assign,nonatomic) int partCount; 
@property (nonatomic,retain) PDAnimateMotionBehavior * motionPath; 
@property (assign,nonatomic) bool hasValue; 
@property (assign,nonatomic) double value; 
@property (nonatomic,retain) NSString * groupId; 
@property (assign,nonatomic) bool isHead; 
@property (assign,nonatomic) int level; 
@property (nonatomic,retain) PDBuild * build; 
+(void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3 ;
+(void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3 ;
+(void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3 ;
+(id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned)arg2 ;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(double)value;
-(id)target;
-(void)setDirection:(double)arg1 ;
-(double)direction;
-(double)delay;
-(int)nodeType;
-(bool)hasDirection;
-(bool)hasDuration;
-(void)setHasDuration:(bool)arg1 ;
-(id)groupId;
-(id)build;
-(void)setPresetId:(int)arg1 ;
-(void)setPresetSubType:(int)arg1 ;
-(int)presetClass;
-(bool)hasDelay;
-(void)setGroupId:(id)arg1 ;
-(int)presetSubType;
-(int)presetId;
-(id)motionPath;
-(void)setMotionPath:(id)arg1 ;
-(void)setBuild:(id)arg1 ;
-(int)iterateType;
-(bool)hasPartCount;
-(int)partCount;
-(void)setPartCount:(int)arg1 ;
-(bool)hasValue;
-(bool)isHead;
-(id)initWithAnimationInfo:(id)arg1 ;
-(void)setNodeType:(int)arg1 ;
-(void)setPresetClass:(int)arg1 ;
-(void)setIterateType:(int)arg1 ;
-(void)setHasDelay:(bool)arg1 ;
-(void)setHasDirection:(bool)arg1 ;
-(void)setHasPartCount:(bool)arg1 ;
-(void)setHasValue:(bool)arg1 ;
-(void)setIsHead:(bool)arg1 ;
@end

