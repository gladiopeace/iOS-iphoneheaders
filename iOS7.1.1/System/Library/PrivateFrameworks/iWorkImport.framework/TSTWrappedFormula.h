/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTFormula.h>

@interface TSTWrappedFormula : TSTFormula {

	int mFunctionIndex;

}

@property (assign,nonatomic) int functionIndex; 
-(int)functionIndex;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(bool)arg2 ;
-(id)nodesToCheckForBareArgumentPlaceholders;
-(void)reparseWithStorage:(id)arg1 adjustExpressionTree:(/*^block*/ id)arg2 ;
-(void)setFunctionIndex:(int)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
@end

