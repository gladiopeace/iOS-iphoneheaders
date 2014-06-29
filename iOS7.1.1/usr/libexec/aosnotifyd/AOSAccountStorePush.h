/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <aosnotifyd/AOSAccountStore.h>

@class NSMutableArray;

@interface AOSAccountStorePush : NSObject <AOSAccountStore> {

	NSMutableArray* _accountsList;

}

@property (nonatomic,retain) NSMutableArray * accountsList;              //@synthesize accountsList=_accountsList - In the implementation block
-(void)loadExistingAccounts;
-(id)accountsList;
-(void)setAccountsList:(id)arg1 ;
-(void)saveChanges;
-(void).cxx_destruct;
-(id)accounts;
-(void)removeAccount:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
@end

