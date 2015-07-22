/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, NSArray, NSIndexPath, NSString;

@interface StarkOverlayView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	NSArray* _overlayItems;
	float _topOffset;
	/*^block*/id _delayedAction;
	char _isUpdating;
	NSIndexPath* _highlightedItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateCollectionViewFrame;
-(void)_updateToNewOverlayItems:(id)arg1 withTopOffset:(float)arg2 animated:(char)arg3 ;
-(void)_performAction:(/*^block*/id)arg1 ;
-(void)_startDelay;
-(void)_endDelay;
-(id)_indexPathsInRange:(NSRange)arg1 section:(int)arg2 ;
-(id)_itemForIndexPath:(id)arg1 ;
-(void)selectedCell:(id)arg1 ;
-(void)setTopOffset:(float)arg1 animated:(char)arg2 ;
-(void)setTopOffset:(float)arg1 withOverlayItems:(id)arg2 animated:(char)arg3 ;
-(void)updateToNewOverlayItems:(id)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(NSString *)description;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)preferredFocusedItem;
-(char)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
@end
