/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTextBalloonView.h>
#import <UIFoundation/NSLayoutManagerDelegate.h>

@class UIImageView;

@interface CKTruncatedTextBalloonView : CKTextBalloonView <NSLayoutManagerDelegate> {

	UIImageView* _chevron;

}

@property (nonatomic,retain) UIImageView * chevron;              //@synthesize chevron=_chevron - In the implementation block
-(id)chevron;
-(void)setChevron:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)configureForMessagePart:(id)arg1 ;
@end

