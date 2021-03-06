/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@interface TSTOperatorNode : TSTExpressionNode {

	unsigned short mOperator;

}

@property (assign,nonatomic) unsigned short operatorChar; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(OperatorNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const OperatorNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS272)arg2 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(BOOL)forceReferenceInterpretationOfChildren;
-(id)argumentSpec;
-(id)initWithContext:(id)arg1 operatorChar:(unsigned short)arg2 children:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 ;
-(void)setOperatorChar:(unsigned short)arg1 ;
-(id)string;
-(unsigned short)operatorChar;
-(int)tokenType;
@end

