/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:38:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {

	NSLock* _lock;
	NSString* _hostname;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	CFDictionaryRef _observers;
	char _isReachable;
	char _receivedAtLeastOneCallback;

}

@property (assign,nonatomic) NSString * hostname;              //@synthesize hostname=_hostname - In the implementation block
-(void)dealloc;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)reachabilityChangedWithFlags:(unsigned)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
-(char)hasObservers;
@end

