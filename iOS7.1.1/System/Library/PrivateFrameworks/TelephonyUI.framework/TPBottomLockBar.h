/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPBottomBar.h>

@class NSArray, NSTimer, TPLockTextView;

@interface TPBottomLockBar : TPBottomBar {

	NSArray* _labels;
	int _currentLabelIndex;
	NSTimer* _cycleLabelTimer;
	id _delegate;
	id _representedObject;
	TPLockTextView* _labelView;
	double _fontSize;
	double _deltaFromDefaultLabelWidth;

}
+(CGSize)defaultSize;
+(double)defaultLabelFontSize;
-(id)labelView;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)_canDrawContent;
-(void)unlock;
-(bool)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setLabel:(id)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setKnobImage:(id)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(double)fontSize;
-(void)setLabels:(id)arg1 ;
-(void)_setLabel:(id)arg1 ;
-(id)initForIncomingCallWithFrame:(CGRect)arg1 ;
-(double)slideTouchAreaInsetLeft;
-(double)slideTouchAreaInsetRight;
-(bool)allowsTouchTrackingBeyondVerticalThreshold;
-(bool)usesBackgroundImage;
-(id)wellImageName;
-(double)defaultWellWidth;
-(id)_knobImageForColor:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 knobImage:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 knobColor:(int)arg2 ;
-(void)startCyclingLabels;
-(void)stopCyclingLabels;
-(bool)_shouldStopLabelAnimationForGrab;
-(void)_adjustLabelOrigin;
-(void)cycleToNextLabel;
-(void)cycleToLabelAtIndex:(int)arg1 ;
-(void)finishedCyclingLabelOut;
-(void)downInKnob;
-(void)upInKnob;
-(int)currentLabelIndex;
-(void)knobDragged:(double)arg1 ;
-(void)slideBack:(bool)arg1 ;
-(void)relock;
-(void)freezeKnobInUnlockedPosition;
-(void)setTextAlpha:(double)arg1 ;
-(id)knob;
-(double)knobTrackInsetLeft;
-(double)knobTrackInsetRight;
-(id)well;
-(void)setKnobWellWidth:(double)arg1 ;
-(void)setKnobWellWidthToDefault;
-(void)setKnobColor:(int)arg1 ;
-(id)labels;
@end

