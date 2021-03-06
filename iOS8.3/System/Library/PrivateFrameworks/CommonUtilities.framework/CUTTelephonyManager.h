/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@class NSRecursiveLock, NSMutableSet;

@interface CUTTelephonyManager : NSObject {

	char _registered;
	NSRecursiveLock* _lock;
	NSMutableSet* _disableFastDormancyTokens;
	void* _suspendDormancyAssertion;
	CTServerConnectionRef _serverConnection;

}

@property (assign,nonatomic) CTServerConnectionRef _serverConnection;               //@synthesize serverConnection=_serverConnection - In the implementation block
@property (assign,nonatomic) char registered;                                       //@synthesize registered=_registered - In the implementation block
@property (assign,nonatomic) void* _suspendDormancyAssertion;                       //@synthesize suspendDormancyAssertion=_suspendDormancyAssertion - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * disableFastDormancyTokens;              //@synthesize disableFastDormancyTokens=_disableFastDormancyTokens - In the implementation block
+(id)sharedInstance;
-(char)registered;
-(void)setRegistered:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(NSRecursiveLock *)lock;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(void)_adjustFastDormancyTokens;
-(char)disableFastDormancy;
-(void)_setFastDormancySuspended:(char)arg1 ;
-(void)__adjustFastDormancyTokens;
-(NSMutableSet *)disableFastDormancyTokens;
-(void)setDisableFastDormancyTokens:(NSMutableSet *)arg1 ;
-(CTServerConnectionRef)_serverConnection;
-(void)set_serverConnection:(CTServerConnectionRef)arg1 ;
-(void*)_suspendDormancyAssertion;
-(void)set_suspendDormancyAssertion:(void*)arg1 ;
@end

