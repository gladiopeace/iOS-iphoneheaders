/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicTableViewCellContentView.h>
#import <MusicUI/SKUIItemOfferButtonDelegate.h>

@class SKUIItemOfferButton, UILabel, NSString;

@interface MusicDownloadAllTableViewCellContentView : MusicTableViewCellContentView <SKUIItemOfferButtonDelegate> {

	SKUIItemOfferButton* _itemOfferButton;
	UILabel* _titleLabel;
	char _downloadAllCellForArtist;
	int _downloadableSongCount;

}

@property (assign,nonatomic) int downloadableSongCount;                                                    //@synthesize downloadableSongCount=_downloadableSongCount - In the implementation block
@property (assign,getter=isDownloadAllCellForArtist,nonatomic) char downloadAllCellForArtist;              //@synthesize downloadAllCellForArtist=_downloadAllCellForArtist - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)downloadableSongCount;
-(void)setDownloadableSongCount:(int)arg1 ;
-(void)setDownloadAllCellForArtist:(char)arg1 ;
-(char)isDownloadAllCellForArtist;
-(void)_itemOfferButtonAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateDownloadStateViews;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
@end

