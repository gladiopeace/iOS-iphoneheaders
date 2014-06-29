/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSCore/IDSProfileMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSDictionary;

@interface IDSProfileGetDefaultInvitationContext : IDSProfileMessage <NSCopying> {

	bool _responseValidated;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;

}

@property (copy) NSString * responseRegionID;                     //@synthesize responseRegionID=_responseRegionID - In the implementation block
@property (copy) NSString * responseBasePhoneNumber;              //@synthesize responseBasePhoneNumber=_responseBasePhoneNumber - In the implementation block
@property (copy) NSDictionary * responseExtraInfo;                //@synthesize responseExtraInfo=_responseExtraInfo - In the implementation block
@property (assign) bool responseValidated;                        //@synthesize responseValidated=_responseValidated - In the implementation block
-(id)bagKey;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)responseRegionID;
-(id)responseBasePhoneNumber;
-(id)responseExtraInfo;
-(bool)responseValidated;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setResponseBasePhoneNumber:(id)arg1 ;
-(void)setResponseRegionID:(id)arg1 ;
-(void)setResponseExtraInfo:(id)arg1 ;
-(void)setResponseValidated:(bool)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
@end

