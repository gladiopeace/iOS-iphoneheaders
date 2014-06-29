/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:22 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATAxisLayer.h>

@class SCATXYAxisLineLayer;

@interface SCATXYAxisRangeLayer : SCATAxisLayer {

	SCATXYAxisLineLayer* _lineLayer;

}

@property (nonatomic,retain) SCATXYAxisLineLayer * lineLayer;              //@synthesize lineLayer=_lineLayer - In the implementation block
-(id)initWithAxis:(int)arg1 ;
-(void)updateTheme:(int)arg1 animated:(BOOL)arg2 ;
-(void)updateFrameForParentBounds:(CGRect)arg1 refinementPoint:(CGPoint*)arg2 ;
-(void)updateToFitWithinParentBounds:(CGRect)arg1 ;
-(id)lineLayer;
-(id)_backgroundColorForTheme:(int)arg1 ;
-(void)setLineLayer:(id)arg1 ;
-(id)_borderBackgroundColorForTheme:(int)arg1 ;
-(id)_borderForegroundColorForTheme:(int)arg1 ;
-(void)dealloc;
-(void)removeAllAnimations;
@end

