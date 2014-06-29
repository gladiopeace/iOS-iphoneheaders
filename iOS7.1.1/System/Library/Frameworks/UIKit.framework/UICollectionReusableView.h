/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionViewLayoutAttributes, NSString, UICollectionView;

@interface UICollectionReusableView : UIView {

	UICollectionViewLayoutAttributes* _layoutAttributes;
	NSString* _reuseIdentifier;
	UICollectionView* _collectionView;
	struct {
		unsigned updateAnimationCount : 5;
		unsigned wasDequeued : 1;
	}  _reusableViewFlags;

}

@property (nonatomic,readonly) NSString * reuseIdentifier;              //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
+(id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 ;
+(id)_gkSetupTwoLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLine:(id)arg3 lowerLine:(id)arg4 metricOverrides:(id)arg5 ;
+(id)_gkSetupThreeLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLine:(id)arg3 middleLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6 ;
+(id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 withOverrides:(id)arg2 ;
+(void)_gkSetupSelectableTwoLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6 ;
+(void)_gkSetupSelectableThreeLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 middleLine:(id)arg5 lowerLine:(id)arg6 metricOverrides:(id)arg7 ;
-(id)_gkNewStandardTitleLabel;
-(id)_gkNewStandardInfoLabel;
-(id)_gkNewStandardImageView;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)reuseIdentifier;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)_collectionView;
-(void)_setBaseLayoutAttributes:(id)arg1 ;
-(bool)_disableRasterizeInAnimations;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(bool)_isInUpdateAnimation;
-(id)_layoutAttributes;
-(bool)_wasDequeued;
-(void)_markAsDequeued;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_addUpdateAnimation;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_clearUpdateAnimation;
-(void)_setReuseIdentifier:(id)arg1 ;
@end

