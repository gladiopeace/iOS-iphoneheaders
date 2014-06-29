/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPRangeMap : NSObject {

	NSRange _subRange;
	vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> >* _unmappedIndexes;
	vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> >* _mappedIndexes;

}
-(NSRange)mappedCharRange:(NSRange)arg1 ;
-(unsigned long long)unmappedCharIndex:(unsigned long long)arg1 ;
-(NSRange)unmappedCharRange:(NSRange)arg1 ;
-(unsigned long long)mappedCharIndex:(unsigned long long)arg1 ;
-(id)initWithSubRange:(NSRange)arg1 unmappedIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 affinity:(int)arg3 ;
-(unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1 ;
-(id)initWithSubRange:(NSRange)arg1 unmappedPairIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 ;
-(void)adjustByDelta:(long long)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

