/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/SFUInputStream.h>

@protocol SFUInputStream;
@class OISFUCryptor;

@interface OISFUCryptoInputStream : NSObject <SFUInputStream> {

	<SFUInputStream>* mBaseStream;
	OISFUCryptor* mCryptor;
	long long mOffset;

}
-(void)dealloc;
-(long long)offset;
-(void)close;
-(bool)canSeek;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2 ;
@end

