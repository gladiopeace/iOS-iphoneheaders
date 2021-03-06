/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TSPPasteboard : NSObject {

	id _pasteboard;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,readonly) NSArray * strings; 
@property (nonatomic,readonly) NSArray * richTextStrings; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long changeCount; 
@property (nonatomic,readonly) bool isSmartCopy; 
+(id)stylePasteboard;
+(id)activePasteboardsQueue;
+(id)activePasteboards;
+(Class)pasteboardClass;
+(id)activePasteboardForName:(id)arg1 ;
+(id)pasteboardWithPasteboard:(id)arg1 ;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(bool)arg2 ;
+(id)pasteboardWithUniqueName;
-(long long)clearContents;
-(void)addItems:(id)arg1 isSmartCopy:(bool)arg2 ;
-(bool)containsNativePasteboardTypes;
-(id)initWithGeneralPasteboard;
-(id)initWithPasteboardName:(id)arg1 create:(bool)arg2 ;
-(id)initWithUniquePasteboardName;
-(id)initWithNativePasteboard:(id)arg1 ;
-(id)richTextStrings;
-(bool)containsAnyPasteboardTypeInArray:(id)arg1 ;
-(void)performAsynchronousWriteUsingBlock:(/*^block*/ id)arg1 ;
-(void)addData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)importableRichTextTypes;
-(id)importableImageTypes;
-(id)importablePlainTextTypes;
-(bool)containsImportableRichTextTypes;
-(bool)containsImportableTextTypes;
-(bool)isSmartCopy;
-(void)beginTransaction;
-(void)endTransaction;
-(id)description;
-(oneway void)invalidate;
-(id)string;
-(id)name;
-(long long)changeCount;
-(void)setString:(id)arg1 ;
-(long long)numberOfItems;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(id)pasteboardTypes;
-(bool)containsPasteboardTypes:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(id)strings;
-(id)URLs;
-(void).cxx_destruct;
@end

