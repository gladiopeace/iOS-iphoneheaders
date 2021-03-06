/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GKSessionDelegate.h>

@class GKTurnBasedMatchInternal, NSArray, NSString, NSDate, GKTurnBasedParticipant, NSData, GKPlayer, GKGame;

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {

	unsigned _state;
	GKTurnBasedMatchInternal* _internal;
	NSArray* _participants;
	NSArray* _exchanges;

}

@property (nonatomic,@dynamic,readonly) NSString * matchID; 
@property (nonatomic,@dynamic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSArray * participants;                                                          //@synthesize participants=_participants - In the implementation block
@property (nonatomic,@dynamic,readonly) long long status; 
@property (nonatomic,retain) GKTurnBasedParticipant * currentParticipant; 
@property (nonatomic,@dynamic,readonly) NSData * matchData; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic,@dynamic) unsigned long long matchDataMaximumSize; 
@property (nonatomic,readonly) NSArray * exchanges;                                                             //@synthesize exchanges=_exchanges - In the implementation block
@property (nonatomic,readonly) NSArray * activeExchanges; 
@property (nonatomic,readonly) NSArray * completedExchanges; 
@property (nonatomic,@dynamic,readonly) unsigned long long exchangeDataMaximumSize; 
@property (nonatomic,@dynamic,readonly) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; 
@property (retain) GKTurnBasedMatchInternal * internal;                                                         //@synthesize internal=_internal - In the implementation block
@property (nonatomic,@dynamic,copy) NSDate * lastTurnDate; 
@property (nonatomic,@dynamic,readonly) long long turnNumber; 
@property (nonatomic,readonly) NSDate * dateSortKey; 
@property (nonatomic,readonly) GKTurnBasedParticipant * previousParticipant; 
@property (nonatomic,readonly) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * localPlayerParticipant; 
@property (nonatomic,readonly) GKPlayer * showcasePlayer; 
@property (nonatomic,readonly) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser; 
@property (nonatomic,@dynamic,readonly) GKPlayer * currentPlayer; 
@property (nonatomic,@dynamic,retain) NSString * bundleID; 
@property (nonatomic,@dynamic,retain) NSString * bundleVersion; 
@property (assign,nonatomic) unsigned state;                                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,@dynamic,readonly) bool isMyTurn; 
@property (nonatomic,readonly) bool localPlayerHasRecentTurn; 
@property (nonatomic,@dynamic,readonly) GKGame * game; 
+(id)keyPathsForValuesAffectingStatus;
+(void)getTurnBasedBadgeCountWithHandler:(/*^block*/ id)arg1 ;
+(void)loadMatchesIncludingCompatibleBundleID:(bool)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(id)matchesWithInternalRepresentations:(id)arg1 ;
+(void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(bool)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
+(id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3 ;
+(void)loadMatchesWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)loadTurnBasedMatchSummaries:(/*^block*/ id)arg1 ;
+(void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(bool)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadMatchWithID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)findMatchForRequest:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(bool)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)setInternal:(id)arg1 ;
-(unsigned long long)exchangeDataMaximumSize;
-(unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
-(void)rematchWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)exchangeForID:(id)arg1 ;
-(void)_updateWithInternal:(id)arg1 ;
-(id)_participantsForInternalRepresentation:(id)arg1 ;
-(id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2 ;
-(id)exchanges;
-(id)currentPlayer;
-(void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2 ;
-(unsigned long long)matchDataMaximumSize;
-(void)setCurrentParticipant:(id)arg1 ;
-(id)previousParticipant;
-(void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)indexesForParticipants:(id)arg1 ;
-(void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(bool)localPlayerHasRecentTurn;
-(id)completedExchanges;
-(void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)game;
-(id)internal;
-(id)dateSortKey;
-(id)currentParticipant;
-(id)activeExchanges;
-(id)firstWinnerOrTiedOrLastLoser;
-(id)previousParticipantOrFirstKnownPlayer;
-(id)localPlayerParticipant;
-(id)participants;
-(id)showcasePlayer;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)playingWithParticipantOrFirstKnownPlayer;
-(void)acceptInviteWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)declineInviteWithCompletionHandler:(/*^block*/ id)arg1 ;
-(bool)isMyTurn;
-(void)loadMatchDataWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)participantQuitOutOfTurnWithOutcome:(long long)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)removeWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(bool)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)state;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)message;
-(long long)compare:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(long long)status;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

