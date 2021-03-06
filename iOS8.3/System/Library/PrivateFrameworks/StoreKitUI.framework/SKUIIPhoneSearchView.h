/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionView, UIView;

@interface SKUIIPhoneSearchView : UIView {

	UICollectionView* _collectionView;
	UIView* _noResultsView;
	UIView* _relatedView;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * noResultsView;                         //@synthesize noResultsView=_noResultsView - In the implementation block
@property (nonatomic,retain) UIView * relatedView;                           //@synthesize relatedView=_relatedView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setNoResultsView:(UIView *)arg1 ;
-(void)setRelatedView:(UIView *)arg1 ;
-(UIView *)noResultsView;
-(UIView *)relatedView;
@end

