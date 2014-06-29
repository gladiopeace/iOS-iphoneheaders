/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Notes.assistantBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SANoteUpdate.h>
#import <Notes/NotesAssistantCommand.h>

@class NoteContext, NoteObject;

@interface NotesAssistantNoteUpdate : SANoteUpdate <NotesAssistantCommand> {

	NoteContext* _noteContext;
	NoteObject* _note;

}

@property (nonatomic,retain) NoteContext * noteContext;              //@synthesize noteContext=_noteContext - In the implementation block
-(void)performWithCompletion:(/*^block*/ id)arg1 ;
-(id)_updateNote;
-(id)_validate;
-(void).cxx_destruct;
-(id)noteContext;
-(void)setNoteContext:(id)arg1 ;
@end

