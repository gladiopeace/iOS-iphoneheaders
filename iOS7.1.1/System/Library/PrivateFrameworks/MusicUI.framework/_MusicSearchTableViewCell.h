/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIImage, NSAttributedString;

@interface _MusicSearchTableViewCell : UITableViewCell {

	UIImageView* _artworkImageView;
	UIImageView* _explicitImageView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	bool _displayAsDisabled;
	bool _explicitTrack;

}

@property (nonatomic,retain) UIImage * artworkImage; 
@property (assign,getter=isDisplayingAsDisabled,nonatomic) bool displayAsDisabled;              //@synthesize displayAsDisabled=_displayAsDisabled - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) bool explicitTrack;                         //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSubtitleText; 
@property (nonatomic,copy) NSAttributedString * attributedTitleText; 
-(bool)isExplicitTrack;
-(id)artworkImage;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setArtworkImage:(id)arg1 ;
-(void)setExplicitTrack:(bool)arg1 ;
-(bool)isDisplayingAsDisabled;
-(void)setDisplayAsDisabled:(bool)arg1 ;
-(void)setAttributedSubtitleText:(id)arg1 ;
-(void)setAttributedTitleText:(id)arg1 ;
-(id)attributedSubtitleText;
-(id)attributedTitleText;
@end

