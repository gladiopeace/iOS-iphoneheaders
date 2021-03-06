/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/askpermissiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol PRAgentProtocol
@required
-(void)setDelegate:(id)arg1;
-(void)setClientIdentifier:(id)arg1;
-(void)addRequest:(id)arg1 withReplyBlock:(/*^block*/id)arg2;
-(void)pendingRequestsWithReplyBlock:(/*^block*/id)arg1;
-(void)attemptLocalApprovalForRequestWithRequestID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)didStartNewStorePurchaseRequestWithInfo:(id)arg1;
-(void)didReceiveStorePushNotificationWithPayload:(id)arg1;
-(void)pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)arg1 withReplyBlock:(/*^block*/id)arg2;
-(void)attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)requestToBePresentedWithReplyBlock:(/*^block*/id)arg1;
-(void)userDidApproveRequestWithRequestID:(id)arg1;
-(void)userDidDenyRequestWithRequestID:(id)arg1;
-(void)clearCachedRequests;
-(void)registerPushToken;
-(void)pushTokenWithReplyBlock:(/*^block*/id)arg1;
-(void)readTestValueFromTouchIDKeychain;
-(void)writeTestValueToTouchIDKeychain;
-(void)deleteTestValueFromTouchIDKeychain;

@end

