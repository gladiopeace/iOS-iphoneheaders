/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:08:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/imavagent.app/imavagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <imavagent/imavagent-Structs.h>
@class NSRecursiveLock, NSMutableArray, IMRemoteObjectBroadcaster, LocalPreview, NSDate;

@interface IMAVDaemon : NSObject {

	NSRecursiveLock* _listenerLock;
	NSMutableArray* _listeners;
	NSMutableArray* _listenerLocalObjects;
	NSMutableArray* _listenerIDs;
	vproc_transaction_sRef _transaction;
	IMRemoteObjectBroadcaster* _notifier;
	LocalPreview* _localPreview;
	NSDate* _birthDate;
	id _stateMonitor;

}
+(id)sharedInstance;
-(id)_setupInfoForListener:(id)arg1 withContext:(id)arg2 ;
-(void)stopPreviewWithLocalObject:(id)arg1 ;
-(BOOL)_setupListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 setupResponse:(id*)arg5 ;
-(void)startPreviewWithLocalObject:(id)arg1 ;
-(void)startPreviewWithMessageContext:(id)arg1 ;
-(void)stopPreviewWithMessageContext:(id)arg1 ;
-(void)logState;
-(void)_pidSuspended:(int)arg1 ;
-(void)_terminate;
-(void)_removeListener:(id)arg1 ;
-(void)_removeListenerObject:(id)arg1 ;
-(void)_removeLocalListenerObject:(id)arg1 ;
-(void)removeListenerObject:(id)arg1 ;
-(void)removeLocalListenerObject:(id)arg1 ;
-(id)listenerIDForLocalObject:(id)arg1 foundIndex:(unsigned*)arg2 ;
-(id)listenerWithName:(id)arg1 ;
-(BOOL)daemonInterface:(id)arg1 shouldGrantAccessForPID:(int)arg2 auditToken:(SCD_Struct_IM1)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id*)arg7 ;
-(void)dealloc;
-(id)init;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)shutdown;
@end

