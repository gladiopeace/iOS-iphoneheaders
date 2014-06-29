/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSLock, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/ id _outputBlock;
	SKUIResourceRequest* _request;

}

@property (readonly) SKUIResourceRequest * resourceRequest; 
@property (retain) SKUIClientContext * clientContext; 
@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void).cxx_destruct;
-(id)clientContext;
-(id)initWithResourceRequest:(id)arg1 ;
-(id)resourceRequest;
-(/*^block*/ id)outputBlock;
-(id)_initSKUILoadResourceOperation;
-(void)setClientContext:(id)arg1 ;
-(void)setOutputBlock:(/*^block*/ id)arg1 ;
@end

