/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <aosnotifyd/AOSAccount.h>

@class NSString, NSArray, NSDate;

@interface AOSFindBaseAccount : AOSAccount {

	NSString* _username;
	NSString* _serverHost;
	NSString* _serverProtocolScheme;
	NSString* _apsEnvironment;
	NSArray* _versionHistory;
	NSDate* _accountAddTime;

}

@property (nonatomic,readonly) NSString * authId; 
@property (nonatomic,readonly) NSString * authToken; 
@property (nonatomic,readonly) NSString * authTokenType; 
@property (nonatomic,retain) NSString * username;                              //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * serverHost;                            //@synthesize serverHost=_serverHost - In the implementation block
@property (nonatomic,retain) NSString * serverProtocolScheme;                  //@synthesize serverProtocolScheme=_serverProtocolScheme - In the implementation block
@property (nonatomic,retain) NSString * apsEnvironment;                        //@synthesize apsEnvironment=_apsEnvironment - In the implementation block
@property (nonatomic,retain) NSArray * versionHistory;                         //@synthesize versionHistory=_versionHistory - In the implementation block
@property (nonatomic,retain) NSDate * accountAddTime;                          //@synthesize accountAddTime=_accountAddTime - In the implementation block
@property (nonatomic,readonly) NSString * apsEnvironmentConstant; 
-(void)copyInfoFromAccount:(id)arg1 ;
-(id)apsEnvironmentConstant;
-(id)accountAddTime;
-(id)authId;
-(id)serverProtocolScheme;
-(id)versionHistory;
-(id)authTokenType;
-(BOOL)hasSameRelevantInfoAs:(id)arg1 ;
-(id)apsEnvironment;
-(void)setVersionHistory:(id)arg1 ;
-(void)setApsEnvironment:(id)arg1 ;
-(void)setServerHost:(id)arg1 ;
-(void)setServerProtocolScheme:(id)arg1 ;
-(void)setAccountAddTime:(id)arg1 ;
-(id)authToken;
-(BOOL)isValid;
-(id)uniqueId;
-(void).cxx_destruct;
-(id)serverHost;
-(void)setUsername:(id)arg1 ;
-(id)username;
@end

