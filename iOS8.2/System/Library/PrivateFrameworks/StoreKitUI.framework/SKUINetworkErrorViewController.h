/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIProductPageChildViewController.h>

@protocol SKUINetworkErrorDelegate;
@class SKUIClientContext, NSError, NSString, UIScrollView, SKUIProductPageHeaderViewController;

@interface SKUINetworkErrorViewController : UIViewController <SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	id<SKUINetworkErrorDelegate> _delegate;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                       //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
+(char)canDisplayError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)loadView;
-(UIScrollView *)scrollView;
-(NSError *)error;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithError:(id)arg1 ;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
@end
