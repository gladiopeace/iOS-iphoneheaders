/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIControl.h>

@protocol PLPhotoScrubberDataSource, PLPhotoScrubberSpeedDelegate;
@class UIView, NSMutableArray, UIImageView, NSTimer;

@interface PLPhotoScrubber : UIControl {

	<PLPhotoScrubberDataSource>* _dataSource;
	unsigned long long _displayedImageIndex;
	long long _prospectiveImageIndex;
	double _timeOfLastTouch;
	double _lastUpdate;
	UIView* _thumbnailTrackView;
	CGRect _thumbnailBounds;
	double _imagesPerViewRatio;
	NSMutableArray* _thumbnailViews;
	UIImageView* _loupeView;
	long long _loupeIndex;
	unsigned long long _imageCount;
	bool _scrubbing;
	bool _deferImageLoading;
	bool _loadImagesSynchronously;
	<PLPhotoScrubberSpeedDelegate>* _speedDelegate;
	double __scrubbingSpeed;
	long long __lastSpeedRegime;
	double __lastTime;
	NSTimer* __timeoutTimer;

}

@property (assign,nonatomic,@dynamic) <PLPhotoScrubberDataSource> * dataSource; 
@property (assign,nonatomic) <PLPhotoScrubberSpeedDelegate> * speedDelegate;                      //@synthesize speedDelegate=_speedDelegate - In the implementation block
@property (assign,setter=_setScrubbingSpeed:,nonatomic) double _scrubbingSpeed;                   //@synthesize _scrubbingSpeed=__scrubbingSpeed - In the implementation block
@property (assign,setter=_setLastSpeedRegime:,nonatomic) long long _lastSpeedRegime;              //@synthesize _lastSpeedRegime=__lastSpeedRegime - In the implementation block
@property (assign,setter=_setLastTime:,nonatomic) double _lastTime;                               //@synthesize _lastTime=__lastTime - In the implementation block
@property (setter=_setTimeoutTimer:,nonatomic,retain) NSTimer * _timeoutTimer;                    //@synthesize _timeoutTimer=__timeoutTimer - In the implementation block
-(void)_rescheduleTimer;
-(bool)isScrubbing;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setDataSource:(id)arg1 reloadData:(bool)arg2 ;
-(void)reloadImageAtIndex:(long long)arg1 ;
-(void)setDeferImageLoading:(bool)arg1 ;
-(void)reloadDataWithNewDisplayedIndex:(unsigned long long)arg1 ;
-(void)setSpeedDelegate:(id)arg1 ;
-(long long)displayedImageIndex;
-(void)setImage:(id)arg1 atIndex:(long long)arg2 ;
-(void)setLoupeImage:(id)arg1 ;
-(bool)isFastScrubbing;
-(void)setDisplayedImageIndex:(long long)arg1 ;
-(void)_setScrubbingSpeed:(double)arg1 ;
-(void)_setLastSpeedRegime:(long long)arg1 ;
-(void)_updateLoupe:(bool)arg1 force:(bool)arg2 ;
-(unsigned long long)_imageIndexFromLocation:(CGPoint)arg1 ;
-(void)_setDisplayedImageIndex:(long long)arg1 immediately:(bool)arg2 ;
-(long long)_lastSpeedRegime;
-(void)_setIsScrubbing:(bool)arg1 ;
-(unsigned long long)_thumbnailIndexFromLocation:(CGPoint)arg1 ;
-(void)_setDisplayedImageIndex:(id)arg1 ;
-(void)_updateLoupeWithTouch:(id)arg1 forceUpdate:(bool)arg2 ;
-(CGPoint)_centerForImageAtIndex:(long long)arg1 ;
-(double)_scrubbingSpeed;
-(void)_setSpeedRegime:(long long)arg1 ;
-(void)_performSpeedUpdate;
-(id)speedDelegate;
-(double)_lastTime;
-(void)_setLastTime:(double)arg1 ;
-(id)_timeoutTimer;
-(void)_handleTimeoutTimer:(id)arg1 ;
-(void)_setTimeoutTimer:(id)arg1 ;
-(void)ppt_scrubToAbsoluteIndex:(long long)arg1 immediately:(bool)arg2 ;
-(void)ppt_setIsScrubbing:(bool)arg1 ;
@end

