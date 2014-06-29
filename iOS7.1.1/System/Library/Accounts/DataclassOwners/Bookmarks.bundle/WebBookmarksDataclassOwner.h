/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Accounts/DataclassOwners/Bookmarks.bundle/Bookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bookmarks/ACDDataclassOwnerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore;

@interface WebBookmarksDataclassOwner : NSObject <ACDDataclassOwnerProtocol> {

	NSObject<OS_dispatch_queue>* _queue;
	ACAccountStore* _accountStore;

}
+(id)dataclasses;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(bool)_isLocalSourceEmpty;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(bool)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 ;
-(id)init;
-(void).cxx_destruct;
@end

