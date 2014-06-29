/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider <NSObject>
@optional
-(void)noteHomeSetOnDifferentHost:(id)arg1;
-(id)additionalHeaderValues;
-(void)clientTokenRequestedByServer;
-(id)clientToken;
-(id)oauthInfoProvider;
-(bool)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
-(bool)shouldRetryUnauthorizedConnection:(id)arg1;
-(bool)handleAuthenticateAgainstProtectionSpace:(id)arg1;
-(bool)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
-(bool)handleShouldUseCredentialStorage;
-(bool)shouldHandleHTTPCookiesForURL:(id)arg1;
-(bool)shouldSendClientInfoHeaderForURL:(id)arg1;
-(bool)shouldTurnModalOnBadPassword;
-(bool)shouldCompressRequests;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/ id)arg3;
-(CFURLStorageSessionRef)copyStorageSession;
-(id)customConnectionProperties;
-(bool)shouldUseOpportunisticSockets;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(bool)handleTrustChallenge:(id)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedProtocolRequest;
-(void)noteFailedNetworkRequest;

@required
-(id)user;
-(id)password;
-(id)scheme;
-(id)host;
-(id)serverRoot;
-(id)userAgentHeader;
-(id)serverComplianceClasses;
-(bool)handleCertificateError:(id)arg1;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/ id)arg1;
-(id)identityPersist;
-(bool)shouldFailAllTasks;
-(id)principalURL;
-(id)accountID;
-(long long)port;
@end

