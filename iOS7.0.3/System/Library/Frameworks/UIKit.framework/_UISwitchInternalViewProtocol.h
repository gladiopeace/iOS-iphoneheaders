/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol _UISwitchInternalViewProtocol <NSObject>
@property (nonatomic,retain) UIColor * onTintColor; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * thumbTintColor; 
@property (nonatomic,retain) UIImage * onImage; 
@property (nonatomic,retain) UIImage * offImage; 
@property (assign,nonatomic) BOOL on; 
@property (assign,nonatomic) BOOL useAlternateColor; 
@required
-(id)tintColor;
-(void)setTintColor:(id)arg1;
-(void)_setPressed:(BOOL)arg1;
-(void)setThumbTintColor:(id)arg1;
-(id)thumbTintColor;
-(void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
-(void)_cleanUpAfterAnimating;
-(void)_setProgress:(float)arg1 animated:(BOOL)arg2 withDuration:(float)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5;
-(void)_setProgress:(float)arg1;
-(void)_prepareForInteraction;
-(void)setSendAction:(BOOL)arg1;
-(void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(/*^block*/ id)arg5;
-(id)onTintColor;
-(void)setOnTintColor:(id)arg1;
-(id)onImage;
-(void)setOnImage:(id)arg1;
-(id)offImage;
-(void)setOffImage:(id)arg1;
-(BOOL)on;
-(void)setOn:(BOOL)arg1;
-(BOOL)useAlternateColor;
-(void)setUseAlternateColor:(BOOL)arg1;
@end

