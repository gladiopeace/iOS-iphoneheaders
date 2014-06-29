/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUISearchAppBundleView, UILabel, UIImageView, NSString, UIImage;

@interface SKUICardCellLayout : SKUIItemCellLayout {

	SKUISearchAppBundleView* _appBundleView;
	UILabel* _artistLabel;
	long long _numberOfUserRatings;
	UIImageView* _screenshotImageView;
	UILabel* _titleLabel;
	double _userRating;
	UIImageView* _userRatingImageView;
	UILabel* _userRatingLabel;
	UILabel* _hasInAppPurchasesLabel;
	bool _appBundle;
	bool _hasInAppPurchases;

}

@property (nonatomic,copy) NSString * artistName; 
@property (assign,nonatomic) long long numberOfUserRatings;                          //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) double userRating;                                      //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,retain) UIImage * screenshotImage; 
@property (assign,nonatomic) bool appBundle;                                         //@synthesize appBundle=_appBundle - In the implementation block
@property (nonatomic,readonly) SKUISearchAppBundleView * appBundleView;              //@synthesize appBundleView=_appBundleView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) bool hasInAppPurchases;                                 //@synthesize hasInAppPurchases=_hasInAppPurchases - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)prepareForReuse;
-(void).cxx_destruct;
-(id)artistName;
-(void)setArtistName:(id)arg1 ;
-(double)userRating;
-(void)setUserRating:(double)arg1 ;
-(bool)hasInAppPurchases;
-(void)resetLayout;
-(void)setScreenshotImage:(id)arg1 ;
-(void)layoutForItemOfferChange;
-(void)setAppBundle:(bool)arg1 ;
-(void)setHasInAppPurchases:(bool)arg1 ;
-(id)screenshotImage;
-(bool)appBundle;
-(id)appBundleView;
-(long long)numberOfUserRatings;
-(void)setNumberOfUserRatings:(long long)arg1 ;
@end

