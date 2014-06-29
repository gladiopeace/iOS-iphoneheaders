/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, NSString;

@interface PLEffectPreviewView : UICollectionViewCell {

	UILabel* _nameLabel;
	UIView* _thumbnailView;
	UIView* _dimmingView;
	CGSize _thumbnailSize;

}

@property (assign,nonatomic) CGSize thumbnailSize;                //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) UIView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,copy) NSString * text; 
+(double)defaultSpacing;
+(CGSize)sizeForImageSize:(CGSize)arg1 ;
+(CGSize)thumbnailSizeForImageSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(bool)arg1 ;
-(void)_updateAppearance;
-(void)setThumbnailView:(id)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)thumbnailView;
-(CGSize)thumbnailSize;
@end

