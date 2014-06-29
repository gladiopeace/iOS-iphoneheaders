/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class ACSportsLoadingImageView, NSMutableArray, SASportsAthlete, SASportsLeague;

@interface ACSportsAthleteView : ACSportsEntityView {

	ACSportsLoadingImageView* _headShotImageView;
	NSMutableArray* _minorMetadataLabels;
	ACSportsLoadingImageView* _teamLogoImageView;
	NSMutableArray* _statGroupViews;
	NSMutableArray* _keylines;
	bool _shortLayout;
	SASportsAthlete* _athlete;
	SASportsLeague* _league;

}

@property (nonatomic,readonly) SASportsAthlete * athlete;              //@synthesize athlete=_athlete - In the implementation block
@property (nonatomic,readonly) SASportsLeague * league;                //@synthesize league=_league - In the implementation block
+(CGSize)k4StatGroupSize;
+(CGSize)k5OrMoreColStatGroupSize;
+(id)viewWithAthlete:(id)arg1 league:(id)arg2 frame:(CGRect)arg3 ;
-(CGSize)_playerImageSize;
-(void)setAthlete:(id)arg1 league:(id)arg2 ;
-(double)_numberOfStats;
-(CGPoint)_headshotOrigin;
-(bool)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(double)_playerRowHeight;
-(double)_statGroupOriginY;
-(CGSize)_columnSizeForRow:(unsigned long long)arg1 ;
-(double)_minorMetadataOriginY;
-(double)_minorMetadataOriginX;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void).cxx_destruct;
-(id)athlete;
-(id)league;
-(unsigned long long)_numberOfColumns;
-(double)_numberOfRows;
@end

