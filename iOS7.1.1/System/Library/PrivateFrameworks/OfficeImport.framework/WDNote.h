/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDText, WDCharacterRun;

@interface WDNote : WDRun {

	WDText* mText;
	WDCharacterRun* mReference;
	bool mAutomaticNumbering;

}
-(void)dealloc;
-(id)text;
-(id)reference;
-(int)runType;
-(void)setAutomaticNumbering:(bool)arg1 ;
-(bool)automaticNumbering;
-(id)initWithParagraph:(id)arg1 footnote:(bool)arg2 ;
@end

