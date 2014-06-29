/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKSessionGlobals : NSObject {

	unsigned* _activePIDList;
	unsigned long long _activePIDListSize;
	unsigned long long _activePIDListCount;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)lock;
-(void)unlock;
-(void)unregisterPID:(unsigned)arg1 ;
-(void)registerPID:(unsigned)arg1 ;
-(bool)hasActivePID:(unsigned)arg1 ;
@end

