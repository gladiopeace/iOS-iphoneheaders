/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKExpiringCacheObject.h>
#import <gamed/GKCacheObjectImageProtocol.h>

@class NSString, NSNumber, NSDate, GKAchievementDescriptionListCacheObject, NSSet, GKLeaderboardSetListCacheObject, GKTurnBasedSessionListCacheObject;

@interface GKGameCacheObject : GKExpiringCacheObject <GKCacheObjectImageProtocol>

@property (nonatomic,@dynamic,retain) NSString * language; 
@property (nonatomic,@dynamic,retain) NSString * bundleID; 
@property (nonatomic,@dynamic,retain) NSString * bundleVersion; 
@property (nonatomic,@dynamic,retain) NSNumber * adamID; 
@property (nonatomic,@dynamic,retain) NSNumber * externalVersion; 
@property (assign,nonatomic,@dynamic) NSString * softwareType; 
@property (nonatomic,@dynamic,retain) NSString * name; 
@property (assign,nonatomic,@dynamic) BOOL prerendered; 
@property (assign,nonatomic,@dynamic) BOOL supportsLeaderboards; 
@property (assign,nonatomic,@dynamic) BOOL hasAggregateLeaderboard; 
@property (assign,nonatomic,@dynamic) unsigned numberOfCategories; 
@property (assign,nonatomic,@dynamic) BOOL supportsLeaderboardSets; 
@property (assign,nonatomic,@dynamic) unsigned numberOfLeaderboardSets; 
@property (nonatomic,@dynamic,retain) NSString * defaultCategory; 
@property (assign,nonatomic,@dynamic) BOOL supportsAchievements; 
@property (assign,nonatomic,@dynamic) unsigned numberOfAchievements; 
@property (assign,nonatomic,@dynamic) unsigned maxAchievementPoints; 
@property (assign,nonatomic,@dynamic) BOOL supportsMultiplayer; 
@property (assign,nonatomic,@dynamic) BOOL supportsTurnBasedMultiplayer; 
@property (nonatomic,@dynamic,retain) NSDate * storePiecesExpirationDate; 
@property (nonatomic,@dynamic,retain) NSString * artistName; 
@property (assign,nonatomic,@dynamic) long long numberOfUserRatings; 
@property (assign,nonatomic,@dynamic) float averageUserRating; 
@property (nonatomic,@dynamic,retain) NSString * priceDisplay; 
@property (nonatomic,@dynamic,retain) NSString * viewItemURL; 
@property (nonatomic,@dynamic,retain) NSString * tellAFriendMessageContentsUrl; 
@property (assign,nonatomic,@dynamic) BOOL owned; 
@property (nonatomic,@dynamic,retain) NSString * shortViewItemURL; 
@property (nonatomic,@dynamic,retain) GKAchievementDescriptionListCacheObject * achievementDescriptionList; 
@property (nonatomic,@dynamic,retain) NSSet * achievementLists; 
@property (nonatomic,@dynamic,retain) GKLeaderboardSetListCacheObject * leaderboardSetList; 
@property (nonatomic,@dynamic,retain) NSSet * leaderboardLists; 
@property (nonatomic,@dynamic,retain) NSSet * leaderboards; 
@property (nonatomic,@dynamic,retain) GKTurnBasedSessionListCacheObject * turnBasedSessionList; 
@property (nonatomic,@dynamic,retain) NSSet * turnBasedSessions; 
@property (nonatomic,@dynamic,retain) NSSet * recentPlayerLists; 
@property (nonatomic,@dynamic,retain) NSSet * playerLists; 
@property (nonatomic,@dynamic,retain) NSSet * topGameEntries; 
@property (nonatomic,@dynamic,retain) NSSet * recommendationEntries; 
@property (nonatomic,@dynamic,retain) NSSet * flowRates; 
@property (nonatomic,@dynamic,retain) NSSet * invites; 
@property (nonatomic,@dynamic,retain) NSSet * playersToInvite; 
@property (nonatomic,@dynamic,retain) NSSet * gameRecords; 
@property (nonatomic,@dynamic,retain) NSSet * players; 
@property (nonatomic,@dynamic,retain) NSSet * listEntries; 
@property (nonatomic,@dynamic,retain) NSString * image64; 
@property (nonatomic,@dynamic,retain) NSString * image128; 
@property (nonatomic,@dynamic,retain) NSString * image256; 
@property (nonatomic,@dynamic,retain) NSString * image512; 
+(id)uniqueAttributeName;
+(id)fetchSortDescriptors;
+(id)gameForBundleID:(id)arg1 language:(id)arg2 context:(id)arg3 ;
+(id)gamesForBundleIDs:(id)arg1 language:(id)arg2 context:(id)arg3 ;
+(id)uniqueObjectIDLookupForLanguage:(id)arg1 context:(id)arg2 ;
+(id)gameForGameDescriptor:(id)arg1 language:(id)arg2 context:(id)arg3 ;
+(id)gamesForGameDescriptors:(id)arg1 language:(id)arg2 context:(id)arg3 ;
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(void)updateWithGameDescriptor:(id)arg1 ;
-(BOOL)storePiecesValid;
-(void)updateWithPushGameDescriptor:(id)arg1 ;
-(void)updateStorePiecesWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)storePiecesExpired;
-(id)leaderboardSetWithIdentifier:(id)arg1 ;
-(id)internalRepresentation;
-(id)gameDescriptor;
-(BOOL)isValid;
@end

