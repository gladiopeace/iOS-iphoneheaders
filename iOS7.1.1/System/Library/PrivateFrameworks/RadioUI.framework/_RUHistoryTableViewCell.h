/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <RadioUI/RUTrackDownloadViewDelegate.h>

@class UIImageView, UILabel, UIView, RUAudioPreviewView, MPImageCache, MPImageCacheRequest, RUTrackDownloadView, NSString, UIImage;

@interface _RUHistoryTableViewCell : UITableViewCell <RUTrackDownloadViewDelegate> {

	UIImageView* _explicitImageView;
	UILabel* _iAdLabel;
	UIView* _separatorView;
	UILabel* _subtitleLabel;
	UILabel* _textLabel;
	bool _explicitTrack;
	bool _hideArtworkImage;
	RUAudioPreviewView* _audioPreviewView;
	MPImageCache* _imageCache;
	MPImageCacheRequest* _imageRequest;
	RUTrackDownloadView* _trackDownloadView;

}

@property (nonatomic,retain) RUAudioPreviewView * audioPreviewView;                  //@synthesize audioPreviewView=_audioPreviewView - In the implementation block
@property (assign,nonatomic) bool isAd; 
@property (nonatomic,copy) NSString * artist; 
@property (assign,getter=isExplicitTrack,nonatomic) bool explicitTrack;              //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (assign,nonatomic) bool hideArtworkImage;                                  //@synthesize hideArtworkImage=_hideArtworkImage - In the implementation block
@property (nonatomic,retain) MPImageCache * imageCache;                              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) MPImageCacheRequest * imageRequest;                     //@synthesize imageRequest=_imageRequest - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UIImage * artworkImage; 
@property (nonatomic,readonly) RUTrackDownloadView * trackDownloadView;              //@synthesize trackDownloadView=_trackDownloadView - In the implementation block
-(id)artist;
-(bool)isExplicitTrack;
-(bool)isAd;
-(void)setArtist:(id)arg1 ;
-(id)artworkImage;
-(id)imageCache;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void).cxx_destruct;
-(void)setExplicitTrack:(bool)arg1 ;
-(void)setImageRequest:(id)arg1 ;
-(id)imageRequest;
-(void)trackDownloadViewWillTransition:(id)arg1 ;
-(void)setAudioPreviewView:(id)arg1 ;
-(id)audioPreviewView;
-(id)trackDownloadView;
-(void)setHideArtworkImage:(bool)arg1 ;
-(void)setIsAd:(bool)arg1 ;
-(bool)hideArtworkImage;
-(void)setImageCache:(id)arg1 ;
@end

