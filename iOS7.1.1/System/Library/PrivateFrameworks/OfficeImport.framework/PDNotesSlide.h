/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDNotesMaster;

@interface PDNotesSlide : PDSlideChild {

	PDNotesMaster* mNotesMaster;

}
-(void)dealloc;
-(id)init;
-(id)parentSlideBase;
-(void)doneWithContent;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3 ;
-(id)notesMaster;
-(void)setNotesMaster:(id)arg1 ;
@end

