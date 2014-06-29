/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKStateMachine.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface GKAuthenticationMachine : GKStateMachine <NSCoding, NSSecureCoding> {

	BOOL _credentialsModified;
	int _loginCancelledCount;
	NSString* _accountName;
	NSString* _playerID;
	NSString* _authToken;
	int _serverEnvironment;

}

@property (assign,nonatomic) int loginCancelledCount;               //@synthesize loginCancelledCount=_loginCancelledCount - In the implementation block
@property (nonatomic,retain) NSString * accountName;                //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,retain) NSString * playerID;                   //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * authToken;                  //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) int serverEnvironment;                 //@synthesize serverEnvironment=_serverEnvironment - In the implementation block
@property (assign,nonatomic) BOOL credentialsModified;              //@synthesize credentialsModified=_credentialsModified - In the implementation block
+(void)transferLegacyAccountInformation;
+(BOOL)supportsSecureCoding;
-(BOOL)isPlayerLoggedIn;
-(void)resetToInitialState;
-(void)setServerEnvironment:(int)arg1 ;
-(void)searchForAccountsAddedBehindOurBack;
-(BOOL)hasPlayerCredentials;
-(int)serverEnvironment;
-(int)loginCancelledCount;
-(void)setCredentialsModified:(BOOL)arg1 ;
-(BOOL)credentialsModified;
-(void)setLoginCancelledCount:(int)arg1 ;
-(void)didEnterCredentialsNeeded;
-(BOOL)shouldEnterAuthenticated;
-(void)didEnterAuthorized;
-(void)didEnterCancelled;
-(void)didEnterDisabled;
-(void)setPlayerID:(id)arg1 ;
-(id)playerID;
-(void)stateDidChange;
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)synchronize;
-(void)_commonInit;
-(void)setAccountName:(id)arg1 ;
-(id)accountName;
@end

