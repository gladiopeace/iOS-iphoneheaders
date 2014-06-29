/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@class TSSStylesheet, NSArray, NSMutableDictionary, NSDictionary;

@interface TSSReapUnusedStylesCommand : TSKCommand {

	TSSStylesheet* mStylesheet;
	NSArray* mStyles;
	NSMutableDictionary* mIdentifiedStyles;
	NSArray* _styles;

}

@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (nonatomic,readonly) NSArray * styles;                             //@synthesize styles=_styles - In the implementation block
@property (nonatomic,readonly) NSDictionary * identifiedStyles; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)identifiedStyles;
-(id)initWithDocumentRoot:(id)arg1 stylesheet:(id)arg2 ;
-(void)dealloc;
-(id)styles;
-(bool)process;
-(id)stylesheet;
@end
