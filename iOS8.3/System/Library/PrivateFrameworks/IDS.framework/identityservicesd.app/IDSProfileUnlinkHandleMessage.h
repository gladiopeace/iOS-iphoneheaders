/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:04:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSString;

@interface IDSProfileUnlinkHandleMessage : IDSProfileMessage <NSCopying> {

	NSString* _uri;

}

@property (setter=setURI:,copy) NSString * URI;              //@synthesize uri=_uri - In the implementation block
-(void)setURI:(NSString *)arg1 ;
-(NSString *)URI;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bagKey;
-(char)wantsSignature;
-(char)wantsBodySignature;
-(id)additionalMessageHeaders;
-(id)messageBody;
-(id)requiredKeys;
@end
