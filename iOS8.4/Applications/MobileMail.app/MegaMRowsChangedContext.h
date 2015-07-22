/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/_ContextDictionary.h>

@class NSSet, NSArray, MFSparseMutable64IndexSet;

@interface MegaMRowsChangedContext : _ContextDictionary

@property (nonatomic,retain) NSSet * insertedIndexPaths; 
@property (nonatomic,retain) NSSet * removedIndexPaths; 
@property (nonatomic,retain) NSSet * updatedIndexPaths; 
@property (nonatomic,retain) NSSet * destinationIndexPaths; 
@property (nonatomic,retain) NSSet * relocatedIndexPaths; 
@property (nonatomic,retain) NSArray * addedMessageInfos; 
@property (nonatomic,retain) NSArray * removedMessageInfos; 
@property (nonatomic,retain) MFSparseMutable64IndexSet * mergedConversations; 
+(id)_sharedKeySet;
-(NSSet *)removedIndexPaths;
-(NSSet *)updatedIndexPaths;
-(NSSet *)destinationIndexPaths;
-(NSSet *)relocatedIndexPaths;
-(NSArray *)addedMessageInfos;
-(NSArray *)removedMessageInfos;
-(MFSparseMutable64IndexSet *)mergedConversations;
-(void)setRemovedIndexPaths:(NSSet *)arg1 ;
-(void)setRemovedMessageInfos:(NSArray *)arg1 ;
-(void)setInsertedIndexPaths:(NSSet *)arg1 ;
-(void)setUpdatedIndexPaths:(NSSet *)arg1 ;
-(void)setMergedConversations:(MFSparseMutable64IndexSet *)arg1 ;
-(void)setAddedMessageInfos:(NSArray *)arg1 ;
-(void)setRelocatedIndexPaths:(NSSet *)arg1 ;
-(void)setDestinationIndexPaths:(NSSet *)arg1 ;
-(NSSet *)insertedIndexPaths;
-(char)hasChanges;
@end
