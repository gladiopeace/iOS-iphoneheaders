/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBScaleIconZoomAnimator.h>

@class UIView, SBCrossfadeZoomSettings;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {

	UIView* _crossfadeView;
	BOOL _performsTrueCrossfade;
	BOOL _masksCorners;

}

@property (nonatomic,retain) SBCrossfadeZoomSettings * settings; 
@property (assign,nonatomic) BOOL performsTrueCrossfade;                      //@synthesize performsTrueCrossfade=_performsTrueCrossfade - In the implementation block
@property (assign,nonatomic) BOOL masksCorners;                               //@synthesize masksCorners=_masksCorners - In the implementation block
-(void)_prepareAnimation;
-(void)setMasksCorners:(BOOL)arg1 ;
-(BOOL)masksCorners;
-(BOOL)performsTrueCrossfade;
-(void)setPerformsTrueCrossfade:(BOOL)arg1 ;
-(void)_cleanupAnimation;
-(CGRect)_zoomedFrame;
-(CGPoint)_zoomedIconCenter;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/ id)arg3 ;
-(id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3 ;
-(void)_delayedForRotation;
-(void)_assertCrossfadeViewSizeIfNecessary;
-(void)dealloc;
@end

