/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:33:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccount;

@interface ACDAccountChange : NSObject {

	int _changeType;
	ACAccount* _account;
	ACAccount* _oldAccount;

}

@property (assign,nonatomic) int changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccount * oldAccount;              //@synthesize oldAccount=_oldAccount - In the implementation block
+(id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)setOldAccount:(ACAccount *)arg1 ;
-(id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(ACAccount *)oldAccount;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
@end
