/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSArray;

@interface CheckHashesOperation : ISOperation {

	long long _bytesToHash;
	NSString* _filePath;
	NSArray* _hashes;

}

@property (readonly) NSString * filePath; 
@property (readonly) NSArray * hashes; 
@property (readonly) long long numberOfBytesToHash; 
-(id)initWithFilePath:(id)arg1 hashes:(id)arg2 bytesToHash:(long long)arg3 ;
-(void)dealloc;
-(void)run;
-(id)filePath;
-(long long)numberOfBytesToHash;
-(id)hashes;
@end

