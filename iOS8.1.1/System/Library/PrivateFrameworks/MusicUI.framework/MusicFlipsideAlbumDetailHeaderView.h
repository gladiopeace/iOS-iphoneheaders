/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class UIImageView, UIView, MPUItemOfferButton, UILabel, NSString, UIImage;

@interface MusicFlipsideAlbumDetailHeaderView : UITableViewHeaderFooterView {

	UIImageView* _artworkImageView;
	UIView* _hairlineView;
	MPUItemOfferButton* _itemOfferButton;
	UILabel* _artistLabel;
	UILabel* _albumLabel;
	UILabel* _songLabel;
	UILabel* _durationLabel;
	UILabel* _copyrightYearLabel;
	UIView* _topCellSeparatorView;
	double _cloudRightInset;
	/*^block*/id _downloadActionBlock;
	long long _songCount;
	double _totalDuration;
	NSString* _copyright;
	NSString* _year;

}

@property (nonatomic,retain) UIImage * artworkImage; 
@property (assign,nonatomic) double cloudRightInset;                               //@synthesize cloudRightInset=_cloudRightInset - In the implementation block
@property (assign,getter=isDownloadable,nonatomic) BOOL downloadable; 
@property (nonatomic,copy) id downloadActionBlock;                                 //@synthesize downloadActionBlock=_downloadActionBlock - In the implementation block
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * album; 
@property (assign,nonatomic) long long songCount;                                  //@synthesize songCount=_songCount - In the implementation block
@property (assign,nonatomic) double totalDuration;                                 //@synthesize totalDuration=_totalDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * copyright;                          //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,copy,readonly) NSString * year;                               //@synthesize year=_year - In the implementation block
+(CGSize)artworkSize;
-(BOOL)isDownloadable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTableViewStyle:(long long)arg1 ;
-(NSString *)year;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(double)totalDuration;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(NSString *)copyright;
-(void)setSongCount:(long long)arg1 ;
-(void)setCloudRightInset:(double)arg1 ;
-(void)setCopyright:(id)arg1 year:(id)arg2 ;
-(void)setDownloadActionBlock:(id)arg1 ;
-(void)setDownloadable:(BOOL)arg1 ;
-(double)backgroundTransitionProgress;
-(void)setBackgroundTransitionProgress:(double)arg1 ;
-(double)cloudRightInset;
-(id)downloadActionBlock;
-(long long)songCount;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(UIImage *)artworkImage;
-(void)_itemOfferButtonAction:(id)arg1 ;
@end

