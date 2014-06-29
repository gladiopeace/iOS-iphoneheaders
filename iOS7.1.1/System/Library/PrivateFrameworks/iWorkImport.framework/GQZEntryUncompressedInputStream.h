/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/GQZEntryInputStream.h>

@protocol GQZArchiveInputStream;
@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream> {

	long long mOffset;
	long long mEnd;
	<GQZArchiveInputStream>* mInput;

}
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 input:(id)arg3 ;
-(void)dealloc;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned long long*)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
@end

