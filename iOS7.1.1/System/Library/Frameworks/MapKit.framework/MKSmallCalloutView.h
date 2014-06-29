/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/CalloutViewControllerProtocol.h>

@protocol _MKCalloutAccessoryView;
@class UILabel, UIView, _MKSmallCalloutPassthroughButton, MKCalloutBackgroundView, NSString;

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView<_MKCalloutAccessoryView>* _leftView;
	UIView<_MKCalloutAccessoryView>* _rightView;
	UIView<_MKCalloutAccessoryView>* _detailView;
	CGSize _preferredContentSize;
	double _maxWidth;
	bool _shouldPositionTitleForMapsTransitionMovingSideways;
	_MKSmallCalloutPassthroughButton* _maskedContainerView;
	UIView* _unmaskedContainerView;
	MKCalloutBackgroundView* _calloutBackgroundView;
	long long _mapDisplayStyle;

}

@property (nonatomic,readonly) CGSize _preferredContentSize;                               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (nonatomic,retain) MKCalloutBackgroundView * calloutBackgroundView;              //@synthesize calloutBackgroundView=_calloutBackgroundView - In the implementation block
@property (assign,nonatomic) long long mapDisplayStyle;                                    //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
-(id)calloutSubtitle;
-(void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2 ;
-(void)setDetailView:(id)arg1 animated:(bool)arg2 ;
-(void)beginMapsTransitionMovingSideways;
-(void)_updatePreferredContentSize;
-(void)_preLayoutCenterSubviews;
-(CGSize)_preferredContentSize;
-(id)detailView;
-(id)calloutBackgroundView;
-(void)setCalloutBackgroundView:(id)arg1 ;
-(bool)canDisplayCompleteTitleWhenExpanded;
-(void)setCalloutSubtitle:(id)arg1 ;
-(void)setDetailView:(id)arg1 ;
-(void)_updateAccessoryViewStyles;
-(double)_leftTextMargin;
-(double)_rightTextMargin;
-(CGRect)_centerRect;
-(double)maxCenterTextWidth;
-(double)_widthWithoutTruncation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLeftView:(id)arg1 animated:(bool)arg2 ;
-(void)setRightView:(id)arg1 animated:(bool)arg2 ;
-(void)setLeftView:(id)arg1 ;
-(void)setRightView:(id)arg1 ;
-(id)leftView;
-(id)rightView;
-(void)reset;
-(void).cxx_destruct;
-(void)setCalloutTitle:(id)arg1 ;
-(id)calloutTitle;
-(id)_subtitleLabel;
-(long long)mapDisplayStyle;
-(void)setMapDisplayStyle:(long long)arg1 ;
@end

