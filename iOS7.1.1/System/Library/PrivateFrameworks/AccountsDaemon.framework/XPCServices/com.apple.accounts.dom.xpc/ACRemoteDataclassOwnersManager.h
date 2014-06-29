/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:27:41 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/XPCServices/com.apple.accounts.dom.xpc/com.apple.accounts.dom
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsDaemon/ACDDataclassOwnersManagerProtocol.h>

@protocol OS_dispatch_queue;
@class NSSet, NSMutableDictionary, NSObject, ACAccountStore;

@interface ACRemoteDataclassOwnersManager : NSObject <ACDDataclassOwnersManagerProtocol> {

	NSSet* _dataclassOwners;
	NSMutableDictionary* _dataclassToOwnerMap;
	NSObject<OS_dispatch_queue>* _dataclassActionQueue;
	NSMutableDictionary* _pendingActionBatches;
	ACAccountStore* _accountStore;

}
-(id)_ownerForDataclass:(id)arg1 ;
-(void)_incrementBusyCounterForAccount:(id)arg1 ;
-(void)_decrementBusyCounterForAccount:(id)arg1 ;
-(id)_dataclassToOwnerMap;
-(void)_setOwner:(id)arg1 forDataclass:(id)arg2 ;
-(id)init;
-(void).cxx_destruct;
-(void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)_accountStore;
@end

