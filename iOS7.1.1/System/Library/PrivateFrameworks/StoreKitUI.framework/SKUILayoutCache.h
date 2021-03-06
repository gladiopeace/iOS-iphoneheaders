/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUILayoutCacheDelegate, OS_dispatch_queue;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSObject;

@interface SKUILayoutCache : NSObject {

	NSMutableArray* _batchedRequests;
	<SKUILayoutCacheDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableArray* _layouts;
	NSMutableArray* _requests;

}

@property (assign,nonatomic,__weak) <SKUILayoutCacheDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(void)commitLayoutRequests;
-(NSRange)populateCacheWithLayoutRequests:(id)arg1 ;
-(void)_layoutRequestsInRange:(NSRange)arg1 ;
-(void)_addLayoutBatch:(id)arg1 ;
-(NSRange)addLayoutRequests:(id)arg1 ;
-(id)layoutForIndex:(long long)arg1 ;
-(void)_populateCache;
@end

