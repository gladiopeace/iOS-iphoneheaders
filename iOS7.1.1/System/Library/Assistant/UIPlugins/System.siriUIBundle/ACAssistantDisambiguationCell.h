/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SiriUIDisambiguationItem, SiriUIContentLabel, UIImageView;

@interface ACAssistantDisambiguationCell : SiriUIContentCollectionViewCell {

	bool _hasStarColumn;
	bool _lastRow;
	SiriUIDisambiguationItem* _item;
	SiriUIContentLabel* _titleLabel;
	SiriUIContentLabel* _secondaryTitleLabel;
	SiriUIContentLabel* _extraDisambiguationLabel;
	SiriUIContentLabel* _extraDisambiguationSubTextLabel;
	UIImageView* _imageView;
	UIImageView* _starView;

}

@property (nonatomic,retain) SiriUIDisambiguationItem * item;                                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) bool hasStarColumn;                                                //@synthesize hasStarColumn=_hasStarColumn - In the implementation block
@property (assign,getter=isLastRow,nonatomic) bool lastRow;                                     //@synthesize lastRow=_lastRow - In the implementation block
@property (nonatomic,retain) SiriUIContentLabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SiriUIContentLabel * secondaryTitleLabel;                          //@synthesize secondaryTitleLabel=_secondaryTitleLabel - In the implementation block
@property (nonatomic,retain) SiriUIContentLabel * extraDisambiguationLabel;                     //@synthesize extraDisambiguationLabel=_extraDisambiguationLabel - In the implementation block
@property (nonatomic,retain) SiriUIContentLabel * extraDisambiguationSubTextLabel;              //@synthesize extraDisambiguationSubTextLabel=_extraDisambiguationSubTextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * starView;                                            //@synthesize starView=_starView - In the implementation block
+(double)defaultHeightWithSubtitle;
+(double)defaultHeightWithHeading;
+(double)defaultHeight;
-(void)setStarView:(id)arg1 ;
-(id)secondaryTitleLabel;
-(void)setSecondaryTitleLabel:(id)arg1 ;
-(id)extraDisambiguationLabel;
-(void)setExtraDisambiguationLabel:(id)arg1 ;
-(id)extraDisambiguationSubTextLabel;
-(void)setExtraDisambiguationSubTextLabel:(id)arg1 ;
-(id)starView;
-(bool)isLastRow;
-(void)setHasStarColumn:(bool)arg1 ;
-(bool)hasStarColumn;
-(void)setItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)titleLabel;
-(void)prepareForReuse;
-(id)item;
-(id)imageView;
-(void)setImageView:(id)arg1 ;
-(void).cxx_destruct;
-(void)setTitleLabel:(id)arg1 ;
-(void)setLastRow:(bool)arg1 ;
@end

