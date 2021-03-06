/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseGameCell.h>

@class UILabel;

@interface GKPlayerGameCell : GKBaseGameCell {

	UILabel* _statsLabel;
	UILabel* _dateLabel;

}

@property (nonatomic,retain) UILabel * statsLabel;              //@synthesize statsLabel=_statsLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;               //@synthesize dateLabel=_dateLabel - In the implementation block
-(void)didUpdateModel;
-(bool)canRemoveItem;
-(id)statsLabel;
-(id)achievementsStringWithGameRecord:(id)arg1 ;
-(id)leaderboardStringWithGameRecord:(id)arg1 ;
-(void)setStatsLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(id)dateLabel;
-(void)setDateLabel:(id)arg1 ;
@end

