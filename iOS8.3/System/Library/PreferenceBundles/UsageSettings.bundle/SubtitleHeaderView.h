/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:16:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UsageSettings/PSHeaderFooterView.h>

@class UILabel, NSMutableArray, NSArray;

@interface SubtitleHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	NSMutableArray* _subtitleLabels;

}

@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * subtitleLabels;              //@synthesize subtitleLabels=_subtitleLabels - In the implementation block
-(NSArray *)subtitleLabels;
-(id)addSubtitle;
-(id)subtitleAtIndex:(unsigned)arg1 ;
-(void)removeSubtitleAtIndex:(unsigned)arg1 ;
-(void)setSubtitleLabels:(NSArray *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

