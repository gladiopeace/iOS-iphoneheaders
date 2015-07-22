/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:35:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <FMF/NSCopying.h>
#import <FMF/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary, NSNumber;

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding> {

	char _pending;
	NSString* _identifier;
	NSString* _serverId;
	NSArray* _aliasServerIds;
	NSArray* _invitationSentToIds;
	NSDictionary* _expiresByGroupId;
	NSString* _hashedDSID;
	NSNumber* _trackingTimestamp;
	NSString* __prettyNameInternal;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serverId;                          //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,copy) NSArray * aliasServerIds;                     //@synthesize aliasServerIds=_aliasServerIds - In the implementation block
@property (nonatomic,copy) NSArray * invitationSentToIds;                //@synthesize invitationSentToIds=_invitationSentToIds - In the implementation block
@property (nonatomic,copy) NSDictionary * expiresByGroupId;              //@synthesize expiresByGroupId=_expiresByGroupId - In the implementation block
@property (nonatomic,copy) NSString * hashedDSID;                        //@synthesize hashedDSID=_hashedDSID - In the implementation block
@property (assign,getter=isPending,nonatomic) char pending;              //@synthesize pending=_pending - In the implementation block
@property (nonatomic,copy) NSNumber * trackingTimestamp;                 //@synthesize trackingTimestamp=_trackingTimestamp - In the implementation block
@property (nonatomic,copy) NSString * _prettyNameInternal;               //@synthesize _prettyNameInternal=__prettyNameInternal - In the implementation block
+(char)supportsSecureCoding;
+(id)handleWithId:(id)arg1 serverId:(id)arg2 ;
+(id)handleWithId:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPending:(char)arg1 ;
-(id)prettyName;
-(char)isPending;
-(id)recordId;
-(void)setServerId:(NSString *)arg1 ;
-(NSString *)serverId;
-(void)set_prettyNameInternal:(NSString *)arg1 ;
-(void)setTrackingTimestamp:(NSNumber *)arg1 ;
-(NSDictionary *)expiresByGroupId;
-(void)setExpiresByGroupId:(NSDictionary *)arg1 ;
-(NSNumber *)trackingTimestamp;
-(NSString *)hashedDSID;
-(void)setHashedDSID:(NSString *)arg1 ;
-(NSString *)_prettyNameInternal;
-(void)addressBookDidChange;
-(void)setICloudId:(id)arg1 ;
-(char)isSharingThroughGroupId:(id)arg1 ;
-(int)prettyNameCompare:(id)arg1 ;
-(NSArray *)aliasServerIds;
-(void)setAliasServerIds:(NSArray *)arg1 ;
-(NSArray *)invitationSentToIds;
-(void)setInvitationSentToIds:(NSArray *)arg1 ;
@end
