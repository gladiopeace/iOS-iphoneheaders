/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer {

	CGPoint _firstScreenLocation;
	CGPoint _lastScreenLocation;
	double _lastTouchTime;
	id _velocitySample;
	id _previousVelocitySample;
	NSMutableArray* _touches;
	unsigned long long _lastTouchCount;
	unsigned long long _minimumNumberOfTouches;
	unsigned long long _maximumNumberOfTouches;
	double _hysteresis;
	CGPoint _lastUnadjustedScreenLocation;
	unsigned _failsPastMaxTouches : 1;
	unsigned _canPanHorizontally : 1;
	unsigned _canPanVertically : 1;
	unsigned _ignoresStationaryTouches : 1;
	NSMutableArray* _movingTouches;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfTouches;                                                //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;                                                //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (getter=_velocitySample,readonly) UIPanGestureVelocitySample * _velocitySample;                              //@synthesize velocitySample=_velocitySample - In the implementation block
@property (getter=_previousVelocitySample,readonly) UIPanGestureVelocitySample * _previousVelocitySample;              //@synthesize previousVelocitySample=_previousVelocitySample - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)_hysteresis;
-(void)_setHysteresis:(double)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_setIgnoresStationaryTouches:(bool)arg1 ;
-(void)setFailsPastMaxTouches:(bool)arg1 ;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(unsigned long long)minimumNumberOfTouches;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)_resetGestureRecognizer;
-(void)_setCanPanVertically:(bool)arg1 ;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(id)_velocitySample;
-(id)_previousVelocitySample;
-(void)_resetVelocitySamples;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromScreenCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toScreenCoordinatesFromView:(id)arg2 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2 ;
-(UIOffset)_offsetInViewFromScreenLocation:(CGPoint)arg1 toScreenLocation:(CGPoint)arg2 ;
-(CGPoint)_shiftPanLocationToNewScreenLocation:(CGPoint)arg1 lockingToAxis:(int)arg2 ;
-(CGPoint)_adjustScreenLocation:(CGPoint)arg1 ;
-(bool)_willScrollX;
-(bool)_willScrollY;
-(void)_touchesListChangedFrom:(id)arg1 to:(id)arg2 ;
-(bool)_updateMovingTouchesArraySavingOldArray:(id*)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(bool)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)_removeHysteresisFromTranslation;
-(void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(/*^block*/ id)arg2 ;
-(bool)failsPastMaxTouches;
-(long long)_lastTouchCount;
-(bool)_ignoresStationaryTouches;
-(bool)_canPanHorizontally;
-(bool)_canPanVertically;
-(void)_setCanPanHorizontally:(bool)arg1 ;
-(unsigned long long)maximumNumberOfTouches;
@end

