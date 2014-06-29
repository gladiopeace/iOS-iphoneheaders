/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol PUGridRenderedStripDataSource;
@class NSArray, PUSectionedGridLayout, UIView;

@interface PUGridRenderedStrip : UICollectionReusableView {

	bool _extendsToTop;
	bool __needsRendering;
	int _backgroundColorValue;
	double _leftContentInset;
	NSArray* _itemIndexPaths;
	long long _visualSectionIndex;
	<PUGridRenderedStripDataSource>* _dataSource;
	PUSectionedGridLayout* _layout;
	unsigned long long _contentExtenderType;
	UIView* _topContentView;
	UIView* __sideExtendedContentView;
	CGSize _itemSize;
	CGSize _interItemSpacing;
	NSRange _visualItemRange;

}

@property (assign,nonatomic) CGSize itemSize;                                                  //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;                                          //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) double leftContentInset;                                          //@synthesize leftContentInset=_leftContentInset - In the implementation block
@property (assign,nonatomic) int backgroundColorValue;                                         //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (nonatomic,retain) NSArray * itemIndexPaths;                                         //@synthesize itemIndexPaths=_itemIndexPaths - In the implementation block
@property (nonatomic,readonly) long long visualSectionIndex;                                   //@synthesize visualSectionIndex=_visualSectionIndex - In the implementation block
@property (nonatomic,readonly) NSRange visualItemRange;                                        //@synthesize visualItemRange=_visualItemRange - In the implementation block
@property (assign,nonatomic,__weak) <PUGridRenderedStripDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) PUSectionedGridLayout * layout;                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) long long numberOfColumns; 
@property (assign,nonatomic) unsigned long long contentExtenderType;                           //@synthesize contentExtenderType=_contentExtenderType - In the implementation block
@property (assign,nonatomic) bool extendsToTop;                                                //@synthesize extendsToTop=_extendsToTop - In the implementation block
@property (nonatomic,readonly) UIView * topContentView;                                        //@synthesize topContentView=_topContentView - In the implementation block
@property (assign,setter=_setNeedsRendering:,nonatomic) bool _needsRendering;                  //@synthesize _needsRendering=__needsRendering - In the implementation block
@property (nonatomic,readonly) UIView * _sideExtendedContentView;                              //@synthesize _sideExtendedContentView=__sideExtendedContentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(long long)numberOfColumns;
-(id)dataSource;
-(id)layout;
-(void)setLayout:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void).cxx_destruct;
-(bool)_disableRasterizeInAnimations;
-(CGSize)itemSize;
-(CGSize)interItemSpacing;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(bool)_needsRendering;
-(void)_render;
-(void)_setNeedsRendering:(bool)arg1 ;
-(void)_updateExtendedContents;
-(double)leftContentInset;
-(int)backgroundColorValue;
-(void)setExtendsToTop:(bool)arg1 ;
-(id)topContentView;
-(void)setContentExtenderType:(unsigned long long)arg1 ;
-(void)setNeedsRendering;
-(void)setLeftContentInset:(double)arg1 ;
-(void)setVisualSectionIndex:(long long)arg1 andVisualItemRange:(NSRange)arg2 ;
-(void)setBackgroundColorValue:(int)arg1 ;
-(id)itemIndexPaths;
-(void)setItemIndexPaths:(id)arg1 ;
-(long long)visualSectionIndex;
-(NSRange)visualItemRange;
-(unsigned long long)contentExtenderType;
-(bool)extendsToTop;
-(id)_sideExtendedContentView;
@end

