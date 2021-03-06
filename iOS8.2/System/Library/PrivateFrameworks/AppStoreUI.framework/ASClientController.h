/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUClientController.h>

@interface ASClientController : SUClientController {

	char _shouldExitAfterPurchases;

}

@property (assign,nonatomic) char shouldExitAfterPurchases;              //@synthesize shouldExitAfterPurchases=_shouldExitAfterPurchases - In the implementation block
-(char)shouldExitAfterPurchases;
-(void)setShouldExitAfterPurchases:(char)arg1 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2 ;
-(id)initWithClientInterface:(id)arg1 ;
-(char)libraryContainsItemIdentifier:(unsigned long long)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
@end

