/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@protocol NSURLAuthenticationChallengeSender;
@class NSString;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {

	int _failureCount;
	char _hasPassword;
	NSString* _password;
	id<NSURLAuthenticationChallengeSender> _sender;
	NSString* _user;
	char _userNameIsEditable;

}

@property (assign) int failureCount;                                           //@synthesize failureCount=_failureCount - In the implementation block
@property (assign) char hasPassword;                                           //@synthesize hasPassword=_hasPassword - In the implementation block
@property (retain) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (assign) id<NSURLAuthenticationChallengeSender> sender;              //@synthesize sender=_sender - In the implementation block
@property (retain) NSString * user;                                            //@synthesize user=_user - In the implementation block
@property (assign) char userNameIsEditable;                                    //@synthesize userNameIsEditable=_userNameIsEditable - In the implementation block
-(char)hasPassword;
-(void)dealloc;
-(id)init;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(void)setSender:(id<NSURLAuthenticationChallengeSender>)arg1 ;
-(NSString *)password;
-(void)setUser:(NSString *)arg1 ;
-(NSString *)user;
-(void)setPassword:(NSString *)arg1 ;
-(int)failureCount;
-(void)setFailureCount:(int)arg1 ;
-(char)userNameIsEditable;
-(char)userNameIsEmail;
-(void)setUserNameIsEditable:(char)arg1 ;
-(void)setHasPassword:(char)arg1 ;
@end
