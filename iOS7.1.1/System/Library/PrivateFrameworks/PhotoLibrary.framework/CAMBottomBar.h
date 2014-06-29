/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class CAMModeDial, CAMImageWell, CAMShutterButton, CAMFilterButton, CAMFlipButton, CAMElapsedTimeView, CAMHDRButton, CAMSlalomIndicatorView, UIButton;

@interface CAMBottomBar : UIView {

	long long _orientation;
	long long _backgroundStyle;
	CAMModeDial* _modeDial;
	CAMImageWell* _imageWell;
	CAMShutterButton* _stillDuringVideoButton;
	CAMShutterButton* _shutterButton;
	CAMFilterButton* _filterButton;
	CAMFlipButton* _flipButton;
	CAMElapsedTimeView* _elapsedTimeView;
	CAMHDRButton* _HDRButton;
	CAMSlalomIndicatorView* _slalomIndicatorView;
	UIButton* _cancelButton;

}

@property (nonatomic,readonly) long long orientation;                                   //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                 //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) CAMModeDial * modeDial;                                    //@synthesize modeDial=_modeDial - In the implementation block
@property (nonatomic,retain) CAMImageWell * imageWell;                                  //@synthesize imageWell=_imageWell - In the implementation block
@property (nonatomic,retain) CAMShutterButton * stillDuringVideoButton;                 //@synthesize stillDuringVideoButton=_stillDuringVideoButton - In the implementation block
@property (nonatomic,retain) CAMShutterButton * shutterButton;                          //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CAMFilterButton * filterButton;                            //@synthesize filterButton=_filterButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                      //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CAMHDRButton * HDRButton;                                  //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CAMSlalomIndicatorView * slalomIndicatorView;              //@synthesize slalomIndicatorView=_slalomIndicatorView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                   //@synthesize cancelButton=_cancelButton - In the implementation block
-(id)initWithOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)orientation;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2 ;
-(void)_updateBackgroundStyleAnimated:(bool)arg1 ;
-(void)_commonCAMBottomBarInitialization;
-(void)_layoutForHorizontalOrientation;
-(void)_layoutForVerticalOrientation;
-(void)setModeDial:(id)arg1 ;
-(void)setImageWell:(id)arg1 ;
-(void)setStillDuringVideoButton:(id)arg1 ;
-(void)setShutterButton:(id)arg1 ;
-(void)setFilterButton:(id)arg1 ;
-(void)setFlipButton:(id)arg1 ;
-(void)setElapsedTimeView:(id)arg1 ;
-(void)setSlalomIndicatorView:(id)arg1 ;
-(void)setHDRButton:(id)arg1 ;
-(id)modeDial;
-(id)imageWell;
-(id)stillDuringVideoButton;
-(id)shutterButton;
-(id)filterButton;
-(id)flipButton;
-(id)elapsedTimeView;
-(id)HDRButton;
-(id)slalomIndicatorView;
@end

