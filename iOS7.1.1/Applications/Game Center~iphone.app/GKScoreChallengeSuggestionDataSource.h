/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKPlayer, GKGame, NSDictionary;

@interface GKScoreChallengeSuggestionDataSource : GKBasicCollectionViewDataSource {

	GKPlayer* _friend;
	GKGame* _game;
	NSDictionary* _leaderboardIdentifierToLeaderboard;

}

@property (nonatomic,retain) GKPlayer * friend;                                              //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                  //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardIdentifierToLeaderboard;              //@synthesize leaderboardIdentifierToLeaderboard=_leaderboardIdentifierToLeaderboard - In the implementation block
+(id)suggestionDataSourceForFriend:(id)arg1 game:(id)arg2 ;
-(id)initWithFriend:(id)arg1 game:(id)arg2 ;
-(void)setLeaderboardIdentifierToLeaderboard:(id)arg1 ;
-(id)leaderboardIdentifierToLeaderboard;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)sectionTitle;
-(id)friend;
-(void)setFriend:(id)arg1 ;
@end

