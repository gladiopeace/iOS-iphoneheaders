/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSISConstraint.h>

@class NSString;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {

	id _container;
	id _firstItem;
	id _secondItem;
	float _constant;
	float _loweredConstant;
	id _markerAndPositiveExtraVar;
	id _negativeExtraVar;
	unsigned long long _layoutConstraintFlags;
	float _coefficient;
	float _priority;

}

@property (assign) float priority; 
@property (assign) BOOL shouldBeArchived; 
@property (assign) id firstItem;                           //@synthesize firstItem=_firstItem - In the implementation block
@property (assign) int firstAttribute; 
@property (assign) int relation; 
@property (assign) id secondItem;                          //@synthesize secondItem=_secondItem - In the implementation block
@property (assign) int secondAttribute; 
@property (assign) float multiplier; 
@property (assign) float constant; 
@property (copy) NSString * identifier; 
@property (readonly) BOOL hasBeenLowered; 
@property (assign) id container; 
@property (copy) NSString * symbolicConstant; 
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7 priority:(float)arg8 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 theme:(id)arg8 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 constant:(float)arg4 ;
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned)arg2 metrics:(id)arg3 views:(id)arg4 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 constant:(float)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 ;
-(BOOL)defaultResolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3 ;
-(id)_identifier;
-(float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1 ;
-(BOOL)hasBeenLowered;
-(id)_constantDescriptionForDTrace;
-(void)_setIdentifier:(id)arg1 ;
-(float)_allowedMagnitudeForIntegralizationAdjustment;
-(CGSize)_engineToContainerScalingCoefficients;
-(void)setHasBeenLowered:(BOOL)arg1 ;
-(BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2 ;
-(BOOL)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(float)arg3 lastLoweredConstantWasRounded:(BOOL)arg4 mutuallyExclusiveConstraints:(id*)arg5 ;
-(float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float*)arg1 ;
-(id)_symbolicConstant;
-(void)_setSymbolicConstant:(id)arg1 ;
-(BOOL)_tryToChangeContainerGeometryWithUndoHandler:(/*^block*/ id)arg1 ;
-(BOOL)_effectiveConstant:(float*)arg1 error:(id*)arg2 ;
-(void)_setSymbolicConstant:(id)arg1 constant:(float)arg2 ;
-(id)_descriptionforSymbolicConstant;
-(id)descriptionAccessory;
-(id)asciiArtDescription;
-(id)equationDescription;
-(id)_priorityDescription;
-(id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2 ;
-(float)priorityForVariable:(id)arg1 ;
-(void)_makeExtraVars;
-(BOOL)_nsib_isRedundantInEngine:(id)arg1 ;
-(void)_setFirstItem:(id)arg1 ;
-(void)_setFirstAttribute:(int)arg1 ;
-(void)_setRelation:(int)arg1 ;
-(void)_setSecondItem:(id)arg1 ;
-(void)_setSecondAttribute:(int)arg1 ;
-(void)setSymbolicConstant:(id)arg1 ;
-(BOOL)_isIBPrototypingLayoutConstraint;
-(BOOL)_isFudgeable;
-(float)_fudgeIncrement;
-(void)_setMarkerAndPositiveErrorVar:(id)arg1 ;
-(id)_negativeExtraVar;
-(void)_setNegativeExtraVar:(id)arg1 ;
-(BOOL)_deferDTraceLogging;
-(void)_setDeferDTraceLogging:(BOOL)arg1 ;
-(int)_primitiveConstraintType;
-(void)_setPrimitiveConstraintType:(int)arg1 ;
-(void)_clearWeakContainerReference;
-(id)symbolicConstant;
-(id)_constraintByReplacingView:(id)arg1 withView:(id)arg2 ;
-(BOOL)_describesSameRestrictionAsConstraint:(id)arg1 ;
-(id)_loweredExpression;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setConstant:(float)arg1 ;
-(id)firstItem;
-(BOOL)shouldBeArchived;
-(id)secondItem;
-(void)_removeFromEngine:(id)arg1 ;
-(void)_addToEngine:(id)arg1 ;
-(int)firstAttribute;
-(int)secondAttribute;
-(float)constant;
-(void)setContainer:(id)arg1 ;
-(id)container;
-(id)identifier;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)animations;
-(void)setAnimations:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(float)priority;
-(void)_setMultiplier:(float)arg1 ;
-(BOOL)_nsib_isRedundant;
-(BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(float)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(void)_containerGeometryDidChange;
-(BOOL)_loweredConstantIsRounded;
-(void)setPriority:(float)arg1 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(id)_markerAndPositiveExtraVar;
-(void)setShouldBeArchived:(BOOL)arg1 ;
-(float)multiplier;
-(int)relation;
-(int)_constraintType;
@end

