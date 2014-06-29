/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/NoteCollectionObject.h>

@class NSDictionary, NSNumber, NSString, NSSet, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject {

	NSDictionary* _constraints;

}

@property (nonatomic,@dynamic,retain) NSNumber * type; 
@property (nonatomic,@dynamic,retain) NSString * constraintsPath; 
@property (nonatomic,@dynamic,retain) NSString * accountIdentifier; 
@property (nonatomic,@dynamic,retain) NSSet * stores; 
@property (nonatomic,@dynamic,retain) NoteStoreObject * defaultStore; 
@property (nonatomic,@dynamic,retain) NSString * name; 
@property (assign,nonatomic) int accountType; 
@property (nonatomic,retain) NSString * pathToConstraintsPlist; 
@property (nonatomic,retain) NSDictionary * constraints;                           //@synthesize constraints=_constraints - In the implementation block
-(void)setConstraints:(id)arg1 ;
-(id)constraints;
-(void).cxx_destruct;
-(id)storeForExternalId:(id)arg1 ;
-(id)pathToConstraintsPlist;
-(void)setPathToConstraintsPlist:(id)arg1 ;
-(id)predicateForNotes;
-(id)collectionInfo;
-(bool)shouldMarkNotesAsDeleted;
-(id)basicAccountIdentifier;
-(bool)validateDefaultStore:(id*)arg1 error:(id*)arg2 ;
-(void)didTurnIntoFault;
-(void)setAccountType:(int)arg1 ;
-(int)accountType;
@end

