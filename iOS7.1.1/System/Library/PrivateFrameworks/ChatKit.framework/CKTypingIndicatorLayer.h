/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, CAReplicatorLayer;

@interface CKTypingIndicatorLayer : CALayer {

	CALayer* _smallBubble;
	CALayer* _mediumBubble;
	CALayer* _largeBubble;
	CALayer* _thinkingDot;
	CAReplicatorLayer* _thinkingDots;
	CGPoint _smallBubbleOffset;
	CGPoint _mediumBubbleOffset;
	CGPoint _largeBubbleOffset;

}

@property (nonatomic,retain) CALayer * smallBubble;                         //@synthesize smallBubble=_smallBubble - In the implementation block
@property (assign,nonatomic) CGPoint smallBubbleOffset;                     //@synthesize smallBubbleOffset=_smallBubbleOffset - In the implementation block
@property (nonatomic,retain) CALayer * mediumBubble;                        //@synthesize mediumBubble=_mediumBubble - In the implementation block
@property (assign,nonatomic) CGPoint mediumBubbleOffset;                    //@synthesize mediumBubbleOffset=_mediumBubbleOffset - In the implementation block
@property (nonatomic,retain) CALayer * largeBubble;                         //@synthesize largeBubble=_largeBubble - In the implementation block
@property (assign,nonatomic) CGPoint largeBubbleOffset;                     //@synthesize largeBubbleOffset=_largeBubbleOffset - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDot;                         //@synthesize thinkingDot=_thinkingDot - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * thinkingDots;              //@synthesize thinkingDots=_thinkingDots - In the implementation block
+(CGSize)defaultSize;
-(void)dealloc;
-(id)init;
-(void)stopAnimation;
-(void)setSmallBubbleOffset:(CGPoint)arg1 ;
-(void)setSmallBubble:(id)arg1 ;
-(id)smallBubble;
-(CGPoint)smallBubbleOffset;
-(void)setMediumBubble:(id)arg1 ;
-(id)mediumBubble;
-(void)setMediumBubbleOffset:(CGPoint)arg1 ;
-(CGPoint)mediumBubbleOffset;
-(void)setLargeBubble:(id)arg1 ;
-(id)largeBubble;
-(void)setLargeBubbleOffset:(CGPoint)arg1 ;
-(CGPoint)largeBubbleOffset;
-(void)_buildThinkingDots;
-(id)thinkingDot;
-(id)thinkingDots;
-(void)setThinkingDot:(id)arg1 ;
-(void)setThinkingDots:(id)arg1 ;
-(id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(void)stopPulseAnimation;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(void)startShrinkAnimation;
-(void)_setup;
@end

