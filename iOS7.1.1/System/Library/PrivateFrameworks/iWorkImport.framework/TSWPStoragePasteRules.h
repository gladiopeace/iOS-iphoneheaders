/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPStorage;

@interface TSWPStoragePasteRules : NSObject {

	unsigned _flags;
	unsigned _actionFlags[4];
	unsigned _lastFlag;
	NSRange _srcLeadRange;
	NSRange _srcTrailRange;
	bool _mapDestTrailCS;
	TSWPStorage* _destStorage;
	unsigned long long _sourceColumnStyleCount;
	unsigned long long _sourceSectionCount;
	SCD_Struct_TS591 _paragraphs[4];

}
-(void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 ;
-(void)didPasteWithIOTransaction:(TSWPStorageTransaction*)arg1 atDestRange:(NSRange)arg2 ;
-(void)mapCharacterStyleProperties:(id)arg1 toRange:(NSRange)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(NSRange)arg3 ;
-(void)addActionFlag:(int)arg1 ;
-(void)applyParagraph:(int)arg1 toCharIndex:(unsigned long long)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)mapCharacterStyles:(int)arg1 toRange:(NSRange)arg2 ioTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)dealloc;
-(id).cxx_construct;
@end

