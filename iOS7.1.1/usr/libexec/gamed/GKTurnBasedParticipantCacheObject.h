/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKCacheObject.h>

@class NSDate, NSString, GKTurnBasedSessionCacheObject;

@interface GKTurnBasedParticipantCacheObject : GKCacheObject

@property (nonatomic,@dynamic,retain) NSDate * lastTurnDate; 
@property (nonatomic,@dynamic,retain) NSDate * timeoutDate; 
@property (nonatomic,@dynamic,retain) NSString * playerID; 
@property (nonatomic,@dynamic,retain) NSString * invitedBy; 
@property (nonatomic,@dynamic,retain) NSString * inviteMessage; 
@property (nonatomic,@dynamic,retain) NSString * status; 
@property (assign,nonatomic,@dynamic) int outcome; 
@property (nonatomic,@dynamic,retain) GKTurnBasedSessionCacheObject * session; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(id)internalRepresentation;
@end

