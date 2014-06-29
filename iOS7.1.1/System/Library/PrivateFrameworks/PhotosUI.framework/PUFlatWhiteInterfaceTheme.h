/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUInterfaceTheme.h>

@class UIColor, UIImage, UIFont, NSDictionary;

@interface PUFlatWhiteInterfaceTheme : NSObject <PUInterfaceTheme>

@property (nonatomic,readonly) long long topLevelStatusBarStyle; 
@property (nonatomic,readonly) UIColor * topLevelNavigationBarButtonTintColor; 
@property (nonatomic,readonly) UIColor * photoCollectionViewBackgroundColor; 
@property (nonatomic,readonly) int photoCollectionViewBackgroundColorValue; 
@property (nonatomic,readonly) long long photoCollectionToolbarStyle; 
@property (nonatomic,readonly) bool photoCollectionToolbarTranslucent; 
@property (nonatomic,readonly) UIImage * photoCollectionToolbarShadowImage; 
@property (nonatomic,readonly) UIColor * photoCollectionToolbarTintColor; 
@property (nonatomic,readonly) double photoCollectionToolbarTextTitleSpacerWidth; 
@property (nonatomic,readonly) double photoCollectionToolbarIconToTextSpacerWidth; 
@property (nonatomic,readonly) UIColor * photoCollectionToolbarButtonTintColor; 
@property (nonatomic,readonly) unsigned long long emptyPlaceholderStyle; 
@property (nonatomic,readonly) UIColor * emptyPlaceholderViewBackgroundColor; 
@property (nonatomic,readonly) UIColor * albumListBackgroundColor; 
@property (nonatomic,readonly) UIFont * albumListTitleLabelFont; 
@property (nonatomic,readonly) UIFont * albumListSubtitleLabelFont; 
@property (nonatomic,readonly) double albumListDisabledAlbumStackViewAlpha; 
@property (nonatomic,readonly) double albumListDisabledAlbumTitleAlpha; 
@property (nonatomic,readonly) double bannerHeight; 
@property (nonatomic,readonly) UIColor * bannerBackgroundColor; 
@property (nonatomic,readonly) UIImage * gridViewCellBannerBackgroundImage; 
@property (nonatomic,readonly) UIColor * gridViewCellBannerBackgroundColor; 
@property (nonatomic,readonly) UIColor * gridViewCellBannerTextColor; 
@property (nonatomic,readonly) UIFont * gridViewCellBannerTextFont; 
@property (nonatomic,readonly) long long photoBrowserStatusBarStyle; 
@property (nonatomic,readonly) UIColor * photoBrowserChromeVisibleBackgroundColor; 
@property (nonatomic,readonly) UIColor * photoBrowserChromeHiddenBackgroundColor; 
@property (nonatomic,readonly) double videoPaletteSideMargin; 
@property (nonatomic,readonly) double videoPaletteBottomMargin; 
@property (nonatomic,readonly) NSDictionary * contentCommentsHiddenButtonTextAttributes; 
@property (nonatomic,readonly) UIColor * contentCommentsHiddenButtonImageColor; 
@property (nonatomic,readonly) NSDictionary * contentCommentsShownButtonTextAttributes; 
@property (nonatomic,readonly) UIColor * contentCommentsShownButtonImageColor; 
@property (nonatomic,readonly) UIEdgeInsets contentCommentsButtonImageInset; 
@property (nonatomic,readonly) NSDictionary * toolbarCommentsHiddenButtonTextAttributes; 
@property (nonatomic,readonly) UIColor * toolbarCommentsHiddenButtonImageColor; 
@property (nonatomic,readonly) NSDictionary * toolbarCommentsShownButtonTextAttributes; 
@property (nonatomic,readonly) UIColor * toolbarCommentsShownButtonImageColor; 
@property (nonatomic,readonly) UIEdgeInsets commentsButtonTextInset; 
@property (nonatomic,readonly) UIFont * wallpaperCategoryLabelFont; 
@property (nonatomic,readonly) UIColor * cloudFeedBackgroundColor; 
@property (nonatomic,readonly) UIColor * cloudFeedSeparatorColor; 
@property (nonatomic,readonly) double cloudFeedSeparatorHeight; 
@property (nonatomic,readonly) NSDictionary * cloudFeedDefaultTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedEmphasizedTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedWhiteDefaultTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedWhiteEmphasizedTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedLargerDefaultTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedLargerEmphasizedTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedInvitationTitleTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedInvitationSubtitleTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedInteractionTextAttributes; 
@property (nonatomic,readonly) NSDictionary * cloudFeedInteractionLargerTextAttributes; 
@property (nonatomic,readonly) UIImage * cloudFeedMiniChevronImage; 
@property (nonatomic,readonly) UIImage * cloudFeedSectionHeaderBackgroundImage; 
@property (nonatomic,readonly) UIFont * sharedAlbumCommentCardTitleFont; 
@property (nonatomic,readonly) UIFont * sharedAlbumCommentCardTextFont; 
@property (nonatomic,readonly) UIFont * sharedAlbumCommentCardButtonFont; 
@property (nonatomic,readonly) UIFont * sharedAlbumCommentCardAlbumTitleFont; 
@property (nonatomic,readonly) long long defaultKeyboardAppearance; 
-(void)configurePhotoCollectionToolbarButton:(id)arg1 ;
-(void)configurePhotoCollectionToolbarDeleteButton:(id)arg1 ;
-(double)photoCollectionToolbarTextTitleSpacerWidth;
-(double)photoCollectionToolbarIconToTextSpacerWidth;
-(id)photoCollectionViewBackgroundColor;
-(long long)topLevelStatusBarStyle;
-(unsigned long long)emptyPlaceholderStyle;
-(id)emptyPlaceholderViewBackgroundColor;
-(void)configureAlbumListTitleTextField:(id)arg1 asOpaque:(bool)arg2 ;
-(void)configureAlbumListSubtitleLabel:(id)arg1 asOpaque:(bool)arg2 ;
-(void)configureAlbumListDeleteButton:(id)arg1 ;
-(double)albumListDisabledAlbumStackViewAlpha;
-(double)albumListDisabledAlbumTitleAlpha;
-(void)configureAlbumListTitleLabel:(id)arg1 asOpaque:(bool)arg2 ;
-(void)configurePhotoCollectionHeaderTitleLabel:(id)arg1 forStyle:(long long)arg2 ;
-(void)configurePhotoCollectionHeaderLocationsLabel:(id)arg1 forStyle:(long long)arg2 ;
-(id)photoCollectionHeaderLocationIconForStyle:(long long)arg1 ;
-(void)configurePhotoCollectionHeaderDateLabel:(id)arg1 forStyle:(long long)arg2 ;
-(id)photoCollectionHeaderActionButtonAttributesForStyle:(long long)arg1 ;
-(id)photoCollectionHeaderActionButtonFontForStyle:(long long)arg1 ;
-(UIOffset)photoCollectionHeaderLocationIconOffsetForStyle:(long long)arg1 ;
-(void)configureCloudFeedInvitationReplyButton:(id)arg1 ;
-(id)cloudFeedSeparatorColor;
-(double)cloudFeedSeparatorHeight;
-(id)cloudFeedInvitationTitleTextAttributes;
-(id)cloudFeedInvitationSubtitleTextAttributes;
-(void)configureAlbumListStackViewPhonePhotoDecoration:(id)arg1 ;
-(void)configureAlbumListEmptyStackViewPhonePhotoDecoration:(id)arg1 ;
-(void)configureAlbumListStackViewPadPhotoDecoration:(id)arg1 ;
-(void)configureAlbumListEmptyStackViewPadPhotoDecoration:(id)arg1 ;
-(void)configureMapViewAnnotationCountLabel:(id)arg1 ;
-(id)sharedAlbumCommentCardTextFont;
-(id)cloudFeedLargerDefaultTextAttributes;
-(id)cloudFeedDefaultTextAttributes;
-(id)cloudFeedLargerEmphasizedTextAttributes;
-(id)cloudFeedEmphasizedTextAttributes;
-(id)cloudFeedMiniChevronImage;
-(id)cloudFeedInteractionLargerTextAttributes;
-(id)cloudFeedInteractionTextAttributes;
-(id)attributedStringForCloudFeedGroupHeaderWithText:(id)arg1 ;
-(id)sharedAlbumCommentCardTitleFont;
-(void)configureBannerStackView:(id)arg1 ;
-(void)configureBannerLabel:(id)arg1 ;
-(id)bannerBackgroundColor;
-(double)bannerHeight;
-(int)photoCollectionViewBackgroundColorValue;
-(void)configurePhotoCollectionGlobalFooterTitleLabel:(id)arg1 ;
-(void)configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg1 ;
-(long long)photoCollectionToolbarStyle;
-(bool)photoCollectionToolbarTranslucent;
-(id)photoCollectionToolbarTintColor;
-(id)photoCollectionToolbarShadowImage;
-(id)photoCollectionToolbarBackgroundImageForBarMetrics:(long long)arg1 ;
-(id)photoBrowserChromeVisibleBackgroundColor;
-(id)photoBrowserChromeHiddenBackgroundColor;
-(double)videoPaletteSideMargin;
-(double)videoPaletteBottomMargin;
-(long long)photoBrowserStatusBarStyle;
-(id)cloudFeedBackgroundColor;
-(void)configureCloudFeedStackView:(id)arg1 withStackSize:(CGSize)arg2 ;
-(id)themeImagePrefix;
-(id)albumListTitleLabelFont;
-(id)albumListSubtitleLabelFont;
-(id)_commentsFont;
-(id)contentCommentsHiddenButtonImageColor;
-(id)contentCommentsShownButtonImageColor;
-(id)contentCommentsShownButtonTextAttributes;
-(UIEdgeInsets)commentsButtonTextInset;
-(id)commentsButtonStringForCount:(long long)arg1 ;
-(id)topLevelNavigationBarButtonTitleTextAttributesForState:(unsigned long long)arg1 ;
-(id)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(unsigned long long)arg1 ;
-(UIOffset)topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(long long)arg1 ;
-(id)topLevelNavigationBarButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)topLevelNavigationBarBackButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)topLevelNavigationBarDoneButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)photoCollectionHeaderBackgroundColorForBackgroundStyle:(unsigned long long)arg1 ;
-(id)photoCollectionToolbarButtonTitleTextAttributesForState:(unsigned long long)arg1 ;
-(id)photoCollectionToolbarDeleteButtonTitleTextAttributesForState:(unsigned long long)arg1 ;
-(UIOffset)photoCollectionToolbarButtonTitlePositionAdjustmentforBarMetrics:(long long)arg1 ;
-(id)photoCollectionToolbarButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)photoCollectionToolbarDeleteButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)createCloudFeedCommentButton;
-(void)configureCloudFeedCommentButton:(id)arg1 withCount:(long long)arg2 ;
-(id)topLevelNavigationBarButtonTintColor;
-(id)photoCollectionToolbarButtonTintColor;
-(id)albumListBackgroundColor;
-(id)gridViewCellBannerBackgroundImage;
-(id)gridViewCellBannerBackgroundColor;
-(id)gridViewCellBannerTextColor;
-(id)gridViewCellBannerTextFont;
-(id)contentCommentsHiddenButtonTextAttributes;
-(UIEdgeInsets)contentCommentsButtonImageInset;
-(id)toolbarCommentsHiddenButtonTextAttributes;
-(id)toolbarCommentsHiddenButtonImageColor;
-(id)toolbarCommentsShownButtonTextAttributes;
-(id)toolbarCommentsShownButtonImageColor;
-(id)wallpaperCategoryLabelFont;
-(id)cloudFeedWhiteDefaultTextAttributes;
-(id)cloudFeedWhiteEmphasizedTextAttributes;
-(id)cloudFeedSectionHeaderBackgroundImage;
-(id)sharedAlbumCommentCardButtonFont;
-(id)sharedAlbumCommentCardAlbumTitleFont;
-(long long)defaultKeyboardAppearance;
-(id)_themeImageWithBaseName:(id)arg1 ;
@end

