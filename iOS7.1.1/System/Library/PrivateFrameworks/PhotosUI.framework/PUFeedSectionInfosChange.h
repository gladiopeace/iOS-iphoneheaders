/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSIndexSet, NSSet;

@interface PUFeedSectionInfosChange : NSObject {

	bool _shouldReload;
	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _updatedIndexes;
	NSSet* _sectionInfosWithCommentChanges;
	NSSet* _updatedAssets;

}

@property (assign,nonatomic) bool shouldReload;                                   //@synthesize shouldReload=_shouldReload - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedIndexes;                         //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedIndexes;                        //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * updatedIndexes;                         //@synthesize updatedIndexes=_updatedIndexes - In the implementation block
@property (nonatomic,retain) NSSet * sectionInfosWithCommentChanges;              //@synthesize sectionInfosWithCommentChanges=_sectionInfosWithCommentChanges - In the implementation block
@property (nonatomic,retain) NSSet * updatedAssets;                               //@synthesize updatedAssets=_updatedAssets - In the implementation block
-(void).cxx_destruct;
-(bool)shouldReload;
-(id)deletedIndexes;
-(id)insertedIndexes;
-(id)updatedAssets;
-(void)setUpdatedAssets:(id)arg1 ;
-(void)setShouldReload:(bool)arg1 ;
-(id)updatedIndexes;
-(id)sectionInfosWithCommentChanges;
-(void)setInsertedIndexes:(id)arg1 ;
-(void)setUpdatedIndexes:(id)arg1 ;
-(void)setDeletedIndexes:(id)arg1 ;
-(void)setSectionInfosWithCommentChanges:(id)arg1 ;
@end

