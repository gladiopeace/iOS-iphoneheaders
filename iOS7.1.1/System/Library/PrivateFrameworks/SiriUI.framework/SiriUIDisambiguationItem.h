/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SiriUI/SiriUI-Structs.h>
@class NSString, UIImageView;

@interface SiriUIDisambiguationItem : NSObject {

	bool _showsFavoriteStar;
	NSString* _title;
	NSString* _subtitle;
	NSString* _headingText;
	NSString* _extraDisambiguationText;
	NSString* _extraDisambiguationSubText;
	UIImageView* _imageView;
	NSRange _titleBoldedRange;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * headingText;                             //@synthesize headingText=_headingText - In the implementation block
@property (nonatomic,copy) NSString * extraDisambiguationText;                 //@synthesize extraDisambiguationText=_extraDisambiguationText - In the implementation block
@property (nonatomic,copy) NSString * extraDisambiguationSubText;              //@synthesize extraDisambiguationSubText=_extraDisambiguationSubText - In the implementation block
@property (assign,nonatomic) NSRange titleBoldedRange;                         //@synthesize titleBoldedRange=_titleBoldedRange - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) bool showsFavoriteStar;                           //@synthesize showsFavoriteStar=_showsFavoriteStar - In the implementation block
+(id)disambiguationItem;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)imageView;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setImageView:(id)arg1 ;
-(void).cxx_destruct;
-(id)headingText;
-(void)setHeadingText:(id)arg1 ;
-(id)extraDisambiguationText;
-(void)setExtraDisambiguationText:(id)arg1 ;
-(id)extraDisambiguationSubText;
-(void)setExtraDisambiguationSubText:(id)arg1 ;
-(NSRange)titleBoldedRange;
-(void)setTitleBoldedRange:(NSRange)arg1 ;
-(bool)showsFavoriteStar;
-(void)setShowsFavoriteStar:(bool)arg1 ;
@end

