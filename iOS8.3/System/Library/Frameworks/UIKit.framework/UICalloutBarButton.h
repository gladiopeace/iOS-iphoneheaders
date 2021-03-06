/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UITextReplacement;

@interface UICalloutBarButton : UIButton {

	SEL m_action;
	int m_position;
	int m_type;
	UITextReplacement* m_textReplacement;
	float m_contentWidth;
	float m_contentScale;
	float m_additionalContentHeight;
	float m_dividerOffset;
	float m_imageVerticalAdjust;
	int m_page;
	char m_isText;
	char m_configured;
	char m_single;
	char m_padLeft;
	char m_padRight;
	char m_dontDismiss;
	char forceFlash;

}

@property (nonatomic,readonly) SEL action; 
@property (nonatomic,readonly) float contentWidth; 
@property (nonatomic,readonly) float contentScale; 
@property (nonatomic,readonly) float additionalContentHeight; 
@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) char forceFlash; 
@property (assign,nonatomic) int page; 
@property (assign,nonatomic) float dividerOffset; 
@property (assign,nonatomic) float imageVerticalAdjust; 
@property (assign,nonatomic) char dontDismiss; 
@property (nonatomic,retain) UITextReplacement * textReplacement; 
+(id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(float)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6 ;
+(id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 ;
+(id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(int)type;
-(SEL)action;
-(void)setHighlighted:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setDontDismiss:(char)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(float)contentWidth;
-(void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(float)arg3 action:(SEL)arg4 type:(int)arg5 ;
-(void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(void)flash;
-(void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2 ;
-(void)cancelFlash;
-(void)configureLabel;
-(CGRect)adjustRectForPosition:(CGRect)arg1 scaleRect:(char)arg2 ;
-(char)forceFlash;
-(void)setForceFlash:(char)arg1 ;
-(void)fadeAndSendAction;
-(void)configureForSingle:(int)arg1 ;
-(void)configureForLeftPosition:(int)arg1 ;
-(void)configureForMiddlePosition;
-(void)configureForRightPosition:(int)arg1 ;
-(void)setContentScale:(float)arg1 ;
-(float)contentScale;
-(float)additionalContentHeight;
-(UITextReplacement *)textReplacement;
-(void)setTextReplacement:(UITextReplacement *)arg1 ;
-(int)page;
-(void)setPage:(int)arg1 ;
-(float)dividerOffset;
-(void)setDividerOffset:(float)arg1 ;
-(float)imageVerticalAdjust;
-(void)setImageVerticalAdjust:(float)arg1 ;
-(char)dontDismiss;
@end

