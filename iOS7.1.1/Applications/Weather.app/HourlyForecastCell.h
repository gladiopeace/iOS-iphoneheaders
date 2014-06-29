/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface HourlyForecastCell : UIView {

	BOOL _showingDay;
	int _conditionCode;
	UIImageView* _timeImageView;
	UIImageView* _detailImageView;
	UIImageView* _percentChanceImageView;
	UIImageView* _conditionImageView;

}

@property (assign,nonatomic) BOOL showingDay;                                   //@synthesize showingDay=_showingDay - In the implementation block
@property (assign,nonatomic) int conditionCode;                                 //@synthesize conditionCode=_conditionCode - In the implementation block
@property (nonatomic,retain) UIImageView * timeImageView;                       //@synthesize timeImageView=_timeImageView - In the implementation block
@property (nonatomic,retain) UIImageView * detailImageView;                     //@synthesize detailImageView=_detailImageView - In the implementation block
@property (nonatomic,retain) UIImageView * percentChanceImageView;              //@synthesize percentChanceImageView=_percentChanceImageView - In the implementation block
@property (nonatomic,retain) UIImageView * conditionImageView;                  //@synthesize conditionImageView=_conditionImageView - In the implementation block
+(CGSize)size;
-(void)setPrecipitation:(float)arg1 ;
-(void)setDetail:(id)arg1 bold:(BOOL)arg2 ;
-(void)clearCellContent;
-(BOOL)showingDay;
-(void)setShowingDay:(BOOL)arg1 ;
-(id)timeImageView;
-(void)setTimeImageView:(id)arg1 ;
-(id)detailImageView;
-(void)setDetailImageView:(id)arg1 ;
-(id)percentChanceImageView;
-(void)setPercentChanceImageView:(id)arg1 ;
-(id)conditionImageView;
-(void)setConditionImageView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTime:(id)arg1 ;
-(int)conditionCode;
-(void)setConditionCode:(int)arg1 ;
@end

