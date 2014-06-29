/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIEditImageViewController.h>
#import <SpringBoardUIServices/SBFLegibilitySettingsProviderDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class PLWallpaperNavigationItem, NSArray, NSString, UIActionSheet, SBSUIWallpaperPreviewViewController;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate, UIActionSheetDelegate> {

	PLWallpaperNavigationItem* _navItem;
	int _wallpaperMode;
	NSArray* _navigationToolbarItems;
	bool _saveWallpaperData;
	NSString* _wallpaperTitle;
	UIActionSheet* _wallpaperOptionsSheet;
	unsigned _didSetImageMode : 1;
	bool _isWallpaperEdit;
	SBSUIWallpaperPreviewViewController* _wallpaperPreviewViewController;
	long long _previewVariant;
	long long _previewType;

}

@property (nonatomic,retain) SBSUIWallpaperPreviewViewController * wallpaperPreviewViewController;              //@synthesize wallpaperPreviewViewController=_wallpaperPreviewViewController - In the implementation block
@property (assign,nonatomic) bool saveWallpaperData;                                                            //@synthesize saveWallpaperData=_saveWallpaperData - In the implementation block
@property (nonatomic,copy) NSString * wallpaperTitle;                                                           //@synthesize wallpaperTitle=_wallpaperTitle - In the implementation block
@property (assign,nonatomic) long long previewVariant;                                                          //@synthesize previewVariant=_previewVariant - In the implementation block
@property (assign,nonatomic) long long previewType;                                                             //@synthesize previewType=_previewType - In the implementation block
@property (assign,nonatomic) bool isWallpaperEdit;                                                              //@synthesize isWallpaperEdit=_isWallpaperEdit - In the implementation block
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithUIImage:(id)arg1 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)setImageAsHomeScreenClicked:(id)arg1 ;
-(void)setImageAsLockScreenClicked:(id)arg1 ;
-(void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1 ;
-(void)motionToggledManually:(bool)arg1 ;
-(bool)uiipc_useTelephonyUI;
-(int)cropOverlayMode;
-(CGRect)_viewFrame;
-(unsigned long long)_contentAutoresizingMask;
-(void)setupNavigationItem;
-(unsigned long long)_tileAutoresizingMask;
-(bool)clientIsWallpaper;
-(bool)wantsStatusBarVisible;
-(long long)desiredStatusBarAnimation;
-(id)wallpaperPreviewViewController;
-(void)prepareForBackground:(id)arg1 ;
-(void)prepareForForeground:(id)arg1 ;
-(void)setPreviewVariant:(long long)arg1 ;
-(void)setPreviewType:(long long)arg1 ;
-(id)initWithWallpaperVariant:(long long)arg1 ;
-(void)setWallpaperPreviewViewController:(id)arg1 ;
-(void)_updateTitles;
-(void)_updatePreviewFrame:(id)arg1 ;
-(id)wallpaperTitle;
-(void)_backgroundCropWallpaper;
-(void)_cropWallpaperFinished:(id)arg1 ;
-(bool)saveWallpaperData;
-(void)setWallpaperSynchronouslyFromArgs:(id)arg1 ;
-(void)_savePhoto;
-(void)_displayWallpaperOptionsSheet;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(void)setWallpaperFromArgs:(id)arg1 ;
-(void)_adjustScrollViewGeometry;
-(void)setupWallpaperPreview;
-(void)setWallpaperTitle:(id)arg1 ;
-(long long)previewVariant;
-(long long)previewType;
-(bool)isWallpaperEdit;
-(void)setIsWallpaperEdit:(bool)arg1 ;
-(int)imageFormat;
-(void)setSaveWallpaperData:(bool)arg1 ;
@end

