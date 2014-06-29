/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:21:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBManagerDelegate
@optional
-(void)managerDidFinishBackup:(id)arg1;
-(void)managerDidFinishScan:(id)arg1;
-(void)managerDidFinishRestore:(id)arg1;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
-(void)manager:(id)arg1 didFailScanWithError:(id)arg2;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
-(void)managerDidCancelRestore:(id)arg1;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned)arg3;
-(void)manager:(id)arg1 didSetBackupEnabled:(BOOL)arg2;
-(void)managerDidLoseConnectionToService:(id)arg1;
@end

