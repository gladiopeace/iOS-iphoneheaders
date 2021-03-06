/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Weather/CityUpdaterDelegate.h>

@protocol WAWeatherCollectionViewCellDelegate, WAWeatherCollectionViewCellLayoutDelegate;
@class City, UIButton, WADynamicWeatherBackground, NSArray, WAWeatherCityView;

@interface WAWeatherCollectionViewCell : UICollectionViewCell <CityUpdaterDelegate> {

	float _buttonWidth;
	char _isTallCell;
	char _showingDeleteUI;
	City* _city;
	int _mode;
	float _transitionProgress;
	UIButton* _deleteButton;
	id<WAWeatherCollectionViewCellDelegate> _delegate;
	id<WAWeatherCollectionViewCellLayoutDelegate> _layoutDelegate;
	WADynamicWeatherBackground* _background;
	NSArray* _extraViews;
	WAWeatherCityView* _cityView;
	float _deleteSliderOffset;

}

@property (nonatomic,retain,readonly) City * city;                                                      //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) int mode;                                                                //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float transitionProgress;                                                  //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) char isTallCell;                                                           //@synthesize isTallCell=_isTallCell - In the implementation block
@property (getter=isShowingDeleteUI,nonatomic,readonly) char showingDeleteUI;                           //@synthesize showingDeleteUI=_showingDeleteUI - In the implementation block
@property (nonatomic,readonly) UIButton * deleteButton;                                                 //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic) id<WAWeatherCollectionViewCellDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<WAWeatherCollectionViewCellLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) WADynamicWeatherBackground * background;                                   //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) NSArray * extraViews;                                                      //@synthesize extraViews=_extraViews - In the implementation block
@property (nonatomic,retain,readonly) WAWeatherCityView * cityView;                                     //@synthesize cityView=_cityView - In the implementation block
@property (assign,nonatomic) float deleteSliderOffset;                                                  //@synthesize deleteSliderOffset=_deleteSliderOffset - In the implementation block
-(void)animateTransitionToSize:(CGSize)arg1 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 ;
-(void)setCity:(id)arg1 andMode:(int)arg2 ;
-(void)setIsTallCell:(char)arg1 ;
-(WAWeatherCityView *)cityView;
-(NSArray *)extraViews;
-(void)setParallaxOffset:(float)arg1 isTransitionOffset:(char)arg2 ;
-(void)setExtraViews:(NSArray *)arg1 ;
-(void)useBackgroundView:(id)arg1 ;
-(char)isShowingDeleteUI;
-(void)showDeleteUI:(char)arg1 animated:(char)arg2 ;
-(id)relinquishBackground;
-(void)beginTracking;
-(void)swipeByOffset:(float)arg1 ;
-(id)relinquishCityView;
-(void)useCityView:(id)arg1 ;
-(char)isTallCell;
-(void)_createCityView;
-(void)_createBackground;
-(void)_layoutForShowingDeleteUI:(char)arg1 ;
-(void)_updateBackgroundCondition;
-(float)deleteSliderOffset;
-(void)setDeleteSliderOffset:(float)arg1 ;
-(void)refreshForUnitsChange;
-(City *)city;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<WAWeatherCollectionViewCellDelegate>)arg1 ;
-(id<WAWeatherCollectionViewCellDelegate>)delegate;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)prepareForReuse;
-(int)mode;
-(WADynamicWeatherBackground *)background;
-(void)setBackground:(WADynamicWeatherBackground *)arg1 ;
-(void)delete:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setTransitionProgress:(float)arg1 ;
-(float)transitionProgress;
-(UIButton *)deleteButton;
-(id<WAWeatherCollectionViewCellLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<WAWeatherCollectionViewCellLayoutDelegate>)arg1 ;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(void)cityDidFinishWeatherUpdate:(id)arg1 ;
@end

