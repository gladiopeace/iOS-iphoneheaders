/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSString, NSMutableSet;

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {

	NSString* _destinationPath;
	NSMutableSet* _skippedPaths;

}
+(id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(bool)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
-(bool)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(bool)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(bool)_shouldCopyItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
-(bool)_shouldProceedAfterErrno:(int)arg1 copyingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
-(void)dealloc;
@end

