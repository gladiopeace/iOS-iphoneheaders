/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <RadioUI/RUTableViewCell.h>

@class SKUICircleProgressIndicator, UIImageView, UILabel, MPUEmphasizedText;

@interface RUSearchStationTableViewCell : RUTableViewCell {

	SKUICircleProgressIndicator* _activityIndicator;
	UIImageView* _imageView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	char _showActivityIndicator;
	MPUEmphasizedText* _stationDescriptionEmphasizedText;
	MPUEmphasizedText* _stationNameEmphasizedText;

}

@property (nonatomic,copy) MPUEmphasizedText * stationDescriptionEmphasizedText;              //@synthesize stationDescriptionEmphasizedText=_stationDescriptionEmphasizedText - In the implementation block
@property (nonatomic,copy) MPUEmphasizedText * stationNameEmphasizedText;                     //@synthesize stationNameEmphasizedText=_stationNameEmphasizedText - In the implementation block
@property (assign,nonatomic) char showActivityIndicator;                                      //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic) char showsArtwork; 
+(id)_titleLabelFont;
+(float)defaultHeightForTraitCollection:(id)arg1 ;
+(id)_subtitleLabelFontForTraitCollection:(id)arg1 withEmphasis:(char)arg2 ;
+(id)_regularSubtitleLabelAttributesForTraitCollection:(id)arg1 ;
+(id)_emphasizedSubtitleLabelAttributesForTraitCollection:(id)arg1 ;
+(id)_regularTitleLabelAttributesForTraitCollection:(id)arg1 ;
+(id)_emphasizedTitleLabelAttributesForTraitCollection:(id)arg1 ;
+(id)_emphasizedTextColor;
+(id)_textAttributesWithFont:(id)arg1 textColor:(id)arg2 ;
+(id)_regularTextColor;
+(CGSize)artworkSize;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)imageView;
-(void)setShowActivityIndicator:(char)arg1 ;
-(char)showsArtwork;
-(void)setShowsArtwork:(char)arg1 ;
-(void)setStationDescriptionEmphasizedText:(MPUEmphasizedText *)arg1 ;
-(void)setStationNameEmphasizedText:(MPUEmphasizedText *)arg1 ;
-(id)stationImage;
-(MPUEmphasizedText *)stationDescriptionEmphasizedText;
-(MPUEmphasizedText *)stationNameEmphasizedText;
-(char)showActivityIndicator;
@end

