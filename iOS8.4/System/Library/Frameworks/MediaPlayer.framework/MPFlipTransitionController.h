/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPTransitionController.h>

@class UIView;

@interface MPFlipTransitionController : MPTransitionController {

	UIView* _fromView;
	CGRect _toFrame;
	double _topMargin;

}

@property (nonatomic,retain) UIView * fromView;              //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) CGRect toFrame;                 //@synthesize toFrame=_toFrame - In the implementation block
@property (assign,nonatomic) double topMargin;               //@synthesize topMargin=_topMargin - In the implementation block
-(void)performTransition:(unsigned long long)arg1 ;
-(void)setToFrame:(CGRect)arg1 ;
-(id)_subtypeForTransitionType:(unsigned long long)arg1 ;
-(CGRect)toFrame;
-(double)topMargin;
-(void)setTopMargin:(double)arg1 ;
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIView *)fromView;
-(void)setFromView:(UIView *)arg1 ;
@end
