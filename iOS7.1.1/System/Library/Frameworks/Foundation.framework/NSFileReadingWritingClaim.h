/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingWritingClaim : NSFileAccessClaim {

	NSURL* _readingURL;
	bool _readingURLDidChange;
	unsigned long long _readingOptions;
	NSURL* _writingURL;
	bool _writingURLDidChange;
	unsigned long long _writingOptions;
	NSFileAccessNode* _readingLocation;
	NSFileAccessNode* _writingLocation;
	NSFileAccessNode* _rootNode;
	long long _readingLinkResolutionCount;

}
-(bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/ id)arg1 crashHandler:(/*^block*/ id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(/*^block*/ id)arg3 ;
-(void)granted;
-(void)invokeClaimer;
-(bool)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned long long)arg3 writingURL:(id)arg4 options:(unsigned long long)arg5 claimer:(/*^block*/ id)arg6 ;
-(void)dealloc;
@end

