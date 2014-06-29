/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol PLEffectSelectionViewControllerDelegate;
@class UICollectionView, UICollectionViewFlowLayout, NSArray, NSIndexPath, CIFilter;

@interface PLEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	NSArray* _effects;
	NSIndexPath* __selectedIndexPath;
	CGSize _cellSize;
	CGSize _thumbnailSize;
	<PLEffectSelectionViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <PLEffectSelectionViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CIFilter * selectedEffect; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)setSelectedEffect:(id)arg1 ;
-(id)initWithImageSize:(CGSize)arg1 ;
-(void)_generateFilters;
-(void)_resetSelectedToOriginal;
-(void)_setSelectedIndexPath:(id)arg1 ;
-(id)_selectedIndexPath;
-(void)_scrollToSelectedIndexAnimated:(bool)arg1 ;
-(id)_textForItemAtIndexPath:(id)arg1 ;
-(void)_notifyEffectSelectedAndScrollIfNecessary;
-(id)selectedEffect;
-(void)_scrollToShowNextFilterNearEdge;
@end

