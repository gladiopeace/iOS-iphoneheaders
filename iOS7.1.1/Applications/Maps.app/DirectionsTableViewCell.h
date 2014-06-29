/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MNSimpleSignView, RouteStepLabelListView, UIImageView;

@interface DirectionsTableViewCell : UITableViewCell {

	MNSimpleSignView* _signView;
	RouteStepLabelListView* _labelListView;
	UIImageView* _iconView;
	BOOL _alignLeftIfNoManeuverSign;
	BOOL _isDimmedStep;
	BOOL _isNightMode;

}

@property (assign,nonatomic) BOOL isNightMode;              //@synthesize isNightMode=_isNightMode - In the implementation block
+(float)heightForWidth:(float)arg1 route:(id)arg2 step:(id)arg3 ;
+(Class)_labelListViewClassForRoute:(id)arg1 step:(id)arg2 ;
+(float)_textWidthForWidth:(float)arg1 withManeuver:(BOOL)arg2 ;
+(id)currentStepColor;
+(id)reuseIdentifier;
-(void)_updateStyleValuesFromTheme;
-(void)setRoute:(id)arg1 step:(id)arg2 stepIndex:(unsigned)arg3 currentStep:(BOOL)arg4 alignToLeftEdgeIfNoManeuverSign:(BOOL)arg5 shieldText:(id)arg6 shieldArtwork:(id)arg7 ;
-(void)setIsDimmedStep:(BOOL)arg1 ;
-(void)setIsNightMode:(BOOL)arg1 ;
-(BOOL)isNightMode;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void).cxx_destruct;
@end

