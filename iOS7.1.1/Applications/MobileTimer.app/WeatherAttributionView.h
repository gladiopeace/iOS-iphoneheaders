/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@protocol WorldClockCollectionEditDelegate;
@class UIButton;

@interface WeatherAttributionView : UIView {

	<WorldClockCollectionEditDelegate>* _delegate;
	UIButton* _twcButton;
	UIButton* _yahooButton;

}

@property (assign,nonatomic) <WorldClockCollectionEditDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * twcButton;                                       //@synthesize twcButton=_twcButton - In the implementation block
@property (nonatomic,retain) UIButton * yahooButton;                                     //@synthesize yahooButton=_yahooButton - In the implementation block
-(id)yahooButton;
-(void)_twcLogoTapped;
-(void)_yahooLogoTapped;
-(id)twcButton;
-(void)setTwcButton:(id)arg1 ;
-(void)setYahooButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
@end

