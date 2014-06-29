/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBFProceduralWallpaper.h>

@class NSBundle, _UICAPackageView, UIView;

@interface SBFMicaWallpaper : SBFProceduralWallpaper {

	NSBundle* _loadedBundle;
	_UICAPackageView* _packageView;
	UIView* _rootView;

}
+(id)identifier;
+(id)presetWallpaperOptions;
+(id)thumbnailImageForOptions:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnimating:(bool)arg1 ;
-(void)setWallpaperOptions:(id)arg1 ;
-(void)_unloadView;
-(void)_loadView;
@end

