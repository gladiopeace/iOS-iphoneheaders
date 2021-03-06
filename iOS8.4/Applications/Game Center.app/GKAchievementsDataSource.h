/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBasicCollectionViewDataSource.h>

@class GKGameRecord, NSArray, NSOrderedSet, GKSectionHeaderView, NSMutableSet;

@interface GKAchievementsDataSource : GKBasicCollectionViewDataSource {

	GKGameRecord* _gameRecord;
	NSArray* _achievements;
	unsigned _earnedPoints;
	unsigned _completedAchievements;
	NSOrderedSet* _localAchievements;
	GKSectionHeaderView* _headerView;
	NSMutableSet* _challengeableAchievementIDs;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                               //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * achievements;                                  //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) unsigned earnedPoints;                                   //@synthesize earnedPoints=_earnedPoints - In the implementation block
@property (assign,nonatomic) unsigned completedAchievements;                          //@synthesize completedAchievements=_completedAchievements - In the implementation block
@property (nonatomic,retain) NSOrderedSet * localAchievements;                        //@synthesize localAchievements=_localAchievements - In the implementation block
@property (nonatomic,retain) GKSectionHeaderView * headerView;                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSMutableSet * challengeableAchievementIDs;              //@synthesize challengeableAchievementIDs=_challengeableAchievementIDs - In the implementation block
-(unsigned)earnedPoints;
-(unsigned)completedAchievements;
-(id)initWithGameRecord:(id)arg1 ;
-(char)localPlayerFriendsChallengeableForAchievement:(id)arg1 ;
-(NSOrderedSet *)localAchievements;
-(void)setLocalAchievements:(NSOrderedSet *)arg1 ;
-(id)localPlayerAchievementAtIndexPath:(id)arg1 ;
-(void)setEarnedPoints:(unsigned)arg1 ;
-(void)setCompletedAchievements:(unsigned)arg1 ;
-(NSMutableSet *)challengeableAchievementIDs;
-(void)setChallengeableAchievementIDs:(NSMutableSet *)arg1 ;
-(id)sectionTitle;
-(void)dealloc;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(GKSectionHeaderView *)headerView;
-(void)setHeaderView:(GKSectionHeaderView *)arg1 ;
-(NSArray *)achievements;
-(void)setAchievements:(NSArray *)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
@end

