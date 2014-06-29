/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCEFormulaMap;

@interface TSCEFormulaMapEnumerator : NSObject {

	TSCEFormulaMap* mFormulaMap;
	hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > > >, void *> *> >* mOwnersToFormulasIterator;
	wrap_iter<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> *>* mFormulasForAnOwnerIterator;

}
-(id)initWithFormulaMap:(id)arg1 ;
-(TSCEFormula*)nextFormulaGettingOwner:(const _CFUUID*)arg1 cellCoordinate:(SCD_Struct_TS267*)arg2 ;
-(void)dealloc;
-(id).cxx_construct;
-(bool)hasNext;
@end

