/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <aosnotifyd/APSConnectionDelegate.h>

@class APSConnection, NSMutableArray, NSString;

@interface AOSAPSHandler : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSMutableArray* _registeredDelegates;
	NSMutableArray* _pendingPushes;
	NSString* _environmentName;

}

@property (nonatomic,readonly) NSString * apsToken; 
@property (nonatomic,retain) APSConnection * apsConnection;                     //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredDelegates;              //@synthesize registeredDelegates=_registeredDelegates - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingPushes;                    //@synthesize pendingPushes=_pendingPushes - In the implementation block
@property (nonatomic,retain) NSString * environmentName;                        //@synthesize environmentName=_environmentName - In the implementation block
+(void)startupComplete;
+(id)instanceForEnvironment:(id)arg1 ;
-(void)registerDelegate:(id)arg1 forTopic:(id)arg2 ;
-(id)apsToken;
-(void)deregisterDelegate:(id)arg1 ;
-(id)apsConnection;
-(void)setApsConnection:(id)arg1 ;
-(void)setRegisteredDelegates:(id)arg1 ;
-(void)setPendingPushes:(id)arg1 ;
-(id)registeredDelegates;
-(id)pendingPushes;
-(void)handleMessage:(id)arg1 onTopic:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)initWithEnvironmentName:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)setEnvironmentName:(id)arg1 ;
-(id)environmentName;
@end

