/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:26 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKGameService.h>
#import <gamed/GKGameServicePrivate.h>

@protocol GKGameServicePrivate <GKGameService>
@required
-(oneway void)getGameMetadataForBundleIDs:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)getTopGamesWithHandler:(/*^block*/ id)arg1;
-(oneway void)getRatingForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)submitRating:(float)arg1 forGameDescriptor:(id)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)markGameRecommendations:(id)arg1 viewed:(BOOL)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)getGameStatsForPlayerID:(id)arg1 bundleIDs:(id)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)getGameRecommendationsWithHandler:(/*^block*/ id)arg1;
-(oneway void)getGamesForPlayerID:(id)arg1 includeInstalled:(BOOL)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)getGamesWithAchievementStatsForPlayerID:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)getStoreItemsForAdamIDs:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)dismissGameRecommendations:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)removeGameForBundleID:(id)arg1 handler:(/*^block*/ id)arg2;
@end


@interface GKGameServicePrivate : GKGameService <GKGameServicePrivate>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(void)submitDelayedRating:(id)arg1 transaction:(id)arg2 ;
-(void)removeGameForDelayedRequest:(id)arg1 transaction:(id)arg2 ;
-(void)loadStorePiecesForGames:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)loadGameMetadataForBundleIDs:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)loadTopGamesWithContext:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)fetchTopGamesInContext:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)fetchGameStatsForPlayerID:(id)arg1 bundleIdentifiers:(id)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(/*^block*/ id)arg5 ;
-(void)scanInstalledGamesForPlayerID:(id)arg1 transaction:(id)arg2 ;
-(void)loadGamesForPlayerID:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)fetchGamesForPlayerID:(id)arg1 includeInstalled:(BOOL)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(/*^block*/ id)arg5 ;
-(void)loadGameStatsForPlayerID:(id)arg1 bundleIdentifiers:(id)arg2 context:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)fetchGameMetadataForBundleIDs:(id)arg1 responseKind:(int)arg2 context:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)loadRatingForGameDescriptor:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)fetchRatingForGameDescriptor:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)loadGamesWithAchievementStatsForPlayer:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)fetchGamesWithAchievementStatsForPlayer:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)loadGameRecommendationsWithContext:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)fetchGameRecommendationsInContext:(id)arg1 responseKind:(int)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)getGameMetadataForBundleIDs:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)getTopGamesWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)getRatingForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)submitRating:(float)arg1 forGameDescriptor:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)markGameRecommendations:(id)arg1 viewed:(BOOL)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)getGameStatsForPlayerID:(id)arg1 bundleIDs:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)getGameRecommendationsWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)getGamesForPlayerID:(id)arg1 includeInstalled:(BOOL)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)getGamesWithAchievementStatsForPlayerID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)getStoreItemsForAdamIDs:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)dismissGameRecommendations:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)removeGameForBundleID:(id)arg1 handler:(/*^block*/ id)arg2 ;
@end

