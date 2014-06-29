/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SFUZipArchiveDataRepresentation;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, OISFUDataRepresentation, NSData, NSString, OISFUCryptoKey;

@interface OISFUZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	OISFUDataRepresentation<SFUZipArchiveDataRepresentation>* mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	OISFUCryptoKey* mCryptoKey;
	NSData* mEncryptedDocumentUuid;

}
+(bool)isZipArchiveAtPath:(id)arg1 ;
-(void)readEntries;
-(void)collapseCommonRootDirectory;
-(SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1 ;
-(id)readFilenameFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)readExtraFieldFromBuffer:(const char*)arg1 size:(unsigned long long)arg2 entry:(id)arg3 ;
-(const char*)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2 ;
-(void)dealloc;
-(id)entryWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(bool)arg2 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(bool)arg2 ;
-(bool)isEncrypted;
-(void)setCryptoKey:(id)arg1 ;
-(id)allEntryNames;
-(id)entryWithName:(id)arg1 dataLength:(long long)arg2 ;
-(id)passphraseVerifier;
-(id)passphraseHint;
-(id)encryptedDocumentUuid;
-(bool)decompressAtPath:(id)arg1 ;
@end

