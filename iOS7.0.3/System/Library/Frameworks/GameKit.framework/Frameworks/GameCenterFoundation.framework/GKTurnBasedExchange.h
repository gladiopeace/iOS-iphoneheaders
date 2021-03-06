/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class GKTurnBasedParticipant, GKTurnBasedMatch, GKTurnBasedExchangeInternal, NSArray, NSString, NSData, NSDate;

@interface GKTurnBasedExchange : NSObject {

	BOOL _status;
	GKTurnBasedParticipant* _sender;
	GKTurnBasedMatch* _matchWeak;
	GKTurnBasedExchangeInternal* _internal;
	NSArray* _replies;
	NSArray* _recipients;

}

@property (nonatomic,@dynamic,retain) NSString * exchangeID; 
@property (nonatomic,retain) GKTurnBasedParticipant * sender;               //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (assign,nonatomic) BOOL status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,@dynamic,readonly) NSString * message; 
@property (nonatomic,@dynamic,retain) NSData * data; 
@property (nonatomic,@dynamic,readonly) NSDate * sendDate; 
@property (nonatomic,@dynamic,retain) NSDate * timeoutDate; 
@property (nonatomic,@dynamic,retain) NSDate * completionDate; 
@property (nonatomic,retain) NSArray * replies;                             //@synthesize replies=_replies - In the implementation block
@property (retain) GKTurnBasedExchangeInternal * internal;                  //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) GKTurnBasedMatch * match;                      //@synthesize matchWeak=_matchWeak - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)setSender:(id)arg1 ;
-(void)setInternal:(id)arg1 ;
-(id)replies;
-(void)setReplies:(id)arg1 ;
-(void)_updateInternalFromMatchInternal:(id)arg1 ;
-(void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)internal;
-(id)match;
-(void)setMatch:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)message;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)sender;
-(BOOL)status;
-(void)setStatus:(BOOL)arg1 ;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

