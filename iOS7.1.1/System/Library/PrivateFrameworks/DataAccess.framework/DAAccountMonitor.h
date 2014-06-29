/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DataAccess/DataAccess-Structs.h>
@class NSObject;

@interface DAAccountMonitor : NSObject {

	CFSetRef _accounts;
	NSObject<OS_dispatch_queue>* _accountsQueue;

}
+(id)sharedMonitor;
-(void)dealloc;
-(id)init;
-(void)unmonitorAccount:(id)arg1 ;
-(void)monitorAccount:(id)arg1 ;
-(id)monitoredAccounts;
@end

