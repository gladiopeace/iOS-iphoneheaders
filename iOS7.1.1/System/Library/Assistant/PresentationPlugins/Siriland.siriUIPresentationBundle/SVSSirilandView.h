/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/PresentationPlugins/Siriland.siriUIPresentationBundle/Siriland
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Siriland/Siriland-Structs.h>
#import <UIKit/UIView.h>

@protocol SVSSirilandViewDelegate;
@class UIView, SiriUIKeyline, CALayer;

@interface SVSSirilandView : UIView {

	UIView* _contentView;
	UIView* _conversationView;
	SiriUIKeyline* _keyline;
	CALayer* _contentMaskingLayer;
	bool _showingDeviceLockView;
	bool _masksContent;
	bool _pageTransitionKeylineVisible;
	<SVSSirilandViewDelegate>* _delegate;
	UIOffset _topChevronOffset;

}

@property (assign,nonatomic) UIOffset topChevronOffset;                                                            //@synthesize topChevronOffset=_topChevronOffset - In the implementation block
@property (nonatomic,retain) UIView * conversationView;                                                            //@synthesize conversationView=_conversationView - In the implementation block
@property (getter=isShowingDeviceLockView,nonatomic,readonly) bool showingDeviceLockView;                          //@synthesize showingDeviceLockView=_showingDeviceLockView - In the implementation block
@property (assign,nonatomic,__weak) <SVSSirilandViewDelegate> * delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool masksContent;                                                                    //@synthesize masksContent=_masksContent - In the implementation block
@property (assign,getter=isPageTransitionKeylineVisible,nonatomic) bool pageTransitionKeylineVisible;              //@synthesize pageTransitionKeylineVisible=_pageTransitionKeylineVisible - In the implementation block
+(id)sirilandView;
-(bool)isPageTransitionKeylineVisible;
-(void)statusBarFrameDidChange;
-(void)setConversationView:(id)arg1 ;
-(void)setMasksContent:(bool)arg1 ;
-(void)setPageTransitionKeylineVisible:(bool)arg1 ;
-(bool)isShowingDeviceLockView;
-(id)conversationView;
-(bool)masksContent;
-(void)setTopChevronOffset:(UIOffset)arg1 ;
-(UIOffset)topChevronOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void).cxx_destruct;
@end

