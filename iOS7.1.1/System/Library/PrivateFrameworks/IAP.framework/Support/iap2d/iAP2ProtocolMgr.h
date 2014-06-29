/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface iAP2ProtocolMgr : NSObject {

	bool InitComplete;
	NSObject<OS_dispatch_queue>* _TimerQ;

}

@property (nonatomic,readonly) bool InitComplete; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * TimerQ;              //@synthesize TimerQ=_TimerQ - In the implementation block
+(id)sharedInstance;
-(bool)ProcessControlSession:(unsigned char)arg1 ForPort:(id)arg2 Data:(char*)arg3 Len:(unsigned)arg4 ;
-(bool)ProcessBufferSession:(unsigned char)arg1 ForPort:(id)arg2 Data:(char*)arg3 Len:(unsigned)arg4 ;
-(bool)ProcessEASession:(unsigned char)arg1 ForPort:(id)arg2 Data:(char*)arg3 Len:(unsigned)arg4 ;
-(bool)ProcessTestSession:(unsigned char)arg1 ForPort:(id)arg2 Data:(char*)arg3 Len:(unsigned)arg4 ;
-(bool)InitComplete;
-(id)TimerQ;
-(void)dealloc;
-(id)init;
@end

