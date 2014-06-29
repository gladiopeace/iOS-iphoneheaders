/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CAMatchMoveAnimation;

@interface MPUPinningView : UIView {

	UIView* _containerView;
	CAMatchMoveAnimation* _matchMoveAnimation;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void).cxx_destruct;
-(void)_configureContentViewForCurrentWindowOrientation;
-(void)_configureMatchMoveAnimation;
@end

