/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKViewController.h>

@class GKGame, GKRemoteViewController;

@interface GKHostedViewController : GKViewController {

	bool _presentingRemoteViewController;
	bool _shouldPresentRemoteViewController;
	bool _isRequestingRemoteViewController;
	bool _gkIsDisappearing;
	GKGame* _game;
	GKRemoteViewController* _remoteViewController;
	/*^block*/ id _remoteViewReadyHandler;

}

@property (nonatomic,retain) GKGame * game;                                              //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) bool shouldPresentRemoteViewController;                     //@synthesize shouldPresentRemoteViewController=_shouldPresentRemoteViewController - In the implementation block
@property (assign,nonatomic) bool presentingRemoteViewController;                        //@synthesize presentingRemoteViewController=_presentingRemoteViewController - In the implementation block
@property (nonatomic,copy) id remoteViewReadyHandler;                                    //@synthesize remoteViewReadyHandler=_remoteViewReadyHandler - In the implementation block
@property (nonatomic,retain) GKRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic) bool isRequestingRemoteViewController;                      //@synthesize isRequestingRemoteViewController=_isRequestingRemoteViewController - In the implementation block
@property (assign,nonatomic) bool gkIsDisappearing;                                      //@synthesize gkIsDisappearing=_gkIsDisappearing - In the implementation block
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)setRemoteViewReadyHandler:(/*^block*/ id)arg1 ;
-(void)presentRemoteViewControllerIfNeeded;
-(id)serviceSideViewControllerClassName;
-(id)hostSideViewControllerClassName;
-(id)_presentingViewController;
-(void)didGetRemoteViewController;
-(void)requestRemoteViewControllerIfNeeded;
-(void)setPresentingRemoteViewController:(bool)arg1 ;
-(void)setGkIsDisappearing:(bool)arg1 ;
-(bool)gkIsDisappearing;
-(bool)shouldPresentRemoteViewController;
-(bool)presentingRemoteViewController;
-(void)donePressed:(id)arg1 ;
-(void)resetRemoteViewController;
-(void)setShouldPresentRemoteViewController:(bool)arg1 ;
-(/*^block*/ id)remoteViewReadyHandler;
-(bool)isRequestingRemoteViewController;
-(void)setIsRequestingRemoteViewController:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(unsigned long long)supportedInterfaceOrientations;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)dismissViewControllerAnimated:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(bool)shouldAutomaticallyForwardRotationMethods;
-(bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(bool)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)dismissModalViewControllerAnimated:(bool)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(id)remoteViewController;
@end

