/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UICollectionViewDelegate <UIScrollViewDelegate>
@optional
-(bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
-(bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
-(bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
-(bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
-(bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
@end

