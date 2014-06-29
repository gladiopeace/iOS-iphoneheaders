/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKViewController.h>
#import <GameCenterUI/GKStateMachineDelegate.h>

@class UIActivityIndicatorView, NSArray, GKLoadableContentStateMachine, NSString;

@interface GKLoadableContentViewController : GKViewController <GKStateMachineDelegate> {

	UIActivityIndicatorView* _activityIndicator;
	NSArray* _viewsToHideWhileLoading;
	GKLoadableContentStateMachine* _loadingMachine;

}

@property (nonatomic,retain) NSString * loadingState; 
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSArray * viewsToHideWhileLoading;                           //@synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading - In the implementation block
@property (nonatomic,retain) GKLoadableContentStateMachine * loadingMachine;              //@synthesize loadingMachine=_loadingMachine - In the implementation block
-(void)setLoadingState:(id)arg1 ;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(id)loadingState;
-(id)loadingMachine;
-(void)setLoadingMachine:(id)arg1 ;
-(void)didEnterLoadedState;
-(void)didExitLoadedState;
-(void)setViewsToHideWhileLoading:(id)arg1 ;
-(id)viewsToHideWhileLoading;
-(void)dealloc;
-(id)init;
-(void)setActivityIndicator:(id)arg1 ;
-(id)activityIndicator;
@end

