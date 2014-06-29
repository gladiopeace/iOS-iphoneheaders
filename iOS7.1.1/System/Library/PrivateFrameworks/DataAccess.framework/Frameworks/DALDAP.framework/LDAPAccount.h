/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAAccount.h>

@class NSMutableSet, NSMutableArray, LDAPTaskManager;

@interface LDAPAccount : DAAccount {

	NSMutableSet* _searchTaskSet;
	bool _isShuttingDown;
	NSMutableArray* _searchSettings;

}

@property (nonatomic,readonly) LDAPTaskManager * taskManager; 
-(void)dealloc;
-(bool)isLDAPAccount;
-(void)ingestBackingAccountInfoProperties;
-(id)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(bool)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(void)addSearchSettings:(id)arg1 ;
-(id)connectionURLWithSSL:(bool)arg1 ;
-(void)ldapSearchTask:(id)arg1 finishedWithError:(id)arg2 foundItems:(id)arg3 ;
-(void)ldapGetDefaultSearchBaseTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 defaultSearchBase:(id)arg4 ;
-(void)removeSearchSettings:(id)arg1 ;
-(id)connectionURL;
-(id)searchSettings;
@end

