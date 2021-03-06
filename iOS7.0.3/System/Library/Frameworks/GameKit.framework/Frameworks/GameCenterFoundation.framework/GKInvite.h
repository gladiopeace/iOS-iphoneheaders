/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class GKInviteInternal, GKPlayer, NSString, NSData;

@interface GKInvite : NSObject {

	BOOL _cancelled;
	GKInviteInternal* _internal;
	GKPlayer* _invitingPlayer;

}

@property (nonatomic,@dynamic,readonly) NSString * inviter; 
@property (getter=isHosted,nonatomic,@dynamic,readonly) BOOL hosted; 
@property (nonatomic,@dynamic,readonly) unsigned playerGroup; 
@property (nonatomic,@dynamic,readonly) unsigned playerAttributes; 
@property (retain) GKInviteInternal * internal;                                   //@synthesize internal=_internal - In the implementation block
@property (nonatomic,@dynamic,readonly) NSString * inviteID; 
@property (nonatomic,@dynamic,readonly) NSData * sessionToken; 
@property (nonatomic,@dynamic,readonly) NSString * message; 
@property (nonatomic,@dynamic,readonly) BOOL isNearby; 
@property (nonatomic,readonly) GKPlayer * invitingPlayer;                         //@synthesize invitingPlayer=_invitingPlayer - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                   //@synthesize cancelled=_cancelled - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)setInternal:(id)arg1 ;
-(id)internal;
-(BOOL)isHosted;
-(id)invitingPlayer;
-(id)inviter;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)isCancelled;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

