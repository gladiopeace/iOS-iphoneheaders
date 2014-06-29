/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSTFormulaToken.h>

@class NSString, TSCEFunctionArgumentSpec, NSArray, TSTWPTokenAttachment, TSDMultiPaneController;

@interface TSTExpressionNode : TSPObject <TSTFormulaToken> {

	NSArray* mChildren;
	TSCEFunctionArgumentSpec* mArgumentSpec;
	TSTWPTokenAttachment* mTokenAttachment;
	unsigned long long mFirstIndex;
	unsigned long long mLastIndex;
	NSString* mWhitespaceBefore;
	NSString* mWhitespaceAfter;

}

@property (nonatomic,retain) NSArray * children; 
@property (nonatomic,retain) TSCEFunctionArgumentSpec * argumentSpec; 
@property (assign,nonatomic) TSTWPTokenAttachment * tokenAttachment; 
@property (assign,nonatomic) unsigned long long firstIndex; 
@property (assign,nonatomic) unsigned long long lastIndex; 
@property (nonatomic,retain) NSString * whitespaceBefore; 
@property (nonatomic,retain) NSString * whitespaceAfter; 
@property (nonatomic,readonly) TSDMultiPaneController * popover; 
@property (nonatomic,@dynamic,readonly) int tokenType; 
@property (nonatomic,@dynamic,readonly) NSString * string; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ExpressionNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const ExpressionNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)tokenAttachment;
-(id)deepCopyIntoContext:(id)arg1 bakeModes:(bool)arg2 withTokenDict:(id)arg3 ;
-(id)formulaPlainText;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS267)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(id)copyIntoContext:(id)arg1 bakeModes:(bool)arg2 children:(id)arg3 ;
-(bool)forceReferenceInterpretationOfChildren;
-(id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 forceReferenceInterpretation:(bool)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2 ;
-(id)exportString;
-(void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(int)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5 ;
-(id)argumentSpec;
-(id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 ;
-(void)setArgumentSpec:(id)arg1 ;
-(id)detokenizedText;
-(bool)hasMenu;
-(void)enumerateExpressionNodesUsingBlock:(/*^block*/ id)arg1 ;
-(long long)compareFirstLastIndices:(id)arg1 ;
-(void)setTokenAttachment:(id)arg1 ;
-(void)setFirstIndex:(unsigned long long)arg1 ;
-(void)setLastIndex:(unsigned long long)arg1 ;
-(id)whitespaceBefore;
-(void)setWhitespaceBefore:(id)arg1 ;
-(id)whitespaceAfter;
-(void)setWhitespaceAfter:(id)arg1 ;
-(id)popover;
-(void)dealloc;
-(id)description;
-(unsigned long long)firstIndex;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)lastIndex;
-(void)setChildren:(id)arg1 ;
-(id)children;
@end

