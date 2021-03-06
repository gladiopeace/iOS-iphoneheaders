/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessArbiter.h>

@protocol NSFileAccessArbiter <NSObject>
@required
-(id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2;
-(void)revokeAccessClaimForID:(id)arg1;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
-(void)revokeSubarbitrationClaimForID:(id)arg1;
-(void)cancelAccessClaimForID:(id)arg1;
-(void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
-(void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
-(void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;

@end


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableDictionary, NSFileAccessNode, NSString;

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isSubarbiter;
	NSMutableDictionary* _accessClaimsByID;
	NSMutableDictionary* _subarbitrationClaimsByID;
	NSMutableDictionary* _reactorsByID;
	NSFileAccessNode* _rootNode;
	NSObject*<OS_xpc_object> _superarbitrationServer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleCanceledClient:(id)arg1 ;
-(void)_registerForDebugInfoRequests;
-(void)_handleMessage:(id)arg1 forSubarbitrationClaim:(id)arg2 server:(id)arg3 ;
-(void)_grantAccessClaim:(id)arg1 ;
-(void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)_sendSubarbitersMessageWithKind:(id)arg1 parameters:(id)arg2 ;
-(void)_revokeAccessClaimForID:(id)arg1 fromLocal:(BOOL)arg2 ;
-(void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(void)_cancelAccessClaimForID:(id)arg1 ;
-(void)_writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(void)_tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(BOOL)_handleMessage:(id)arg1 ofKind:(id)arg2 withParameters:(id)arg3 embeddedServer:(id)arg4 fromClient:(id)arg5 ;
-(void)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(BOOL)arg3 withLastEventID:(id)arg4 ;
-(void)_removeReactorForID:(id)arg1 ;
-(void)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2 ;
-(void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2 ;
-(void)_getDebugInformationWithString:(id)arg1 fromPid:(int)arg2 thenContinue:(/*^block*/id)arg3 ;
-(id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2 ;
-(void)revokeAccessClaimForID:(id)arg1 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(void)cancelAccessClaimForID:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(id)initWithQueue:(id)arg1 isSubarbiter:(BOOL)arg2 listener:(id)arg3 ;
-(void)stopArbitrating;
-(id)rootNode;
-(void)dealloc;
-(void)finalize;
@end

