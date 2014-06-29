/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextCommand.h>

@interface TSWPApplyChangesInRangeCommand : TSWPTextCommand {

	bool _accept;
	bool _forceAll;
	NSRange _range;
	NSRange _selectionRange;

}
-(void)doCommit;
-(int)persistenceKind;
-(void)p_stopEditingFootnote;
-(id)initWithStorage:(id)arg1 range:(NSRange)arg2 selectionRange:(NSRange)arg3 accept:(bool)arg4 forceAll:(bool)arg5 ;
-(void)redo;
-(id).cxx_construct;
-(id)actionString;
@end

