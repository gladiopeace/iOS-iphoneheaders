/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, GKLabel;

@interface GKNotificationBannerView : UIView {

	UIImageView* _imageView;
	GKLabel* _titleLabel;
	GKLabel* _messageLabel;
	double _duration;
	/*^block*/ id _completionHandler;
	/*^block*/ id _touchHandler;
	double _preferredWidthPad;

}

@property (nonatomic,readonly) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) GKLabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) GKLabel * messageLabel;                //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) double preferredWidthPad;              //@synthesize preferredWidthPad=_preferredWidthPad - In the implementation block
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id touchHandler;                           //@synthesize touchHandler=_touchHandler - In the implementation block
+(bool)_preventsAppearanceProxyCustomization;
-(void)_wasTouched:(id)arg1 ;
-(void)callCompletionHandler;
-(double)preferredWidthPad;
-(id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 ;
-(void)setTouchHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)touchHandler;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(id)initWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3 ;
-(void)showWithTouchHandler:(/*^block*/ id)arg1 ;
-(void)showWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)titleLabel;
-(/*^block*/ id)completionHandler;
-(id)messageLabel;
-(id)imageView;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
@end

