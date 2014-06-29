/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKCollectionViewController.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <UIKit/UICollectionViewDelegate.h>

@class GKGamesRecommendationsDataSource, GKPlayer, GKGamesDataSource;

@interface GKGamesViewController : GKCollectionViewController <UIViewControllerRestoration, UICollectionViewDelegate> {

	BOOL _shouldShowPlaceholder;
	BOOL _shouldSupportSearch;
	unsigned _controllerMode;
	GKGamesRecommendationsDataSource* _recommendationsDataSource;
	GKPlayer* _player;
	GKGamesDataSource* _gamesDataSource;
	int _dataSourceType;

}

@property (assign,nonatomic) BOOL shouldShowPlaceholder;                                                //@synthesize shouldShowPlaceholder=_shouldShowPlaceholder - In the implementation block
@property (assign,nonatomic) unsigned controllerMode;                                                   //@synthesize controllerMode=_controllerMode - In the implementation block
@property (nonatomic,retain) GKGamesRecommendationsDataSource * recommendationsDataSource;              //@synthesize recommendationsDataSource=_recommendationsDataSource - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                                         //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGamesDataSource * gamesDataSource;                                       //@synthesize gamesDataSource=_gamesDataSource - In the implementation block
@property (assign,nonatomic) int dataSourceType;                                                        //@synthesize dataSourceType=_dataSourceType - In the implementation block
@property (assign,nonatomic) BOOL shouldSupportSearch;                                                  //@synthesize shouldSupportSearch=_shouldSupportSearch - In the implementation block
+(id)gamesControllerForLocalPlayer;
+(id)gamesControllerForPlayersGames:(id)arg1 ;
+(id)gamesControllerForPlayersSharedGames:(id)arg1 ;
+(id)gamesControllerForComparingPointsWithPlayer:(id)arg1 ;
+(id)gamesControllerForTopGames;
+(id)gamesControllerForRecommendations;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(unsigned)controllerMode;
-(void)setControllerMode:(unsigned)arg1 ;
-(void)didTouchShowAll:(int)arg1 ;
-(void)showGameRecommendations;
-(void)setGamesDataSource:(id)arg1 ;
-(void)setDataSourceType:(int)arg1 ;
-(void)setShouldSupportSearch:(BOOL)arg1 ;
-(void)setShouldShowPlaceholder:(BOOL)arg1 ;
-(void)setRecommendationsDataSource:(id)arg1 ;
-(void)updateRecommendationsPaddingForOrientation:(int)arg1 ;
-(void)showRecommendedGameDetails:(id)arg1 ;
-(int)dataSourceType;
-(void)showGameDetails:(id)arg1 ;
-(void)showPurchasableGameDetails:(id)arg1 ;
-(id)gamesDataSource;
-(BOOL)shouldShowPlaceholder;
-(id)recommendationsDataSource;
-(BOOL)shouldSupportSearch;
-(void)configureDataSource;
-(void)didEnterNoContentState;
-(void)didEnterErrorState;
-(void)configureViewFactories;
-(void)updateMetrics;
-(id)sectionMetrics;
-(void)dealloc;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

