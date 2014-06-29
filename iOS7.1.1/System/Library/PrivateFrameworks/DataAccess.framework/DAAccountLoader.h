/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DAAccountLoader : NSObject {

	NSMutableDictionary* _acAccountTypeToAccountFrameworkSubpath;
	NSMutableDictionary* _acAccountTypeToAccountDaemonBundleSubpath;
	NSMutableDictionary* _acAccountTypeToClassNames;
	NSMutableDictionary* _acParentAccountTypeToChildAccountTypes;

}
+(id)sharedInstance;
-(id)init;
-(Class)daemonAppropriateAccountClassForACAccount:(id)arg1 ;
-(void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2 ;
-(bool)_loadFrameworkAtSubpath:(id)arg1 ;
-(void)loadFrameworkForACAccountType:(id)arg1 ;
-(void)loadDaemonBundleForACAccountType:(id)arg1 ;
-(Class)daemonAccountClassForACAccount:(id)arg1 ;
-(Class)clientAccountClassForACAccount:(id)arg1 ;
-(Class)accountClassForACAccount:(id)arg1 ;
-(Class)agentClassForACAccount:(id)arg1 ;
@end

