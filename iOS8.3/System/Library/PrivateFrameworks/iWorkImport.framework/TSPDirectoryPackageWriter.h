/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPPackageWriter.h>

@protocol OS_dispatch_queue;
@class NSObject, TSPDirectoryPackageDataWriter;

@interface TSPDirectoryPackageWriter : TSPPackageWriter {

	NSObject*<OS_dispatch_queue> _componentFileIOQueue;
	TSPDirectoryPackageDataWriter* _dataWriter;

}
-(char)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(char)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 fileFormatVersion:(unsigned long long)arg6 updateType:(int)arg7 encryptionKey:(id)arg8 originalDocumentPackage:(id)arg9 originalSuppportPackage:(id)arg10 fileCoordinatorDelegate:(id)arg11 progress:(id)arg12 error:(id*)arg13 ;
-(unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(char)arg2 packageURL:(id)arg3 ;
-(id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(char)arg2 ;
-(id)targetDataURLForPath:(id)arg1 ;
-(CGDataConsumerRef)newCGDataConsumerAtRelativePath:(id)arg1 ;
-(id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 decryptionInfo:(id)arg3 preferredFilename:(id)arg4 error:(id*)arg5 ;
-(id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 ;
-(id)newRawDataWriteChannelForRelativePath:(id)arg1 originalSize:(unsigned long long)arg2 originalCRC:(unsigned)arg3 ;
@end

