/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>

@class CKTypingIndicatorLayer;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell {

	CKTypingIndicatorLayer* _typingIndicatorLayer;

}

@property (nonatomic,retain) CKTypingIndicatorLayer * typingIndicatorLayer;              //@synthesize typingIndicatorLayer=_typingIndicatorLayer - In the implementation block
+(CGSize)indicatorSize;
-(void)configureForRowObject:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)stopPulseAnimation;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(void)startShrinkAnimation;
-(void)setTypingIndicatorLayer:(id)arg1 ;
-(id)typingIndicatorLayer;
@end

