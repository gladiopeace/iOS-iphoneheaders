/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKSSystemServiceClient;

@interface BKSSystemService : NSObject {

	BKSSystemServiceClient* _client;

}

@property (nonatomic,retain) BKSSystemServiceClient * client;              //@synthesize client=_client - In the implementation block
-(unsigned)createClientPort;
-(void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned)arg3 withResult:(/*^block*/ id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)openApplication:(id)arg1 options:(id)arg2 withResult:(/*^block*/ id)arg3 ;
-(int)pidForApplication:(id)arg1 ;
-(void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(bool)arg3 withDescription:(id)arg4 ;
-(void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(bool)arg3 withDescription:(id)arg4 ;
-(void)fireCompletion:(/*^block*/ id)arg1 error:(id)arg2 ;
-(id)clientCallbackQueue;
-(void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned)arg4 withResult:(/*^block*/ id)arg5 ;
-(id)_badArgumentError;
-(void)cleanupClientPort:(unsigned)arg1 ;
-(id)systemApplicationBundleIdentifier;
-(bool)canOpenApplication:(id)arg1 reason:(int*)arg2 ;
-(void)openDataActivationURL:(id)arg1 withResult:(/*^block*/ id)arg2 ;
-(void)setClient:(id)arg1 ;
-(id)client;
@end

