/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, PLSyncProgressView, NSString;

@interface PUPhotosGlobalFooterView : UICollectionReusableView {

	unsigned long long _imageCount;
	unsigned long long _videoCount;
	unsigned long long _otherCount;
	unsigned long long _pendingCount;
	int _importOperation;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PLSyncProgressView* _syncProgressView;
	long long _style;
	NSString* _subtitle;

}

@property (assign,nonatomic) long long style;                  //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void).cxx_destruct;
-(void)setPendingCount:(unsigned long long)arg1 importOperation:(int)arg2 ;
-(void)setImageCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2 otherCount:(unsigned long long)arg3 ;
-(void)_updateSubviews;
@end

