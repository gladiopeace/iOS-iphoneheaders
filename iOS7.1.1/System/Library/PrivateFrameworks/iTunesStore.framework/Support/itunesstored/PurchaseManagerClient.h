/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessProximity/XPCClient.h>

@class NSMutableArray;

@interface PurchaseManagerClient : XPCClient {

	BOOL _finishesPurchases;
	NSMutableArray* _purchases;
	long long _uniqueIdentifier;

}

@property (assign) BOOL finishesPurchases; 
@property (assign) long long uniqueIdentifier; 
@property (readonly) int URLBagType; 
-(id)initWithInputConnection:(id)arg1 ;
-(void)sendResponse:(id)arg1 forPurchases:(id)arg2 ;
-(void)sendResponses:(id)arg1 ;
-(void)ackConnection;
-(BOOL)finishesPurchases;
-(void)sendError:(id)arg1 forPurchases:(id)arg2 ;
-(void)setFinishesPurchases:(BOOL)arg1 ;
-(void)dealloc;
-(long long)uniqueIdentifier;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(int)URLBagType;
@end
