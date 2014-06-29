/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation, NSOperationQueue;

@interface SKUIGiftStepViewController : UIViewController {

	SKUIGift* _gift;
	SKUIGiftConfiguration* _giftConfiguration;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (nonatomic,readonly) SKUIGiftConfiguration * giftConfiguration;              //@synthesize giftConfiguration=_giftConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void).cxx_destruct;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(id)gift;
-(id)giftConfiguration;
-(void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)finishGiftingWithResult:(bool)arg1 ;
-(void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(/*^block*/ id)arg3 ;
@end

