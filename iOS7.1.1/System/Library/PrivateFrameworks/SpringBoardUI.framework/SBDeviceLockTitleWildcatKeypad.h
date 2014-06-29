/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBDeviceLockTitle.h>

@class UILabel;

@interface SBDeviceLockTitleWildcatKeypad : SBDeviceLockTitle {

	bool _highlighted;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(id)_backgroundImage;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)_initWithStyle:(int)arg1 interfaceOrientation:(long long)arg2 ;
-(void)blinkSubtitle;
@end

