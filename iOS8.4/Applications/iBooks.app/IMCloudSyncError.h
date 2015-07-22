/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <Foundation/NSError.h>

@class IMCloudSyncTransaction;

@interface IMCloudSyncError : NSError {

	IMCloudSyncTransaction* _transaction;

}

@property (nonatomic,retain) IMCloudSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)cloudSyncErrorWithCode:(int)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 ;
+(id)unknownErrorWithTransaction:(id)arg1 ;
+(id)cloudSyncDisabledErrorWithTransaction:(id)arg1 ;
+(id)networkingBlockedErrorWithTransaction:(id)arg1 ;
+(id)killSwitchErrorWithTransaction:(id)arg1 ;
+(id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)arg1 transaction:(id)arg2 ;
+(id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)arg1 currentStoreAccontText:(id)arg2 transaction:(id)arg3 ;
+(id)userCancelledSignInErrorWithTransaction:(id)arg1 ;
+(id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 ;
+(id)noStoreAccountErrorWithTransaction:(id)arg1 ;
+(id)unknownStoreAccountErrorWithTransaction:(id)arg1 ;
+(id)storeAccountSessionExpiredWithTransaction:(id)arg1 ;
+(id)transactionMissingDomainErrorWithTransaction:(id)arg1 ;
+(id)transactionMissingURLErrorWithTransaction:(id)arg1 ;
+(id)transactionCancelledErrorWithTransaction:(id)arg1 ;
+(id)delegateCancelledErrorWithTransaction:(id)arg1 ;
+(id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 ;
+(id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 ;
-(id)previousStoreAccountKey;
-(id)currentStoreAccountKey;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(IMCloudSyncTransaction *)transaction;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isClampError;
-(double)retrySeconds;
-(char)isAuthenticationError;
-(char)isTransactionCancelledError;
-(char)isAccountsChangedError;
-(char)isRecoverableError;
-(char)isTransactionMissingInformationError;
@end
