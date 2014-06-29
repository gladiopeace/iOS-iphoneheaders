/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewController.h>

@class GKMatchRequest, NSString, GKGame, GKMultiplayerDataSource;

@interface GKMultiplayerViewController : GKCollectionViewController {

	bool _showCancelButton;
	bool _addButtonEnabled;
	GKMatchRequest* _matchRequest;
	NSString* _defaultInvitationMessage;
	GKGame* _game;

}

@property (nonatomic,readonly) GKMatchRequest * matchRequest;                                //@synthesize matchRequest=_matchRequest - In the implementation block
@property (nonatomic,copy) NSString * defaultInvitationMessage;                              //@synthesize defaultInvitationMessage=_defaultInvitationMessage - In the implementation block
@property (assign,nonatomic) bool showCancelButton;                                          //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                  //@synthesize game=_game - In the implementation block
@property (nonatomic,readonly) GKMultiplayerDataSource * multiplayerDataSource; 
@property (assign,nonatomic) bool addButtonEnabled;                                          //@synthesize addButtonEnabled=_addButtonEnabled - In the implementation block
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)configureDataSource;
-(void)localPlayerAcceptedGameInvite:(id)arg1 ;
-(void)playersToInvite:(id)arg1 ;
-(void)setPlayerRange:(NSRange)arg1 ;
-(void)setupCancelButton;
-(id)multiplayerDataSource;
-(void)cancelButtonPressed;
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)updateVisibleRemoveButtons;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(void)removedPlayer:(id)arg1 ;
-(long long)maxAvailablePlayers;
-(id)matchRequest;
-(void)didFinishPickingPlayers:(id)arg1 ;
-(void)willPresentPlayerPicker:(id)arg1 ;
-(void)invitePlayers:(id)arg1 ;
-(void)playNow;
-(id)initWithMatchRequest:(id)arg1 ;
-(void)setShowCancelButton:(bool)arg1 ;
-(void)addAutomatchPlayer;
-(void)removeAutomatchPlayer;
-(void)removePlayer:(id)arg1 ;
-(void)inviteButtonPressed;
-(void)playButtonPressed;
-(id)defaultInvitationMessage;
-(void)setDefaultInvitationMessage:(id)arg1 ;
-(bool)addButtonEnabled;
-(void)setAddButtonEnabled:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)cancel;
-(bool)showCancelButton;
@end

