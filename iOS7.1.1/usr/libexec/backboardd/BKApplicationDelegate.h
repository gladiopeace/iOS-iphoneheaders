/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKApplicationDelegate <NSObject>
@required
-(void)applicationDidActivate:(id)arg1 withInfo:(id)arg2;
-(void)applicationDidExit:(id)arg1 withInfo:(id)arg2;
-(void)applicationDidSuspend:(id)arg1 withSettings:(id)arg2;
-(void)applicationSuspendSettingsDidChange:(id)arg1 withSettings:(id)arg2;
-(void)applicationDidFinishBackgroundContentFetching:(id)arg1 withInfo:(id)arg2;
-(BOOL)applicationIsWorkspaceSuspended:(id)arg1;
-(void)applicationDidReceiveForceQuit:(id)arg1;
@end

