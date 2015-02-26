/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPPackage.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUTemporaryDirectory, NSMutableDictionary;

@interface TSPFilePackage : TSPPackage {

	NSObject*<OS_dispatch_queue> _bookmarkDataQueue;
	TSUTemporaryDirectory* _dataDirectory;
	NSMutableDictionary* _dataURLMap;

}
+(BOOL)isFilePackageFormatURL:(id)arg1 ;
+(id)zipArchiveURLFromPackageURL:(id)arg1 ;
+(unsigned long long)zipArchiveOptions;
+(BOOL)isFilePackageFormatZipArchive:(id)arg1 ;
-(long long)packageType;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3 ;
-(id)newDataStorageAtRelativePath:(id)arg1 ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg1 ;
-(id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(BOOL)arg6 ;
-(id)bookmarkDataForDataStorage:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)bookmarkDataNeedsWriteForDataStorage:(id)arg1 options:(unsigned long long)arg2 ;
@end
