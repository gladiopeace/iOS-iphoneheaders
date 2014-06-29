/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <Foundation/NSError.h>

@class SBKTransaction, NSString;

@interface SBKStoreError : NSError {

	SBKTransaction* _transaction;

}

@property (retain) SBKTransaction * transaction;                             //@synthesize transaction=_transaction - In the implementation block
@property (readonly) bool isAuthenticationError; 
@property (readonly) bool isAccountsChangedError; 
@property (readonly) bool isRecoverableError; 
@property (readonly) bool isClampError; 
@property (readonly) bool isTransactionCancelledError; 
@property (readonly) bool isTransactionMissingInformationError; 
@property (readonly) NSString * previousStoreAccountName; 
@property (readonly) NSString * currentStoreAccountName; 
@property (readonly) double retrySeconds; 
+(id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3 ;
+(id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3 ;
+(id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)transactionCancelledErrorWithTransaction:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 ;
+(id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)keyValueStoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4 ;
+(id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3 ;
+(id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg1 currentStoreAccountName:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4 ;
+(id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(void)setTransaction:(id)arg1 ;
-(id)transaction;
-(bool)isClampError;
-(double)retrySeconds;
-(bool)isAuthenticationError;
-(bool)isTransactionCancelledError;
-(bool)isAccountsChangedError;
-(bool)isRecoverableError;
-(bool)isTransactionMissingInformationError;
-(id)previousStoreAccountName;
-(id)currentStoreAccountName;
@end

