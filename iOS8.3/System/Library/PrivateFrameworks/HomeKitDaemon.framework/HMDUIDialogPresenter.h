/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:01:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDUIDialogPresenter : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)sharedUIDialogPresenter;
-(id)init;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)confirmAddUser:(id)arg1 toHome:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)confirmRemoveUser:(id)arg1 fromHome:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)presentDialogWithInfo:(id)arg1 options:(unsigned long)arg2 textField:(id*)arg3 ;
-(void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)presentDialogWithInfo:(id)arg1 options:(unsigned long)arg2 textField:(id*)arg3 timeout:(double)arg4 ;
-(void)requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)confirmInviteFromUser:(id)arg1 forHome:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)displayKeychainSyncForHome:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end
