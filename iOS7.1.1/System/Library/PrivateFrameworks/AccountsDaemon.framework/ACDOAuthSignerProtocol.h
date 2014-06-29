/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDOAuthSignerProtocol <NSObject>
@required
-(void)setShouldIncludeAppIdInRequest:(bool)arg1;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/ id)arg2;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/ id)arg5;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/ id)arg5;
@end

