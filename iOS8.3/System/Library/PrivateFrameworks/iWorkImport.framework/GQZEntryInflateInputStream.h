/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQZEntryInputStream.h>

@protocol GQZArchiveInputStream;
@class NSString;

@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream> {

	z_stream_s* mStream;
	long long mOffset;
	long long mEnd;
	unsigned long mCalculatedCrc;
	unsigned long mCheckCrc;
	id<GQZArchiveInputStream> mInput;
	char* mOutBuffer;
	unsigned long mOutBufferSize;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long)arg4 input:(id)arg5 ;
-(void)dealloc;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned*)arg2 ;
@end

