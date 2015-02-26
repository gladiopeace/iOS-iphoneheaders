/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Notes/NoteCollectionObject.h>

@class NSString, NoteAccountObject, NSSet;

@interface NoteStoreObject : NoteCollectionObject

@property (nonatomic,@dynamic,retain) NSString * externalIdentifier; 
@property (nonatomic,@dynamic,retain) NoteAccountObject * account; 
@property (nonatomic,@dynamic,retain) NSString * name; 
@property (nonatomic,@dynamic,retain) NSSet * changes; 
@property (nonatomic,@dynamic,retain) NSString * syncAnchor; 
-(id)notesForServerIds:(id)arg1 ;
-(id)notesForIntegerIds:(id)arg1 ;
-(unsigned)maximumServerIntId;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ascending:(BOOL)arg2 limit:(unsigned)arg3 ;
-(id)notesForServerIntIds:(id)arg1 ;
-(unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1 ;
-(id)predicateForNotes;
-(id)collectionInfo;
-(id)notesForServerIntIds:(id)arg1 ascending:(BOOL)arg2 limit:(unsigned)arg3 ;
-(id)notesForGUIDs:(id)arg1 ;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ;
-(id)basicAccountIdentifier;
@end
