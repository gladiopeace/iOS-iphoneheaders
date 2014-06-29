/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPObjectContext, NSCharacterSet;

@interface TPHeaderFragmentImportHelper : NSObject {

	id* _fragments;
	TSPObjectContext* _storageContext;
	TSPObjectContext* _objectsContext;
	NSCharacterSet* _whitespaceCharacterSet;
	NSCharacterSet* _nonWhitespaceCharacterSet;

}
-(id)initWithFragments:(id*)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 ;
-(void)processFragmentsForSpaceFormatting;
-(bool)p_storageIsEffectivelyEmpty:(id)arg1 ;
-(unsigned long long)countOfWhitespaceRunsInString:(id)arg1 ranges:(NSRange)arg2 ;
-(void)p_splitStorageInThree:(int)arg1 withRanges:(NSRange)arg2 ;
-(void)p_splitStorageInTwo:(int)arg1 withRanges:(NSRange)arg2 firstTarget:(int)arg3 secondTarget:(int)arg4 ;
-(void)dealloc;
@end

