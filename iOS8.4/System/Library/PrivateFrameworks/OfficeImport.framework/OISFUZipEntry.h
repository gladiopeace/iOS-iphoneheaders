/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@protocol SFUZipArchiveDataRepresentation;
@class OISFUDataRepresentation, OISFUCryptoKey;

@interface OISFUZipEntry : OISFUDataRepresentation {

	OISFUDataRepresentation*<SFUZipArchiveDataRepresentation> mArchiveDataRepresentation;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;
	unsigned long long mDataOffset;
	BOOL mHasDataOffset;
	unsigned long long mEncodedLength;
	BOOL mHasEncodedLength;
	OISFUCryptoKey* mCryptoKey;

}
-(unsigned long long)dataOffset;
-(unsigned long long)calculateEncodedLength;
-(void)dealloc;
-(id)data;
-(id)inputStream;
-(long long)encodedLength;
-(BOOL)isReadable;
-(void)setDataLength:(long long)arg1 ;
-(void)copyToFile:(id)arg1 ;
-(id)initFromCentralFileHeader:(const char*)arg1 dataRepresentation:(id)arg2 ;
-(void)readZip64ExtraField:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned)arg6 ;
-(void)setCryptoKey:(id)arg1 ;
-(BOOL)isCompressed;
-(BOOL)isEncrypted;
-(unsigned)crc;
-(void)setCompressionFlags:(unsigned short)arg1 ;
-(BOOL)isBackedByFile;
-(id)backingFilePath;
-(unsigned long long)backingFileDataOffset;
-(long long)dataLength;
@end
