/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <Game Center~iphone/GKPlayerProfileHeaderView.h>

@class GKHorizontalBubbleControlsView, GKTextBubbleControl;

@interface GKFriendRequestProfileHeaderView : GKPlayerProfileHeaderView {

	GKHorizontalBubbleControlsView* _bubblesContainerView;
	GKTextBubbleControl* _acceptBubble;
	GKTextBubbleControl* _ignoreBubble;

}

@property (nonatomic,retain) GKHorizontalBubbleControlsView * bubblesContainerView;              //@synthesize bubblesContainerView=_bubblesContainerView - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * acceptBubble;                                 //@synthesize acceptBubble=_acceptBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * ignoreBubble;                                 //@synthesize ignoreBubble=_ignoreBubble - In the implementation block
-(void)pushRightBubble;
-(void)pushLeftBubble;
-(id)acceptBubble;
-(id)ignoreBubble;
-(id)bubblesContainerView;
-(void)updatePlayerStatus;
-(void)setBubblesContainerView:(id)arg1 ;
-(void)setAcceptBubble:(id)arg1 ;
-(void)setIgnoreBubble:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
@end

