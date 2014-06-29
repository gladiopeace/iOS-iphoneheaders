/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <SpringBoard/SBWallpaperObserver.h>

@class SBWallpaperEffectView, UIImageView, UIView, SBFolderSettings, _UILegibilitySettings;

@interface SBFolderBackgroundView : UIView <_UISettingsKeyObserver, SBWallpaperObserver> {

	SBWallpaperEffectView* _backdropView;
	UIImageView* _backgroundImageView;
	UIView* _accessibilityBackgroundView;
	SBFolderSettings* _folderSettings;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
+(void)warmupIfNecessary;
+(CGSize)folderBackgroundSize;
+(float)cornerRadiusToInsetContent;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)_configureAccessibilityBackground;
-(BOOL)_shouldUseDarkBackground;
-(void)willAnimate;
-(void)didAnimate;
-(void)adjustCornerRadiusForMagnificationFraction:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateBackgroundImageView;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)legibilitySettings;
@end

