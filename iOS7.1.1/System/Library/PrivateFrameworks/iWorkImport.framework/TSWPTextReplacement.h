/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPReplaceAction.h>

@class TSWPSelection, NSString;

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction> {

	TSWPSelection* _selection;
	NSString* _string;

}
-(NSRange)insertedRange;
-(void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 replaceBlock:(/*^block*/ id)arg4 ;
-(id)initWithSelection:(id)arg1 string:(id)arg2 ;
-(unsigned long long)targetCharIndex;
-(void)dealloc;
-(long long)delta;
@end

