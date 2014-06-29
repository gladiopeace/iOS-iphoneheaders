/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIColor, UIView;

@interface _UIParallaxDimmingView : UIView {

	UIImageView* leftEdgeFade;
	bool _backgroundIsDimmed;
	UIColor* _dimmingColor;
	UIView* _addingSubview;

}

@property (nonatomic,retain) UIColor * dimmingColor;               //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) bool backgroundIsDimmed;              //@synthesize backgroundIsDimmed=_backgroundIsDimmed - In the implementation block
@property (nonatomic,retain) UIView * addingSubview;               //@synthesize addingSubview=_addingSubview - In the implementation block
+(id)newDimmingViewWithFrame:(CGRect)arg1 ;
+(id)newDimmingViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setBackgroundIsDimmed:(bool)arg1 ;
-(void)crossFade;
-(void)setDimmingColor:(id)arg1 ;
-(id)dimmingColor;
-(void)setAddingSubview:(id)arg1 ;
-(id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2 ;
-(id)addingSubview;
-(bool)backgroundIsDimmed;
-(id)defaultBorderColor;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
@end

