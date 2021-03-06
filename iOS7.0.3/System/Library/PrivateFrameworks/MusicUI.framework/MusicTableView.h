/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UITableView.h>

@interface MusicTableView : UITableView {

	float _headerBackgroundTransitionWeighting;
	float _footerBackgroundTransitionWeighting;
	float _minimumContentSizeHeightAdditions;

}

@property (assign,nonatomic) float headerBackgroundTransitionWeighting;              //@synthesize headerBackgroundTransitionWeighting=_headerBackgroundTransitionWeighting - In the implementation block
@property (assign,nonatomic) float footerBackgroundTransitionWeighting;              //@synthesize footerBackgroundTransitionWeighting=_footerBackgroundTransitionWeighting - In the implementation block
@property (assign,nonatomic) float minimumContentSizeHeightAdditions;                //@synthesize minimumContentSizeHeightAdditions=_minimumContentSizeHeightAdditions - In the implementation block
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setTableHeaderBackgroundColor:(id)arg1 ;
-(void)setHeaderBackgroundTransitionWeighting:(float)arg1 ;
-(void)setFooterBackgroundTransitionWeighting:(float)arg1 ;
-(void)setMinimumContentSizeHeightAdditions:(float)arg1 ;
-(void)updateVisibleHeaderFooterState;
-(float)footerBackgroundTransitionWeighting;
-(float)headerBackgroundTransitionWeighting;
-(void)updateStateForHeaderView:(id)arg1 inSection:(int)arg2 ;
-(void)updateStateForFooterView:(id)arg1 inSection:(int)arg2 ;
-(float)minimumContentSizeHeightAdditions;
@end

