/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData;

@interface DaemonBiometricOptInOperation : ISOperation {

	NSData* _authToken;
	BOOL _requiresStoreAuthentication;
	/*^block*/ id _resultBlock;

}

@property (nonatomic,copy) NSData * authToken; 
@property (assign) BOOL requiresStoreAuthentication; 
@property (copy) id resultBlock; 
-(BOOL)requiresStoreAuthentication;
-(id)_authenticateWithAccount:(id)arg1 error:(id*)arg2 ;
-(BOOL)_registerAccount:(id)arg1 withAuthToken:(id)arg2 ;
-(void)setRequiresStoreAuthentication:(BOOL)arg1 ;
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setResultBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)resultBlock;
@end

