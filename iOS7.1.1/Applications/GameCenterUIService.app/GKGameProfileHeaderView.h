/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class GKGameRecord, UIImageView, GKLabel, GKBuyButton, UIView;

@interface GKGameProfileHeaderView : UICollectionReusableView {

	GKGameRecord* _game;
	UIImageView* _iconView;
	GKLabel* _ratingLabel;
	GKBuyButton* _buyButton;
	UIView* _spacerLeft;
	UIView* _spacerRight;

}

@property (nonatomic,retain) GKGameRecord * game;                  //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;               //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * ratingLabel;                //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,retain) GKBuyButton * buyButton;              //@synthesize buyButton=_buyButton - In the implementation block
@property (nonatomic,retain) UIView * spacerLeft;                  //@synthesize spacerLeft=_spacerLeft - In the implementation block
@property (nonatomic,retain) UIView * spacerRight;                 //@synthesize spacerRight=_spacerRight - In the implementation block
+(Class)classForGame:(id)arg1 isPurchaseable:(BOOL)arg2 ;
+(BOOL)requiresConstraintBasedLayout;
-(void)updateIcon;
-(id)buyButton;
-(void)setBuyButton:(id)arg1 ;
-(id)spacerLeft;
-(void)setSpacerLeft:(id)arg1 ;
-(id)spacerRight;
-(void)setSpacerRight:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(id)iconView;
-(void)didUpdateModel;
-(void)setIconView:(id)arg1 ;
-(void)applyConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)ratingLabel;
-(void)setRatingLabel:(id)arg1 ;
@end

