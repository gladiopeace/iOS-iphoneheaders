/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIContentRatingArtworkLoaderObserver.h>

@class SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIProductPageItem, SKUIProductInformationView, NSOperationQueue;

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {

	SKUIClientContext* _clientContext;
	SKUIContentRatingArtworkResourceLoader* _contentRatingArtworkLoader;
	SKUIProductPageItem* _item;
	SKUIProductInformationView* _informationView;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIProductPageItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)dealloc;
-(id)item;
-(void)loadView;
-(void).cxx_destruct;
-(id)clientContext;
-(void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
-(id)_contentRatingResourceLoader;
-(void)_updateLines:(id)arg1 ;
@end

