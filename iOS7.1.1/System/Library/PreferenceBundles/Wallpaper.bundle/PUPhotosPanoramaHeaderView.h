/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface PUPhotosPanoramaHeaderView : UICollectionReusableView {

	NSString* _title;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)titleLabel;
-(void)prepareForReuse;
-(void).cxx_destruct;
-(void)setTitleLabel:(id)arg1 ;
@end

