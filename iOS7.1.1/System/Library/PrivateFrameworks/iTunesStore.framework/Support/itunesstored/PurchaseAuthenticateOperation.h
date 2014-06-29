/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMutableAuthenticationContext, NSString;

@interface PurchaseAuthenticateOperation : ISOperation {

	/*^block*/ id _authenticationBlock;
	SSMutableAuthenticationContext* _authenticationContext;

}

@property (copy) id authenticationBlock; 
@property (copy) NSString * clientIdentifierHeader; 
-(void)setAuthenticationBlock:(/*^block*/ id)arg1 ;
-(id)_clientIdentifierForPurchases:(id)arg1 ;
-(id)_userAgentForPurchases:(id)arg1 ;
-(/*^block*/ id)authenticationBlock;
-(void)dealloc;
-(void)run;
-(id)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(id)initWithPurchases:(id)arg1 ;
@end

