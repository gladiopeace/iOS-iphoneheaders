/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class ACSportsLoadingImageView, UILabel;

@interface ACSportsAthleteComparisonView : SiriUIContentCollectionViewCell {

	ACSportsLoadingImageView* _headShotView;
	UILabel* _playerLabel;
	UILabel* _statLabel;
	bool _showPlayerImage;

}

@property (assign,nonatomic) bool showPlayerImage;              //@synthesize showPlayerImage=_showPlayerImage - In the implementation block
+(double)contentHeight;
-(bool)showPlayerImage;
-(void)setShowPlayerImage:(bool)arg1 ;
-(void)configureWithAthlete:(id)arg1 snippetItemDetails:(id)arg2 ;
-(void)setStatisticEmphasized:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void).cxx_destruct;
@end

