/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIImageView.h>

@class GKAchievement;

@interface GKAchievementIconView : UIImageView {

	GKAchievement* _achievement;
	GKAchievement* _localAchievement;

}

@property (nonatomic,retain) GKAchievement * achievement;                   //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;              //@synthesize localAchievement=_localAchievement - In the implementation block
+(id)progressSource;
-(void)setAchievement:(id)arg1 ;
-(void)setLocalAchievement:(id)arg1 ;
-(void)configureImage;
-(id)processProgressImageForAchievementImage:(id)arg1 ;
-(id)progressIdentifierForAchievement:(id)arg1 ;
-(void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)setupForAchievement:(id)arg1 localAchievement:(id)arg2 ;
-(id)achievement;
-(id)localAchievement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
@end

