/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedViewControllerSpec.h>

@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec
-(id)gridSpec;
-(id)photoBrowserSpec;
-(void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 ;
-(UIEdgeInsets)contentInsetsForSectionType:(long long)arg1 collectionViewType:(long long)arg2 ;
-(CGSize)minimumVideoTileSize;
-(id)defaultTextAttributesForCollectionViewType:(long long)arg1 ;
-(id)emphasizedTextAttributesForCollectionViewType:(long long)arg1 ;
-(void)configureTextCell:(id)arg1 forCaption:(id)arg2 ;
-(void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2 ;
-(long long)largeNumberOfSubjectsForLikes;
-(void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2 ;
-(void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2 ;
-(void)configureCommentSeparatorMetrics:(inout PUFeedSeparatorMetrics*)arg1 ;
-(CGSize)thumbnailSize;
-(bool)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(long long)arg1 ;
-(bool)shouldShowLikeButtonForCollectionViewType:(long long)arg1 ;
-(void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(bool)arg7 ;
-(void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3 ;
-(void)getReferenceMaximumLength:(double*)arg1 minimumNumberOfTilesToOmit:(long long*)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4 ;
-(void)configureSeparatorMetrics:(inout PUFeedSeparatorMetrics*)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(bool)arg4 collectionViewType:(long long)arg5 ;
-(void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3 ;
-(double)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2 ;
-(bool)shouldHideBarsInLandscape;
-(id)photosPickerSpec;
-(long long)promptType;
-(bool)shouldUseFullscreenLayout;
-(bool)canUseSimplePreheatManager;
-(bool)shouldShowSeeAllInSectionFootersInCollectionViewType:(long long)arg1 ;
-(void)configureImageCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(long long)arg2 ;
@end

