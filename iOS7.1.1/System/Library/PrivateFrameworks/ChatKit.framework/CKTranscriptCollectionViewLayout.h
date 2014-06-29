/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSArray, CADisplayLink;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {

	bool _holdingBoundsInvalidation;
	bool _useInitialLayoutAttributesForRotation;
	bool _easingUp;
	bool _shouldDisplayLinkInvalidateLayout;
	double _anchorYPosition;
	NSArray* _layoutAttributes;
	CADisplayLink* _displayLink;
	double _prevTimestamp;
	CGPoint _targetContentOffset;
	CGSize _contentSize;
	CGRect _visibleBounds;

}

@property (assign,nonatomic) double anchorYPosition;                                                                                   //@synthesize anchorYPosition=_anchorYPosition - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                                                              //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,getter=isHoldingBoundsInvalidation,nonatomic) bool holdingBoundsInvalidation;                                        //@synthesize holdingBoundsInvalidation=_holdingBoundsInvalidation - In the implementation block
@property (assign,getter=isUsingInitialLayoutAttributesForRotation,nonatomic) bool useInitialLayoutAttributesForRotation;              //@synthesize useInitialLayoutAttributesForRotation=_useInitialLayoutAttributesForRotation - In the implementation block
@property (nonatomic,copy) NSArray * layoutAttributes;                                                                                 //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                                              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                                                                                     //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) double prevTimestamp;                                                                                     //@synthesize prevTimestamp=_prevTimestamp - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) bool easingUp;                                                                                            //@synthesize easingUp=_easingUp - In the implementation block
@property (assign,nonatomic) bool shouldDisplayLinkInvalidateLayout;                                                                   //@synthesize shouldDisplayLinkInvalidateLayout=_shouldDisplayLinkInvalidateLayout - In the implementation block
+(Class)layoutAttributesClass;
-(void)dealloc;
-(void)reloadData;
-(CGRect)visibleBounds;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setDisplayLink:(id)arg1 ;
-(id)displayLink;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateDisplayLink;
-(void)prepareLayout;
-(bool)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setUseInitialLayoutAttributesForRotation:(bool)arg1 ;
-(void)setAnchorYPosition:(double)arg1 ;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(void)setHoldingBoundsInvalidation:(bool)arg1 ;
-(id)layoutAttributes;
-(void)updateContentSize;
-(double)prevTimestamp;
-(void)displayLinkFired:(id)arg1 ;
-(void)setEasingUp:(bool)arg1 ;
-(void)setPrevTimestamp:(double)arg1 ;
-(void)setShouldDisplayLinkInvalidateLayout:(bool)arg1 ;
-(bool)isUsingInitialLayoutAttributesForRotation;
-(bool)isHoldingBoundsInvalidation;
-(void)setLayoutAttributes:(id)arg1 ;
-(double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5 ;
-(double)anchorYPosition;
-(bool)shouldDisplayLinkInvalidateLayout;
-(CGPoint)targetContentOffset;
-(bool)easingUp;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 ;
@end

