/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TPSlidingButtonDelegateProtocol;
@class TPButton;

@interface TPSlidingButton : UIView <UIScrollViewDelegate> {

	TPButton* _acceptButton;
	TPButton* _endButton;
	TPButton* _sideButtonLeft;
	TPButton* _sideButtonRight;
	int _type;
	<TPSlidingButtonDelegateProtocol>* _delegate;

}

@property (retain) TPButton * acceptButton;                                   //@synthesize acceptButton=_acceptButton - In the implementation block
@property (retain) TPButton * endButton;                                      //@synthesize endButton=_endButton - In the implementation block
@property (retain) TPButton * sideButtonLeft;                                 //@synthesize sideButtonLeft=_sideButtonLeft - In the implementation block
@property (retain) TPButton * sideButtonRight;                                //@synthesize sideButtonRight=_sideButtonRight - In the implementation block
@property (assign) int type;                                                  //@synthesize type=_type - In the implementation block
@property (assign) <TPSlidingButtonDelegateProtocol> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)acceptButton;
-(void)setAcceptButton:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)delegate;
-(void)setType:(int)arg1 ;
-(int)type;
-(CGSize)intrinsicContentSize;
-(void)setSideButtonLeft:(id)arg1 ;
-(void)setSideButtonRight:(id)arg1 ;
-(id)sideButtonLeft;
-(id)sideButtonRight;
-(id)initWithSlidingButtonType:(int)arg1 ;
-(id)endButton;
-(void)setEndButton:(id)arg1 ;
@end

