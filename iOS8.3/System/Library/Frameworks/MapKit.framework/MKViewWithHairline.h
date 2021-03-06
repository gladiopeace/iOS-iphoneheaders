/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:55:44 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface MKViewWithHairline : UIView {

	UIView* _bottomHairline;
	UIView* _topHairline;
	UIColor* _hairlineColor;
	float _leftHairlineInset;

}

@property (nonatomic,retain) UIColor * hairlineColor;                                              //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic) float leftHairlineInset;                                              //@synthesize leftHairlineInset=_leftHairlineInset - In the implementation block
@property (assign,getter=isTopHairlineHidden,nonatomic) char topHairlineHidden; 
@property (assign,getter=isBottomHairlineHidden,nonatomic) char bottomHairlineHidden; 
-(float)leftHairlineInset;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(void)setLeftHairlineInset:(float)arg1 ;
-(void)setTopHairlineHidden:(char)arg1 ;
-(void)setBottomHairlineHidden:(char)arg1 ;
-(char)isTopHairlineHidden;
-(char)isBottomHairlineHidden;
-(UIColor *)hairlineColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

