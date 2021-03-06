/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchSharesOperation : CKDOperation {

	BOOL _isFetchAllSharesOperation;
	NSArray* _shares;
	/*^block*/id _shareFetchedProgressBlock;
	NSArray* _shareIDsToFetch;

}

@property (nonatomic,retain) NSArray * shares;                            //@synthesize shares=_shares - In the implementation block
@property (nonatomic,copy) id shareFetchedProgressBlock;                  //@synthesize shareFetchedProgressBlock=_shareFetchedProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * shareIDsToFetch;                   //@synthesize shareIDsToFetch=_shareIDsToFetch - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSharesOperation;              //@synthesize isFetchAllSharesOperation=_isFetchAllSharesOperation - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setShareFetchedProgressBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)shareIDsToFetch;
-(NSArray *)shares;
-(void)setShareIDsToFetch:(NSArray *)arg1 ;
-(void)setShares:(NSArray *)arg1 ;
-(BOOL)isFetchAllSharesOperation;
-(id)shareFetchedProgressBlock;
-(void)_handleShareFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3 ;
-(void)setIsFetchAllSharesOperation:(BOOL)arg1 ;
@end

