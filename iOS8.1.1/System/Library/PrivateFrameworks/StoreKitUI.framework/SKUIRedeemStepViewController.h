/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIClientContext, NSOperationQueue, SKUIRedeemConfiguration;

@interface SKUIRedeemStepViewController : UIViewController {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _operationQueue;
	SKUIRedeemConfiguration* _configuration;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                    //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                    //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPassbookLearnMore; 
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(SKUIRedeemConfiguration *)configuration;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(BOOL)shouldShowPassbookLearnMore;
@end
