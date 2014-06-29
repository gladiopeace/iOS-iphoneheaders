/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIFont;

@interface SBSearchTableViewContentSizeCache : NSObject {

	UIFont* _bodyFont;
	UIFont* _headlineShortFont;
	UIFont* _caption1Font;
	UIFont* _boldCaption1Font;
	UIFont* _footnoteFont;
	UIFont* _subheadFont;
	float _baseHeight;
	float _baseHeightWithSubtitle;
	float _footnoteFontLineHeight;
	float _footnoteFontAscender;
	float _bodyFontLineHeight;
	float _bodyFontAscender;
	float _headlineShortFontLineHeight;
	float _headlineShortFontAscender;
	float _caption1FontLineHeight;
	float _caption1FontAscender;
	float _subheadFontLineHeight;
	float _subheadFontAscender;
	float _emphasizedCaption1FontLineHeight;
	float _emphasizedCaption1FontAscender;
	float _summaryLineHeight;
	float _titleBaseline;
	float _titleBaselineSummary;
	float _subtitleBaseline;
	float _subtitleBaselineSummary;
	float _summaryBaseline;
	float _headerHeight;
	float _headerBaseline;

}

@property (nonatomic,retain) UIFont * bodyFont;                                   //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,retain) UIFont * headlineShortFont;                          //@synthesize headlineShortFont=_headlineShortFont - In the implementation block
@property (nonatomic,retain) UIFont * caption1Font;                               //@synthesize caption1Font=_caption1Font - In the implementation block
@property (nonatomic,retain) UIFont * boldCaption1Font;                           //@synthesize boldCaption1Font=_boldCaption1Font - In the implementation block
@property (nonatomic,retain) UIFont * footnoteFont;                               //@synthesize footnoteFont=_footnoteFont - In the implementation block
@property (nonatomic,retain) UIFont * subheadFont;                                //@synthesize subheadFont=_subheadFont - In the implementation block
@property (assign,nonatomic) float baseHeight;                                    //@synthesize baseHeight=_baseHeight - In the implementation block
@property (assign,nonatomic) float baseHeightWithSubtitle;                        //@synthesize baseHeightWithSubtitle=_baseHeightWithSubtitle - In the implementation block
@property (assign,nonatomic) float footnoteFontLineHeight;                        //@synthesize footnoteFontLineHeight=_footnoteFontLineHeight - In the implementation block
@property (assign,nonatomic) float footnoteFontAscender;                          //@synthesize footnoteFontAscender=_footnoteFontAscender - In the implementation block
@property (assign,nonatomic) float bodyFontLineHeight;                            //@synthesize bodyFontLineHeight=_bodyFontLineHeight - In the implementation block
@property (assign,nonatomic) float bodyFontAscender;                              //@synthesize bodyFontAscender=_bodyFontAscender - In the implementation block
@property (assign,nonatomic) float headlineShortFontLineHeight;                   //@synthesize headlineShortFontLineHeight=_headlineShortFontLineHeight - In the implementation block
@property (assign,nonatomic) float headlineShortFontAscender;                     //@synthesize headlineShortFontAscender=_headlineShortFontAscender - In the implementation block
@property (assign,nonatomic) float caption1FontLineHeight;                        //@synthesize caption1FontLineHeight=_caption1FontLineHeight - In the implementation block
@property (assign,nonatomic) float caption1FontAscender;                          //@synthesize caption1FontAscender=_caption1FontAscender - In the implementation block
@property (assign,nonatomic) float subheadFontLineHeight;                         //@synthesize subheadFontLineHeight=_subheadFontLineHeight - In the implementation block
@property (assign,nonatomic) float subheadFontAscender;                           //@synthesize subheadFontAscender=_subheadFontAscender - In the implementation block
@property (assign,nonatomic) float emphasizedCaption1FontLineHeight;              //@synthesize emphasizedCaption1FontLineHeight=_emphasizedCaption1FontLineHeight - In the implementation block
@property (assign,nonatomic) float emphasizedCaption1FontAscender;                //@synthesize emphasizedCaption1FontAscender=_emphasizedCaption1FontAscender - In the implementation block
@property (assign,nonatomic) float summaryLineHeight;                             //@synthesize summaryLineHeight=_summaryLineHeight - In the implementation block
@property (assign,nonatomic) float titleBaseline;                                 //@synthesize titleBaseline=_titleBaseline - In the implementation block
@property (assign,nonatomic) float titleBaselineSummary;                          //@synthesize titleBaselineSummary=_titleBaselineSummary - In the implementation block
@property (assign,nonatomic) float subtitleBaseline;                              //@synthesize subtitleBaseline=_subtitleBaseline - In the implementation block
@property (assign,nonatomic) float subtitleBaselineSummary;                       //@synthesize subtitleBaselineSummary=_subtitleBaselineSummary - In the implementation block
@property (assign,nonatomic) float summaryBaseline;                               //@synthesize summaryBaseline=_summaryBaseline - In the implementation block
@property (assign,nonatomic) float headerHeight;                                  //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) float headerBaseline;                                //@synthesize headerBaseline=_headerBaseline - In the implementation block
+(id)rowFontWithStyle:(id)arg1 traits:(unsigned)arg2 ;
+(id)sharedInstance;
-(void)contentSizeDidChange;
-(void)setBodyFont:(id)arg1 ;
-(void)setHeadlineShortFont:(id)arg1 ;
-(void)setCaption1Font:(id)arg1 ;
-(void)setBoldCaption1Font:(id)arg1 ;
-(void)setFootnoteFont:(id)arg1 ;
-(void)setSubheadFont:(id)arg1 ;
-(id)bodyFont;
-(id)headlineShortFont;
-(id)caption1Font;
-(id)boldCaption1Font;
-(id)footnoteFont;
-(id)subheadFont;
-(float)baseHeight;
-(void)setBaseHeight:(float)arg1 ;
-(float)baseHeightWithSubtitle;
-(void)setBaseHeightWithSubtitle:(float)arg1 ;
-(float)footnoteFontLineHeight;
-(void)setFootnoteFontLineHeight:(float)arg1 ;
-(float)footnoteFontAscender;
-(void)setFootnoteFontAscender:(float)arg1 ;
-(float)bodyFontLineHeight;
-(void)setBodyFontLineHeight:(float)arg1 ;
-(float)bodyFontAscender;
-(void)setBodyFontAscender:(float)arg1 ;
-(float)headlineShortFontLineHeight;
-(void)setHeadlineShortFontLineHeight:(float)arg1 ;
-(float)headlineShortFontAscender;
-(void)setHeadlineShortFontAscender:(float)arg1 ;
-(float)caption1FontLineHeight;
-(void)setCaption1FontLineHeight:(float)arg1 ;
-(float)caption1FontAscender;
-(void)setCaption1FontAscender:(float)arg1 ;
-(float)subheadFontLineHeight;
-(void)setSubheadFontLineHeight:(float)arg1 ;
-(float)subheadFontAscender;
-(void)setSubheadFontAscender:(float)arg1 ;
-(float)emphasizedCaption1FontLineHeight;
-(void)setEmphasizedCaption1FontLineHeight:(float)arg1 ;
-(float)emphasizedCaption1FontAscender;
-(void)setEmphasizedCaption1FontAscender:(float)arg1 ;
-(float)summaryLineHeight;
-(void)setSummaryLineHeight:(float)arg1 ;
-(float)titleBaseline;
-(void)setTitleBaseline:(float)arg1 ;
-(float)titleBaselineSummary;
-(void)setTitleBaselineSummary:(float)arg1 ;
-(float)subtitleBaseline;
-(void)setSubtitleBaseline:(float)arg1 ;
-(float)subtitleBaselineSummary;
-(void)setSubtitleBaselineSummary:(float)arg1 ;
-(float)summaryBaseline;
-(void)setSummaryBaseline:(float)arg1 ;
-(float)headerBaseline;
-(void)setHeaderBaseline:(float)arg1 ;
-(void)dealloc;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
@end

