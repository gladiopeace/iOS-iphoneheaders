/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/AcousticId.siriUIBundle/AcousticId
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AcousticId/AcousticId-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@protocol SiriAcousticIdHeaderViewDelegate;
@class NSURL, NSString, SiriUIDownloadableImageView, UILabel, SKUIItemOfferButton, SiriUIKeyline;

@interface SiriAcousticIdHeaderView : SiriUIReusableHeaderView {

	BOOL _showBuyButton;
	NSURL* _albumArt;
	NSString* _songTitle;
	NSString* _artistString;
	id<SiriAcousticIdHeaderViewDelegate> _delegate;
	SiriUIDownloadableImageView* _albumArtImageView;
	UILabel* _songTitleLabel;
	UILabel* _artistNameLabel;
	SKUIItemOfferButton* _buyButton;
	SiriUIKeyline* _keyline;

}

@property (nonatomic,retain) NSURL * albumArt;                                                  //@synthesize albumArt=_albumArt - In the implementation block
@property (nonatomic,copy) NSString * songTitle;                                                //@synthesize songTitle=_songTitle - In the implementation block
@property (nonatomic,copy) NSString * artistString;                                             //@synthesize artistString=_artistString - In the implementation block
@property (assign,nonatomic) BOOL showBuyButton;                                                //@synthesize showBuyButton=_showBuyButton - In the implementation block
@property (assign,nonatomic,__weak) id<SiriAcousticIdHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SiriUIDownloadableImageView * albumArtImageView;                   //@synthesize albumArtImageView=_albumArtImageView - In the implementation block
@property (nonatomic,retain) UILabel * songTitleLabel;                                          //@synthesize songTitleLabel=_songTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * artistNameLabel;                                         //@synthesize artistNameLabel=_artistNameLabel - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButton * buyButton;                                   //@synthesize buyButton=_buyButton - In the implementation block
@property (nonatomic,retain) SiriUIKeyline * keyline;                                           //@synthesize keyline=_keyline - In the implementation block
+(double)defaultHeight;
-(void)setArtistString:(NSString *)arg1 ;
-(void)setShowBuyButton:(BOOL)arg1 ;
-(void)setAlbumArt:(NSURL *)arg1 ;
-(void)buyButtonTapped:(id)arg1 ;
-(void)setSongTitle:(NSString *)arg1 ;
-(SiriUIDownloadableImageView *)albumArtImageView;
-(void)setAlbumArtImageView:(SiriUIDownloadableImageView *)arg1 ;
-(BOOL)showBuyButton;
-(UILabel *)songTitleLabel;
-(NSString *)artistString;
-(NSString *)songTitle;
-(void)setBuyButton:(SKUIItemOfferButton *)arg1 ;
-(void)setSongTitleLabel:(UILabel *)arg1 ;
-(void)setArtistNameLabel:(UILabel *)arg1 ;
-(void)setKeyline:(SiriUIKeyline *)arg1 ;
-(SKUIItemOfferButton *)buyButton;
-(UILabel *)artistNameLabel;
-(NSURL *)albumArt;
-(double)desiredHeightForWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SiriAcousticIdHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SiriAcousticIdHeaderViewDelegate>)delegate;
-(SiriUIKeyline *)keyline;
@end

