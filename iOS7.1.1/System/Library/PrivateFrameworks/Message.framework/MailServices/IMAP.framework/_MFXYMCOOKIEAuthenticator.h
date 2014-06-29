/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFSASLAuthenticator.h>

@class YahooAccount;

@interface _MFXYMCOOKIEAuthenticator : MFSASLAuthenticator {

	YahooAccount* _yahooAccount;
	bool _smtp;

}

@property (nonatomic,retain) YahooAccount * yahooAccount;              //@synthesize yahooAccount=_yahooAccount - In the implementation block
@property (getter=isSMTP,nonatomic,readonly) bool smtp;                //@synthesize smtp=_smtp - In the implementation block
-(void)dealloc;
-(void)setYahooAccount:(id)arg1 ;
-(id)yahooAccount;
-(bool)isSMTP;
-(id)saslName;
-(bool)base64EncodeResponseData;
-(void)setAuthenticationState:(int)arg1 ;
-(id)responseForServerData:(id)arg1 ;
-(id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
@end

