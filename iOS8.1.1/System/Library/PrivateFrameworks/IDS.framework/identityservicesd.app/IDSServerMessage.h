/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSDictionary;

@interface IDSServerMessage : IDSMessage <NSCopying> {

	NSDictionary* _payload;
	long long _command;

}

@property (assign,nonatomic) long long command;                 //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(id)initWithPayload:(id)arg1 command:(id)arg2 ;
-(long long)command;
-(void)dealloc;
-(NSDictionary *)payload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setCommand:(long long)arg1 ;
-(id)messageBody;
@end

