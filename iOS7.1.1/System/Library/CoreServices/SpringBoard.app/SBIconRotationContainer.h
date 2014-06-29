/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBIconViewMap, SBIconView, SBIcon;

@interface SBIconRotationContainer : UIView {

	SBIconCoordinate _coordinate;
	SBIconViewMap* _viewMap;
	SBIconView* _startView;
	SBIconView* _endView;
	CGPoint _wallpaperRelativeImageCenter;

}

@property (nonatomic,readonly) SBIcon * endIcon; 
@property (nonatomic,readonly) SBIconCoordinate coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeImageCenter;              //@synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter - In the implementation block
@property (nonatomic,readonly) CGPoint iconImageCenter; 
-(void)setWallpaperRelativeImageCenter:(CGPoint)arg1 ;
-(CGPoint)iconImageCenter;
-(id)initWithFrame:(CGRect)arg1 startIcon:(id)arg2 endIcon:(id)arg3 viewMap:(id)arg4 coordinate:(SBIconCoordinate)arg5 ;
-(void)prepareToCrossfade;
-(void)crossfadeWithDuration:(double)arg1 ;
-(id)endIcon;
-(CGPoint)wallpaperRelativeImageCenter;
-(void)dealloc;
-(SBIconCoordinate)coordinate;
@end

