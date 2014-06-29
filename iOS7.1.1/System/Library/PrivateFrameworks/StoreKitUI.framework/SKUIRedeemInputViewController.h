/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class SKUIRedeemTextField, UIImageView, NSString, SKUIRedeemITunesPassLockup, UIBarButtonItem;

@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate> {

	long long _category;
	SKUIRedeemTextField* _field;
	UIImageView* _imageView;
	NSString* _initialCode;
	SKUIRedeemITunesPassLockup* _passbookLockup;
	UIBarButtonItem* _redeemButton;

}

@property (nonatomic,readonly) long long category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * initialCode;              //@synthesize initialCode=_initialCode - In the implementation block
-(void)dealloc;
-(void)loadView;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(long long)category;
-(void).cxx_destruct;
-(void)_cancelAction:(id)arg1 ;
-(void)_termsButtonAction:(id)arg1 ;
-(void)_passbookLockupAction:(id)arg1 ;
-(void)_redeemConfigurationImagesDidLoad:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 ;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(void)_redeemAction:(id)arg1 ;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setInitialCode:(id)arg1 ;
-(id)initialCode;
@end

