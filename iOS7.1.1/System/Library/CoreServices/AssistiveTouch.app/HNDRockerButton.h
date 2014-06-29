/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:10 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDView.h>

@protocol HNDRockerButtonDataSource;
@class NSString, UILabel, UIImageView, NSBundle;

@interface HNDRockerButton : HNDView {

	/*^block*/ id _downBlock;
	/*^block*/ id _upBlock;
	NSString* _title;
	BOOL _selected;
	BOOL _highlighted;
	UILabel* _label;
	NSString* _imageName;
	UIImageView* _imageView;
	BOOL _isEmptyFavorite;
	BOOL _customTitle;
	BOOL _isBackButton;
	BOOL isEmptyFavorite;
	BOOL customTitle;
	BOOL isModalDown;
	BOOL _maxNumberOfLines;
	BOOL _continueHighlightAfterTouch;
	BOOL _ignoreImageHeightForTextOffset;
	CGPathRef hitPath;
	NSBundle* _imageBundle;
	<HNDRockerButtonDataSource>* _dataSource;
	CGPoint _textOffset;

}

@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id upBlock;                                              //@synthesize upBlock=_upBlock - In the implementation block
@property (nonatomic,copy) id downBlock;                                            //@synthesize downBlock=_downBlock - In the implementation block
@property (assign,nonatomic) BOOL isModalDown; 
@property (assign,nonatomic) BOOL selected;                                         //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                      //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) CGPathRef hitPath; 
@property (assign,nonatomic) BOOL isEmptyFavorite; 
@property (assign,nonatomic) BOOL customTitle; 
@property (assign,nonatomic) BOOL maxNumberOfLines;                                 //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL isBackButton;                                     //@synthesize isBackButton=_isBackButton - In the implementation block
@property (assign,nonatomic) CGPoint textOffset;                                    //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) BOOL ignoreImageHeightForTextOffset;                   //@synthesize ignoreImageHeightForTextOffset=_ignoreImageHeightForTextOffset - In the implementation block
@property (assign,nonatomic) <HNDRockerButtonDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL continueHighlightAfterTouch;                      //@synthesize continueHighlightAfterTouch=_continueHighlightAfterTouch - In the implementation block
@property (nonatomic,retain) NSBundle * imageBundle;                                //@synthesize imageBundle=_imageBundle - In the implementation block
+(id)buttonWithTitle:(id)arg1 imageName:(id)arg2 downBlock:(/*^block*/ id)arg3 upBlock:(/*^block*/ id)arg4 dataSource:(id)arg5 ;
-(BOOL)isModalDown;
-(void)handleRealUpEvent:(CGPoint)arg1 ;
-(void)handleRealCancelEvent:(CGPoint)arg1 ;
-(void)handleFingerDriftedAway;
-(void)handleRealDownEvent:(CGPoint)arg1 ;
-(void)setIsBackButton:(BOOL)arg1 ;
-(CGPathRef)hitPath;
-(void)performPress:(BOOL)arg1 ;
-(void)setImageBundle:(id)arg1 ;
-(void)setIsModalDown:(BOOL)arg1 ;
-(void)setMaxNumberOfLines:(BOOL)arg1 ;
-(void)setContinueHighlightAfterTouch:(BOOL)arg1 ;
-(void)setIsEmptyFavorite:(BOOL)arg1 ;
-(CGRect)adjustTextForActualFrame:(CGRect)arg1 withSuggestedFrame:(CGRect)arg2 ;
-(BOOL)isEmptyFavorite;
-(void)setHitPath:(CGPathRef)arg1 ;
-(void)setIgnoreImageHeightForTextOffset:(BOOL)arg1 ;
-(/*^block*/ id)downBlock;
-(/*^block*/ id)upBlock;
-(id)initWithImageName:(id)arg1 ;
-(void)setDownBlock:(/*^block*/ id)arg1 ;
-(void)setUpBlock:(/*^block*/ id)arg1 ;
-(void)_updateFont;
-(BOOL)continueHighlightAfterTouch;
-(id)imageBundle;
-(void)updateTextColor;
-(BOOL)ignoreImageHeightForTextOffset;
-(BOOL)maxNumberOfLines;
-(void)_drawPixels;
-(void)_updateImage;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)dataSource;
-(id)accessibilityLabel;
-(id)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)currentImage;
-(BOOL)highlighted;
-(void)setTextOffset:(CGPoint)arg1 ;
-(CGPoint)textOffset;
-(BOOL)selected;
-(BOOL)isAccessibilityElement;
-(void)setImageName:(id)arg1 ;
-(BOOL)customTitle;
-(void)setCustomTitle:(BOOL)arg1 ;
-(BOOL)isBackButton;
@end

