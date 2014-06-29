/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:26 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKService.h>
#import <gamed/GKChallengeService.h>

@protocol GKChallengeService <NSObject>
@required
-(oneway void)getChallengesForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)issueChallenge:(id)arg1 toPlayerIDs:(id)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)abortChallenges:(id)arg1 handler:(/*^block*/ id)arg2;
@end


@interface GKChallengeService : GKService <GKChallengeService>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(void)loadChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)fetchChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)_determineCompatibleGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2 ;
-(void)_updatePlayersForChallenges:(id)arg1 dispatchGroup:(id)arg2 ;
-(void)_updateGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2 ;
-(id)_filterChallenges:(id)arg1 compatibleWithBundleID:(id)arg2 ;
-(oneway void)getChallengesForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)issueChallenge:(id)arg1 toPlayerIDs:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)abortChallenges:(id)arg1 handler:(/*^block*/ id)arg2 ;
@end

