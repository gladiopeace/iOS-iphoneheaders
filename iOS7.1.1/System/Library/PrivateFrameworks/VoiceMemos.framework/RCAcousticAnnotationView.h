/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIView.h>

@class RCUIConfiguration;

@interface RCAcousticAnnotationView : UIView {

	CGGradientRef _decibelMarkerBackgroundGradient;
	float _minimumDecibelRange;
	float _maximumDecibelRange;
	RCUIConfiguration* _UIConfiguration;

}

@property (assign,nonatomic) float minimumDecibelRange;                      //@synthesize minimumDecibelRange=_minimumDecibelRange - In the implementation block
@property (assign,nonatomic) float maximumDecibelRange;                      //@synthesize maximumDecibelRange=_maximumDecibelRange - In the implementation block
@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;              //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
+(double)requiredWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void).cxx_destruct;
-(void)setUIConfiguration:(id)arg1 ;
-(id)UIConfiguration;
-(CGRect)annotationBoundaryRect;
-(id)_decibelMarkersAttributes;
-(id)_zeroMarkerAttributes;
-(void)setMinimumDecibelRange:(float)arg1 ;
-(void)setMaximumDecibelRange:(float)arg1 ;
-(float)minimumDecibelRange;
-(float)maximumDecibelRange;
@end

