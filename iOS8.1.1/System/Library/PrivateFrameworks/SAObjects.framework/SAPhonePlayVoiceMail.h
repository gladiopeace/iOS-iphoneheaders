/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (nonatomic,copy) NSURL * voiceMailId; 
+(id)playVoiceMail;
+(id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)_afui_isUsefulUserResultCommand;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSURL *)voiceMailId;
-(void)setVoiceMailId:(NSURL *)arg1 ;
@end

