/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UIButton, UIActivityIndicatorView;

@interface PKWelcomeHeaderView : UIView {

	UIView* _titleView;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _showActivityIndicator;
	unsigned long long _passType;

}

@property (nonatomic,readonly) unsigned long long passType;              //@synthesize passType=_passType - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                 //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
-(unsigned long long)passType;
-(id)initWithPassType:(unsigned long long)arg1 ;
-(void)addTapped;
-(void)_addTapped;
-(BOOL)showActivityIndicator;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
@end

