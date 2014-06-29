/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <OfficeImport/SFUOutputStream.h>

@class NSString;

@interface SFUFileOutputStream : NSObject <SFUOutputStream> {

	_sFILE* mFile;
	NSString* mPath;

}
-(void)dealloc;
-(id)path;
-(long long)offset;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(bool)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(bool)canCreateInputStream;
-(id)inputStream;
@end

