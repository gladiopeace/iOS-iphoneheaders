/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject {

	TSCEASTNodeArray* mAST;
	SCD_Struct_TS287 mFormulaID;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSCEASTNodeArray*)ast;
-(SCD_Struct_TS287)formulaID;
-(void)encodeToArchive:(TrackedReferenceArchive*)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
@end

