/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel;

@interface RegionFormatSampleView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	double _sized;
	double _labelTopPadding[4];

}
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTextForRegionExample:(id)arg1 ;
-(id)generateRegionSampleLabel;
-(id)_accessibilityLabels;
@end

