/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {

	unsigned _contextID;
	NSString* _clientID;
	NSString* _displayUUID;

}

@property (nonatomic,readonly) NSString * clientID;                 //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) NSString * displayUUID;              //@synthesize displayUUID=_displayUUID - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                  //@synthesize contextID=_contextID - In the implementation block
+(bool)supportsSecureCoding;
+(id)propertiesWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned)arg3 ;
+(id)propertiesWithMainDisplayAndClientID:(id)arg1 contextID:(unsigned)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)contextID;
-(id)initWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned)arg3 ;
-(id)displayUUID;
-(bool)isEqualNotIncludingClientID:(id)arg1 ;
-(id)propertiesOneLevelMoreGeneric;
-(id)clientID;
@end

