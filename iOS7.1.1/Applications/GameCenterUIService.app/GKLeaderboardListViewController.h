/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKBasicCollectionViewController.h>

@class GKLeaderboardSet, GKGameRecord, GKPlayer;

@interface GKLeaderboardListViewController : GKBasicCollectionViewController {

	GKLeaderboardSet* _leaderboardSet;
	GKGameRecord* _game;
	GKPlayer* _player;

}

@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;              //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) GKGameRecord * game;                            //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                              //@synthesize player=_player - In the implementation block
-(id)leaderboardSet;
-(id)initWithGame:(id)arg1 player:(id)arg2 ;
-(id)initWithLeaderboardSet:(id)arg1 game:(id)arg2 player:(id)arg3 ;
-(void)setLeaderboardSet:(id)arg1 ;
-(void)showLeaderboard:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)configureDataSource;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

