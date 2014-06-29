/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/_ContextDictionary.h>

@class NSMutableIndexSet;

@interface MegaMRowsChangedContext : _ContextDictionary

@property (assign,nonatomic) int section; 
@property (nonatomic,retain) NSMutableIndexSet * insertedIndices; 
@property (nonatomic,retain) NSMutableIndexSet * removedIndices; 
@property (nonatomic,retain) NSMutableIndexSet * updatedIndices; 
@property (nonatomic,retain) NSMutableIndexSet * destinationIndices; 
@property (nonatomic,retain) NSMutableIndexSet * relocatedIndices; 
+(id)_sharedKeySet;
-(id)insertedIndices;
-(id)removedIndices;
-(id)updatedIndices;
-(id)destinationIndices;
-(id)relocatedIndices;
-(void)setRemovedIndices:(id)arg1 ;
-(void)setInsertedIndices:(id)arg1 ;
-(void)setUpdatedIndices:(id)arg1 ;
-(void)setRelocatedIndices:(id)arg1 ;
-(void)setDestinationIndices:(id)arg1 ;
-(int)section;
-(void)setSection:(int)arg1 ;
-(BOOL)hasChanges;
@end

