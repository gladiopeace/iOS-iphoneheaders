/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>
#import <Notes/NotesAssistantViewCell.h>

@class UILabel;

@interface NotesAssistantSingleNoteViewCell : SiriUIContentCollectionViewCell <NotesAssistantViewCell> {

	UILabel* _note;

}
+(bool)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(void)setNote:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void).cxx_destruct;
@end

