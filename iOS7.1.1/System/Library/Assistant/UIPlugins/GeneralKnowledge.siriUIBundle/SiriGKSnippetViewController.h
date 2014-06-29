/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UICollectionView, UICollectionViewFlowLayout, NSMutableArray, SiriGKDisambiguationPod, SiriGKBasePod, SAGKSnippet;

@interface SiriGKSnippetViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSMutableArray* _podArray;
	SiriGKDisambiguationPod* _disambiguationPod;
	SiriGKBasePod* _bottomAlternateResultsPod;

}

@property (nonatomic,retain) SAGKSnippet * snippet; 
-(void)_disambiguationHeaderTapped;
-(id)_podForSection:(long long)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void).cxx_destruct;
-(id)navigationTitle;
-(id)initWithSnippet:(id)arg1 ;
-(double)desiredHeightForTransparentHeaderView;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(Class)transparentHeaderViewClass;
@end

