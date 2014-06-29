/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSArray, UICollectionViewLayoutAttributes, PUAlbumListTransitionContext;

@interface PUStackedAlbumLayout : UICollectionViewLayout {

	NSMutableDictionary* _visibleLayoutAttributesByIndexPath;
	NSMutableDictionary* _derivedLayoutAttributesByIndexPath;
	NSMutableDictionary* _zIndexByIndexPath;
	bool _isInteractive;
	NSArray* _visibleStackedItemLayoutAttributes;
	UICollectionViewLayoutAttributes* _referenceItemLayoutAttributes;
	double _yAdjust;
	PUAlbumListTransitionContext* _albumListTransitionContext;
	CGPoint _referenceCenter;
	CGSize _contentSizeAdjust;

}

@property (nonatomic,copy) NSArray * visibleStackedItemLayoutAttributes;                                  //@synthesize visibleStackedItemLayoutAttributes=_visibleStackedItemLayoutAttributes - In the implementation block
@property (nonatomic,copy) UICollectionViewLayoutAttributes * referenceItemLayoutAttributes;              //@synthesize referenceItemLayoutAttributes=_referenceItemLayoutAttributes - In the implementation block
@property (assign,nonatomic) CGPoint referenceCenter;                                                     //@synthesize referenceCenter=_referenceCenter - In the implementation block
@property (assign,nonatomic) double yAdjust;                                                              //@synthesize yAdjust=_yAdjust - In the implementation block
@property (assign,nonatomic) CGSize contentSizeAdjust;                                                    //@synthesize contentSizeAdjust=_contentSizeAdjust - In the implementation block
@property (nonatomic,retain) PUAlbumListTransitionContext * albumListTransitionContext;                   //@synthesize albumListTransitionContext=_albumListTransitionContext - In the implementation block
@property (assign,setter=setInteractive:,nonatomic) bool isInteractive;                                   //@synthesize isInteractive=_isInteractive - In the implementation block
-(bool)isInteractive;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void).cxx_destruct;
-(void)prepareLayout;
-(/*^block*/ id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(id)albumListTransitionContext;
-(void)setAlbumListTransitionContext:(id)arg1 ;
-(id)visibleStackedItemLayoutAttributes;
-(CGPoint)referenceCenter;
-(void)setInteractive:(bool)arg1 ;
-(void)setYAdjust:(double)arg1 ;
-(void)setContentSizeAdjust:(CGSize)arg1 ;
-(long long)zIndexForItemAtIndexPath:(id)arg1 ;
-(void)setReferenceItemLayoutAttributes:(id)arg1 ;
-(void)setVisibleStackedItemLayoutAttributes:(id)arg1 ;
-(void)setReferenceCenter:(CGPoint)arg1 ;
-(double)yAdjust;
-(CGSize)contentSizeAdjust;
-(id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2 ;
-(id)referenceItemLayoutAttributes;
@end

