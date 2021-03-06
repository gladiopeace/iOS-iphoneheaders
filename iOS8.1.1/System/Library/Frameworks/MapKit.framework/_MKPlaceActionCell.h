/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSMutableArray;

@interface _MKPlaceActionCell : UITableViewCell {

	UILabel* _titleLabel;
	NSMutableArray* _scaledConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * scaledConstraints;              //@synthesize scaledConstraints=_scaledConstraints - In the implementation block
+(double)intrinsicContentHeight;
+(id)fontForLabel;
-(void)contentSizeDidChange;
-(NSMutableArray *)scaledConstraints;
-(void)setScaledConstraints:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

