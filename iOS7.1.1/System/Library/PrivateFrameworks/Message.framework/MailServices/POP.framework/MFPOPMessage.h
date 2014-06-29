/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class NSString, NSData;

@interface MFPOPMessage : MFMailMessage {

	long long _messageNumber;
	NSString* _messageID;
	NSData* _messageData;
	bool _messageDataIsComplete;
	unsigned long long _size;
	NSString* _accountURL;

}
-(void)dealloc;
-(void)setMessageID:(id)arg1 ;
-(void)setMessageNumber:(long long)arg1 ;
-(void)setMessageData:(id)arg1 isComplete:(bool)arg2 ;
-(void)setAccountURL:(id)arg1 ;
-(long long)messageNumber;
-(unsigned long long)messageSize;
-(id)messageData;
-(bool)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 ;
-(id)headersIfAvailable;
-(id)messageID;
-(id)originalMailboxURL;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(id)remoteMailboxURL;
-(void)setMessageData:(id)arg1 ;
-(id)headers;
@end

