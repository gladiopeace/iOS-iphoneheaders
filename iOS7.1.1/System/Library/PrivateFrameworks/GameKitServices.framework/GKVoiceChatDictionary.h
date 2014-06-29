/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject {

	NSMutableDictionary* actualDictionary;
	unsigned long long type;
	unsigned orignalCallID;

}

@property (assign) unsigned callID; 
@property (readonly) unsigned originalCallID; 
@property (assign) long long nonce; 
+(bool)validateDictionary:(id)arg1 ;
+(bool)validateInvite:(id)arg1 ;
+(bool)validateReply:(id)arg1 ;
+(bool)validateCancel:(id)arg1 ;
+(bool)validateFocus:(id)arg1 ;
+(id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned)arg4 focus:(bool)arg5 ;
+(id)dictionaryFromData:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)response;
-(id)version;
-(unsigned)callID;
-(void)setCallID:(unsigned)arg1 ;
-(id)participantID;
-(id)connectionData;
-(bool)isFocus;
-(id)fromParticipantID;
-(long long)nonce;
-(id)remoteVCPartyID;
-(id)localVCPartyID;
-(bool)matchesNonce:(long long)arg1 ;
-(unsigned)originalCallID;
-(id)replyDictionary:(unsigned long long)arg1 connectionData:(id)arg2 callID:(unsigned)arg3 focus:(bool)arg4 ;
-(id)cancelDictionary;
-(id)focusDictionary:(bool)arg1 ;
-(bool)isInviteDictionary;
-(bool)isCancelDictionary;
-(bool)isReplyDictionary;
-(bool)isFocusDictionary;
-(bool)matchesResponse:(id)arg1 ;
-(void)setFromParticipantID:(id)arg1 ;
-(void)setNonce:(long long)arg1 ;
-(void)setFocus:(bool)arg1 ;
-(id)createBlob;
-(id)setLocalVCPartyID:(id)arg1 ;
-(id)setRemoteVCPartyID:(id)arg1 ;
@end

