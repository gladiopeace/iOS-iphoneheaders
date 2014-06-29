/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <aosnotifyd/AOSAccountStore.h>

@class AOSFMIPAccount, NSDictionary;

@interface AOSAccountStoreFMIP : NSObject <AOSAccountStore> {

	BOOL _initialized;
	AOSFMIPAccount* _currentAccount;
	NSDictionary* _fmipStateChangeCriteria;

}

@property (nonatomic,retain) AOSFMIPAccount * currentAccount;                     //@synthesize currentAccount=_currentAccount - In the implementation block
@property (nonatomic,retain) NSDictionary * fmipStateChangeCriteria;              //@synthesize fmipStateChangeCriteria=_fmipStateChangeCriteria - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                    //@synthesize initialized=_initialized - In the implementation block
-(void)loadExistingAccounts;
-(id)_accountFromBackedUpDictionary:(id)arg1 andNotBackedUpDictionary:(id)arg2 ;
-(void)setCurrentAccount:(id)arg1 ;
-(id)currentAccount;
-(void)_checkOSVersionHistoryUsingBackedUpVersion:(id)arg1 nonBackedUpVersion:(id)arg2 ;
-(id)_stateChangeCriteriaForAccount:(id)arg1 ;
-(void)setFmipStateChangeCriteria:(id)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(id)fmipStateChangeCriteria;
-(void)_saveDictionaryForAccount:(id)arg1 ;
-(id)_backedUpDictionaryFromAccount:(id)arg1 ;
-(id)_notBackedUpDictionaryFromAccount:(id)arg1 ;
-(void)saveChanges;
-(void).cxx_destruct;
-(BOOL)initialized;
-(id)accounts;
-(void)removeAccount:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
@end

