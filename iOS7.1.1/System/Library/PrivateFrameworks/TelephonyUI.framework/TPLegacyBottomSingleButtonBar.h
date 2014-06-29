/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPLegacyBottomBar.h>

@class UIImageView, UIView, TPLegacyButton;

@interface TPLegacyBottomSingleButtonBar : TPLegacyBottomBar {

	id _delegate;
	UIImageView* _backgroundView;
	UIView* _well;
	TPLegacyButton* _button;
	bool _allowsDroppingIcons;

}
+(id)_backgroundImage;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(double)buttonWidth;
-(id)button;
-(id)initForVoiceControlWithFrame:(CGRect)arg1 ;
-(void)setButton:(id)arg1 andStyle:(bool)arg2 ;
-(id)initForEndCallWithFrame:(CGRect)arg1 ;
-(id)initForIncomingCallWaitingWithFrame:(CGRect)arg1 ;
-(id)initForEndVideoWithFrame:(CGRect)arg1 ;
-(id)initForTTYWithFrame:(CGRect)arg1 ;
-(void)setWellAlpha:(double)arg1 ;
-(void)setSuppressDrawingBackground:(bool)arg1 ;
@end

