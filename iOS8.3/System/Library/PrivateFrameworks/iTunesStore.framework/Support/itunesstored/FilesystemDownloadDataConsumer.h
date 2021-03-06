/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadDataConsumer.h>

@class NSArray, NSString;

@interface FilesystemDownloadDataConsumer : DownloadDataConsumer {

	long long _bytesWritten;
	int _fd;
	char _hasConsumedData;
	NSArray* _hashes;
	CC_MD5state_st _md5Context;
	int _numberOfBytesToHash;
	NSString* _path;
	unsigned long long _resumptionOffset;
	long long _verifiedBytes;

}
-(char)consumeData:(id)arg1 error:(id*)arg2 ;
-(char)finish:(id*)arg1 ;
-(char)hasConsumedData;
-(unsigned long long)resumptionOffset;
-(char)_hashAndWriteData:(id)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 MD5Hashes:(id)arg2 numberOfBytesToHash:(int)arg3 ;
-(void)truncate;
-(void)dealloc;
-(void)suspend;
-(void)reset;
-(char)_openFile;
-(void)_truncateToSize:(long long)arg1 ;
-(char)_checkHashForByteCount:(long long)arg1 ;
@end

